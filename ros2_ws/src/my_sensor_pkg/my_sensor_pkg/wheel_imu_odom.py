import math
import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from geometry_msgs.msg import TransformStamped
from tf2_ros import TransformBroadcaster


def yaw_to_quaternion(yaw: float):
    return (0.0, 0.0, math.sin(yaw / 2.0), math.cos(yaw / 2.0))


class WheelImuOdomNode(Node):
    def __init__(self):
        super().__init__('wheel_imu_odom_node')
        self.odom_pub = self.create_publisher(Odometry, '/odom', 10)
        self.tf_broadcaster = TransformBroadcaster(self)

        self.wheel_base = 0.25
        self.x = 0.0
        self.y = 0.0
        self.theta = 0.0
        self.last_time = self.get_clock().now()

        self.timer = self.create_timer(0.05, self.update_odometry)
        self.get_logger().info('Wheel + IMU Odometry Node started! Broadcasting odom -> base_link')

    def update_odometry(self):
        now = self.get_clock().now()
        dt = (now - self.last_time).nanoseconds / 1e9
        self.last_time = now

        v_left = 0.25
        v_right = 0.45
        imu_yaw_rate = 0.78

        v = (v_right + v_left) / 2.0
        omega_wheels = (v_right - v_left) / self.wheel_base
        alpha = 0.90
        omega = alpha * imu_yaw_rate + (1.0 - alpha) * omega_wheels

        mid_theta = self.theta + 0.5 * omega * dt
        self.x += v * math.cos(mid_theta) * dt
        self.y += v * math.sin(mid_theta) * dt
        self.theta += omega * dt

        qx, qy, qz, qw = yaw_to_quaternion(self.theta)

        t = TransformStamped()
        t.header.stamp = now.to_msg()
        t.header.frame_id = 'odom'
        t.child_frame_id = 'base_link'
        t.transform.translation.x = self.x
        t.transform.translation.y = self.y
        t.transform.translation.z = 0.0
        t.transform.rotation.x = qx
        t.transform.rotation.y = qy
        t.transform.rotation.z = qz
        t.transform.rotation.w = qw
        self.tf_broadcaster.sendTransform(t)

        odom = Odometry()
        odom.header.stamp = now.to_msg()
        odom.header.frame_id = 'odom'
        odom.child_frame_id = 'base_link'
        odom.pose.pose.position.x = self.x
        odom.pose.pose.position.y = self.y
        odom.pose.pose.orientation.z = qz
        odom.pose.pose.orientation.w = qw
        odom.twist.twist.linear.x = v
        odom.twist.twist.angular.z = omega
        self.odom_pub.publish(odom)


def main(args=None):
    rclpy.init(args=args)
    node = WheelImuOdomNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
