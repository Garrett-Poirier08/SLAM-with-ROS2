from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='foxglove_bridge',
            executable='foxglove_bridge',
            name='foxglove_bridge',
            parameters=[{'port': 8765}],
            output='screen'
        ),
        Node(
            package='my_sensor_pkg',
            executable='wave_publisher',
            name='wave_publisher',
            output='screen'
        ),
        Node(
            package='my_sensor_pkg',
            executable='wheel_imu_odom',
            name='wheel_imu_odom',
            output='screen'
        ),
        Node(
            package='my_sensor_pkg',
            executable='lidar_sim',
            name='lidar_sim',
            output='screen'
        ),
        Node(
            package='my_sensor_pkg',
            executable='grid_mapper',
            name='grid_mapper',
            output='screen'
        ),
    ])
