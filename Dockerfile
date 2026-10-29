FROM ros:jazzy-ros-core

ENV DEBIAN_FRONTEND=noninteractive

# 1. Install build tools, hardware libraries, and full ROS 2 robotics stack
RUN apt-get update && apt-get install -y --no-install-recommends \
    build-essential \
    python3-colcon-common-extensions \
    python3-pip \
    python3-serial \
    python3-smbus \
    python3-rosdep \
    libeigen3-dev \
    ros-jazzy-foxglove-bridge \
    ros-jazzy-tf2-ros \
    ros-jazzy-tf2-tools \
    ros-jazzy-teleop-twist-keyboard \
    # Foxglove & Core TF tools
    ros-jazzy-foxglove-bridge \
    ros-jazzy-tf2-ros \
    ros-jazzy-tf2-tools \
    # Robot Model (URDF / Xacro)
    ros-jazzy-robot-state-publisher \
    ros-jazzy-joint-state-publisher \
    ros-jazzy-xacro \
    # Odometry Fusion & SLAM
    ros-jazzy-robot-localization \
    ros-jazzy-slam-toolbox \
    # Sensor Filters
    ros-jazzy-imu-tools \
    ros-jazzy-laser-filters \
    # Drive Base Control & Teleop
    ros-jazzy-ros2-control \
    ros-jazzy-ros2-controllers \
    ros-jazzy-teleop-twist-keyboard \
    # Navigation & Map Saving
    ros-jazzy-navigation2 \
    ros-jazzy-nav2-bringup \
    && rm -rf /var/lib/apt/lists/*

# 2. Install NVIDIA Jetson.GPIO for Python (since it is not in Ubuntu 24.04 apt)
RUN pip3 install --no-cache-dir --break-system-packages Jetson.GPIO

# 3. Auto-source ROS 2 and workspace on container startup
RUN echo "source /opt/ros/jazzy/setup.bash" >> /root/.bashrc && \
    echo "if [ -f /ros2_ws/install/setup.bash ]; then source /ros2_ws/install/setup.bash; fi" >> /root/.bashrc

WORKDIR /ros2_ws
