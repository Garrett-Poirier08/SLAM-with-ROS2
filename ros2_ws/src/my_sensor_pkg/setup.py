import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'my_sensor_pkg'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),
        (os.path.join('share', package_name, 'config'), glob('config/*.yaml')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='garrettpoirier',
    maintainer_email='root@todo.todo',
    description='Sensor and SLAM launch package',
    license='Apache-2.0',
    entry_points={
        'console_scripts': [
            'wave_publisher = my_sensor_pkg.wave_publisher:main',
            'wheel_imu_odom = my_sensor_pkg.wheel_imu_odom:main',
            'lidar_sim = my_sensor_pkg.lidar_sim:main',
            'grid_mapper = my_sensor_pkg.grid_mapper:main',
        ],
    },
)