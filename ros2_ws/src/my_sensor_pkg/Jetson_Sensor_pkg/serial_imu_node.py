#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
import serial

class SerialImuNode(Node):
    def __init__(self):
        super().__init__('serial_imu_node')
        
        # Declare parameters for easy configuration via launch files
        self.declare_parameter('port', '/dev/tty_imu')
        self.declare_parameter('baudrate', 115200)
        
        port = self.get_parameter('port').get_parameter_value().string_value
        baudrate = self.get_parameter('baudrate').get_parameter_value().integer_value
        
        # Initialize serial connection
        try:
            self.serial_port = serial.Serial(port, baudrate, timeout=0.1)
            self.get_logger().info(f'Successfully connected to IMU on {port} at {baudrate} baud.')
        except Exception as e:
            self.get_logger().error(f'Failed to open serial port {port}: {e}')
            raise e
            
        # ROS 2 Publisher for standard Imu messages
        self.publisher_ = self.create_publisher(Imu, 'imu/data_raw', 10)
        
        # Poll the serial port at 50 Hz (0.02 seconds)
        self.timer = self.create_timer(0.02, self.timer_callback)

    def timer_callback(self):
        if self.serial_port.in_waiting > 0:
            try:
                line = self.serial_port.readline().decode('utf-8').strip()
                if line:
                    self.parse_and_publish(line)
            except UnicodeDecodeError:
                pass  # Ignore minor serial transmission glitches

    def parse_and_publish(self, line):
        # Assumes incoming string format over serial: "ax,ay,az,gx,gy,gz"
        # Modify this splitting logic to match your sensor's specific output format or firmware packet structure
        parts = line.split(',')
        if len(parts) >= 6:
            try:
                ax = float(parts[0])
                ay = float(parts[1])
                az = float(parts[2])
                gx = float(parts[3])
                gy = float(parts[4])
                gz = float(parts[5])
                
                imu_msg = Imu()
                imu_msg.header.stamp = self.get_clock().now().to_msg()
                imu_msg.header.frame_id = 'imu_link'
                
                # Linear acceleration (m/s^2)
                imu_msg.linear_acceleration.x = ax
                imu_msg.linear_acceleration.y = ay
                imu_msg.linear_acceleration.z = az
                
                # Angular velocity (rad/s)
                imu_msg.angular_velocity.x = gx
                imu_msg.angular_velocity.y = gy
                imu_msg.angular_velocity.z = gz
                
                # Set covariance row 0 to -1 if orientation estimation is handled downstream (e.g. by robot_localization EKF)
                imu_msg.orientation_covariance[0] = -1.0
                
                self.publisher_.publish(imu_msg)
            except ValueError:
                pass  # Handle conversion errors if a malformed packet arrives

def main(args=None):
    rclpy.init(args=args)
    node = SerialImuNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()