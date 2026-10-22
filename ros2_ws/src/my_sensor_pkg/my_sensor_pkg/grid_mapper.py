import math
import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry, OccupancyGrid
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import TransformStamped
from tf2_ros.static_transform_broadcaster import StaticTransformBroadcaster


def bresenham_line(x0: int, y0: int, x1: int, y1: int):
    """Return list of (gx, gy) grid cells along the ray from (x0, y0) to (x1, y1)."""
    cells = []
    dx = abs(x1 - x0)
    dy = abs(y1 - y0)
    x, y = x0, y0
    sx = 1 if x0 < x1 else -1
    sy = 1 if y0 < y1 else -1

    if dx > dy:
        err = dx / 2.0
        while x != x1:
            cells.append((x, y))
            err -= dy
            if err < 0:
                y += sy
                err += dx
            x += sx
    else:
        err = dy / 2.0
        while y != y1:
            cells.append((x, y))
            err -= dx
            if err < 0:
                x += sx
                err += dy
            y += sy

    cells.append((x1, y1))
    return cells


class OccupancyGridMapperNode(Node):
    def __init__(self):
        super().__init__('grid_mapper_node')

        # 1. Broadcast map -> odom TF (Identity in pure mapping; corrected by scan-matching in full SLAM)
        self.static_broadcaster = StaticTransformBroadcaster(self)
        self.publish_map_to_odom_tf()

        # 2. Map Grid Configuration: 8m x 8m area at 5cm (0.05m) resolution -> 160 x 160 cells
        self.resolution = 0.05
        self.width = 160
        self.height = 160
        self.origin_x = -4.0
        self.origin_y = -4.0

        # Log-odds array initialized to 0.0 (p = 0.5, Unknown)
        self.log_odds = [0.0] * (self.width * self.height)
        self.l_occ = 0.85     # Log-odds boost on hit
        self.l_free = -0.40   # Log-odds penalty along empty ray
        self.l_max = 4.0
        self.l_min = -4.0

        # Robot pose state from /odom
        self.car_x = 0.0
        self.car_y = 0.0
        self.car_yaw = 0.0
        self.has_odom = False

        # 3. Subscribers and /map Publisher
        self.create_subscription(Odometry, '/odom', self.odom_callback, 10)
        self.create_subscription(LaserScan, '/scan', self.scan_callback, 10)
        self.map_pub = self.create_publisher(OccupancyGrid, '/map', 10)

        self.get_logger().info('Occupancy Grid Mapper started! Building /map from /scan + /odom')

    def publish_map_to_odom_tf(self):
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'map'
        t.child_frame_id = 'odom'
        t.transform.rotation.w = 1.0
        self.static_broadcaster.sendTransform(t)

    def world_to_grid(self, wx: float, wy: float):
        gx = int(math.floor((wx - self.origin_x) / self.resolution))
        gy = int(math.floor((wy - self.origin_y) / self.resolution))
        return gx, gy

    def in_bounds(self, gx: int, gy: int) -> bool:
        return 0 <= gx < self.width and 0 <= gy < self.height

    def odom_callback(self, msg: Odometry):
        self.car_x = msg.pose.pose.position.x
        self.car_y = msg.pose.pose.position.y
        qz = msg.pose.pose.orientation.z
        qw = msg.pose.pose.orientation.w
        self.car_yaw = 2.0 * math.atan2(qz, qw)
        self.has_odom = True

    def scan_callback(self, scan: LaserScan):
        if not self.has_odom:
            return

        # Global position of the LiDAR (10 cm forward of base_link)
        laser_x = self.car_x + 0.10 * math.cos(self.car_yaw)
        laser_y = self.car_y + 0.10 * math.sin(self.car_yaw)
        gx0, gy0 = self.world_to_grid(laser_x, laser_y)

        if not self.in_bounds(gx0, gy0):
            return

        # Trace each laser beam and update log-odds
        for i, dist in enumerate(scan.ranges):
            if math.isnan(dist) or math.isinf(dist) or dist < scan.range_min:
                continue

            hit_obstacle = dist < (scan.range_max - 0.05)
            clamped_dist = min(dist, scan.range_max)

            local_angle = scan.angle_min + i * scan.angle_increment
            global_angle = self.car_yaw + local_angle

            hit_x = laser_x + clamped_dist * math.cos(global_angle)
            hit_y = laser_y + clamped_dist * math.sin(global_angle)
            gx1, gy1 = self.world_to_grid(hit_x, hit_y)

            ray_cells = bresenham_line(gx0, gy0, gx1, gy1)

            # All cells along the ray BEFORE the endpoint are FREE space
            for gx, gy in ray_cells[:-1]:
                if self.in_bounds(gx, gy):
                    idx = gy * self.width + gx
                    self.log_odds[idx] = max(self.l_min, self.log_odds[idx] + self.l_free)

            # The endpoint cell is OCCUPIED (if the ray actually struck an obstacle < range_max)
            if hit_obstacle:
                end_gx, end_gy = ray_cells[-1]
                if self.in_bounds(end_gx, end_gy):
                    idx = end_gy * self.width + end_gx
                    self.log_odds[idx] = min(self.l_max, self.log_odds[idx] + self.l_occ)

        # Convert log-odds grid into ROS OccupancyGrid [-1, 0..100] and publish
        grid_msg = OccupancyGrid()
        grid_msg.header.stamp = scan.header.stamp
        grid_msg.header.frame_id = 'map'
        grid_msg.info.resolution = self.resolution
        grid_msg.info.width = self.width
        grid_msg.info.height = self.height
        grid_msg.info.origin.position.x = self.origin_x
        grid_msg.info.origin.position.y = self.origin_y
        grid_msg.info.origin.orientation.w = 1.0

        occ_data = []
        for l_val in self.log_odds:
            if abs(l_val) < 0.15:
                occ_data.append(-1)  # Unknown
            else:
                prob = 1.0 / (1.0 + math.exp(-l_val))
                occ_data.append(int(round(prob * 100.0)))

        grid_msg.data = occ_data
        self.map_pub.publish(grid_msg)


def main(args=None):
    rclpy.init(args=args)
    node = OccupancyGridMapperNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
