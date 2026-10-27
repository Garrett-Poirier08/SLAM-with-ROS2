import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node


def generate_launch_description():
    pkg_share = get_package_share_directory('my_sensor_pkg')
    slam_params_file = os.path.join(pkg_share, 'config', 'mapper_params_online_async.yaml')

    slam_toolbox_dir = get_package_share_directory('slam_toolbox')
    slam_launch_file = os.path.join(slam_toolbox_dir, 'launch', 'online_async_launch.py')

    return LaunchDescription([
        # 1. Foxglove WebSocket Bridge (Port 8765)
        Node(
            package='foxglove_bridge',
            executable='foxglove_bridge',
            name='foxglove_bridge',
            parameters=[{'port': 8765}],
            output='screen'
        ),

        # 2. Static TF: base_link -> laser_frame (x=0.1m forward, z=0.08m up)
        # (Skip if wheel_imu_odom already broadcasts base_link -> laser_frame)
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='base_to_laser_tf',
            arguments=['0.1', '0.0', '0.08', '0.0', '0.0', '0.0', 'base_link', 'laser_frame']
        ),

        # 3. Odometry Node (Must broadcast odom -> base_link TF, NOT map -> odom!)
        Node(
            package='my_sensor_pkg',
            executable='wheel_imu_odom',
            name='wheel_imu_odom',
            output='screen'
        ),

        # 4. LiDAR Node (Publishes /scan with frame_id: 'laser_frame')
        Node(
            package='my_sensor_pkg',
            executable='lidar_sim',
            name='lidar_sim',
            output='screen'
        ),

        # 5. SLAM Toolbox (Online Async Mapping + Lifecycle Autostart)
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(slam_launch_file),
            launch_arguments={
                'slam_params_file': slam_params_file,
                'use_sim_time': 'false'
            }.items()
        ),
    ])