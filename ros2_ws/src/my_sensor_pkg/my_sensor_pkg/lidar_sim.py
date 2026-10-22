import math
import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import TransformStamped
from tf2_ros.static_transform_broadcaster import StaticTransformBroadcaster

"""
LidarSimNode is a node just for simulating a 2D LiDAR in a virtual room. It subscribes to /odom to get the car's position and orientation, and publishes /scan with simulated LiDAR readings based on the car's pose and the room's geometry.
"""
class LidarSimNode(Node):
    
    
    def __init__(self):
        super().__init__('lidar_sim_node')

        #Broadcast Static TF: base_link -> laser_frame (10cm forward, 15cm up)
        self.static_broadcaster = StaticTransformBroadcaster(self)
        self.publish_static_laser_tf()

        # 2. Subscribe to /odom so we know where the car is inside the virtual room
        self.car_x = 0.0
        self.car_y = 0.0
        self.car_theta = 0.0
        self.create_subscription(Odometry, '/odom', self.odom_callback, 10)

        # 3. Publisher for /scan at 10 Hz
        self.scan_pub = self.create_publisher(LaserScan, '/scan', 10)
        self.timer = self.create_timer(0.1, self.publish_scan)
        self.get_logger().info('2D LiDAR Node started! Publishing /scan in laser_frame')
    """
    publishes a static transform from base_link to laser_frame, which is 10cm forward and 15cm up from the car's base_link. This allows the LiDAR readings to be correctly positioned in the robot's frame of reference, but can be changed when I actually build the car.
    """
    def publish_static_laser_tf(self):
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'base_link'
        t.child_frame_id = 'laser_frame'
        t.transform.translation.x = 0.10
        t.transform.translation.y = 0.0
        t.transform.translation.z = 0.15
        t.transform.rotation.w = 1.0
        self.static_broadcaster.sendTransform(t)

    #fetches the cars position and orientation from imu
    def odom_callback(self, msg: Odometry):
        self.car_x = msg.pose.pose.position.x
        self.car_y = msg.pose.pose.position.y
        qz = msg.pose.pose.orientation.z
        qw = msg.pose.pose.orientation.w
        self.car_theta = 2.0 * math.atan2(qz, qw)
    #publishes a simulated LiDAR scan based on the car's position and orientation, as well as the room's geometry (walls and a cylindrical pillar). The scan is published to the /scan topic at 10 Hz.
    def publish_scan(self):
        scan = LaserScan()
        scan.header.stamp = self.get_clock().now().to_msg()
        scan.header.frame_id = 'laser_frame'

        num_readings = 360
        scan.angle_min = -math.pi
        scan.angle_max = math.pi
        scan.angle_increment = (2.0 * math.pi) / num_readings
        scan.time_increment = 0.0
        scan.scan_time = 0.1
        scan.range_min = 0.10
        scan.range_max = 10.0
        wallSize = 3.0  # Room walls at x = +/-3.0m and y = +/-3.0m

        laser_x = self.car_x + 0.10 * math.cos(self.car_theta)
        laser_y = self.car_y + 0.10 * math.sin(self.car_theta)

        ranges = []
        for i in range(num_readings):
            local_angle = scan.angle_min + i * scan.angle_increment
            global_angle = self.car_theta + local_angle
            dx = math.cos(global_angle)
            dy = math.sin(global_angle)

            min_dist = scan.range_max

            # Room walls at x = +/-3.0m and y = +/-3.0m
            if abs(dx) > 1e-6:
                for wall_x in (-wallSize, wallSize):
                    dist = (wall_x - laser_x) / dx
                    if 0.0 < dist < min_dist:
                        hit_y = laser_y + dist * dy
                        if -wallSize <= hit_y <= wallSize:
                            min_dist = dist

            if abs(dy) > 1e-6:
                for wall_y in (-wallSize, wallSize):
                    dist = (wall_y - laser_y) / dy
                    if 0.0 < dist < min_dist:
                        hit_x = laser_x + dist * dx
                        if -wallSize <= hit_x <= wallSize:
                            min_dist = dist

            # Cylindrical pillar obstacle at (1.2, 1.2) with radius 0.35m
            ox, oy, r = 1.2 - laser_x, 1.2 - laser_y, 0.35
            proj = ox * dx + oy * dy
            if proj > 0:
                perp_sq = (ox * ox + oy * oy) - (proj * proj)
                if perp_sq < r * r:
                    pillar_dist = proj - math.sqrt(r * r - perp_sq)
                    if 0.0 < pillar_dist < min_dist:
                        min_dist = pillar_dist

            ranges.append(float(min_dist))

        scan.ranges = ranges
        self.scan_pub.publish(scan)


def main(args=None):
    rclpy.init(args=args)
    node = LidarSimNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
