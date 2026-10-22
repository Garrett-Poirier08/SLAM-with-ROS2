import math
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64


class WavePublisher(Node):
    def __init__(self):
        super().__init__('wave_publisher')
        self.publisher_ = self.create_publisher(Float64, '/sine_wave', 10)
        self.timer_period = 0.05
        self.timer = self.create_timer(self.timer_period, self.timer_callback)
        self.t = 0.0
        self.get_logger().info('Sine Wave Publisher started on /sine_wave at 20Hz')

    def timer_callback(self):
        msg = Float64()
        msg.data = math.sin(self.t)
        self.publisher_.publish(msg)
        self.t += self.timer_period


def main(args=None):
    rclpy.init(args=args)
    node = WavePublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
