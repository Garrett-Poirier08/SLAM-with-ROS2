import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool
import Jetson.GPIO as GPIO

class JetsonGPIONode(Node):
    def __init__(self):
        super().__init__('jetson_gpio_node')
        
        # Pin definition (BOARD numbering scheme, e.g., Pin 12)
        self.pin = 12
        GPIO.setmode(GPIO.BOARD)
        GPIO.setup(self.pin, GPIO.OUT)

        # Create a ROS 2 subscriber to control the pin
        self.subscription = self.create_subscription(
            Bool,
            'gpio_command',
            self.listener_callback,
            10
        )
        self.get_logger().info(f'Jetson GPIO Node initialized on pin {self.pin}')

    def listener_callback(self, msg):
        GPIO.output(self.pin, msg.data)
        self.get_logger().info(f'Set pin {self.pin} to {msg.data}')

    def destroy_node(self):
        GPIO.cleanup()
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    node = JetsonGPIONode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()