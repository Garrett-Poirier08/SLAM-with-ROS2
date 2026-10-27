cmake_minimum_required(VERSION 3.8)
project(my_slam_cpp)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic -O3)
endif()

# 1. Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)

# 2. Declare your C++ executable
add_executable(algorithm_node src/algorithm_template.cpp)

# 3. Link ROS 2 libraries to the executable
ament_target_dependencies(algorithm_node
  rclcpp
  sensor_msgs
  nav_msgs
  geometry_msgs
  tf2
  tf2_ros
)

# 4. Install executable so `ros2 run my_slam_cpp algorithm_node` finds it
install(TARGETS
  algorithm_node
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()