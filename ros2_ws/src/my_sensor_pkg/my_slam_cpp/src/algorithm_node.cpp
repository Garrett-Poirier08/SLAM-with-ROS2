#include <memory>
#include <vector>
#include <cstdint>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "nav_msgs/msg/occupancy_grid.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "tf2_ros/transform_broadcaster.h"

using std::placeholders::_1;

class AlgorithmNode : public rclcpp::Node
{
public:
  AlgorithmNode()
  : Node("algorithm_node")
  {
    // 1. Declare Algorithm Parameters
    this->declare_parameter<double>("map_resolution", 0.05);
    this->declare_parameter<int>("grid_width", 160);
    this->declare_parameter<int>("grid_height", 160);

    resolution_ = this->get_parameter("map_resolution").as_double();
    width_ = this->get_parameter("grid_width").as_int();
    height_ = this->get_parameter("grid_height").as_int();

    // Initialize your internal data structures
    grid_state_.resize(width_ * height_, 0.0);

    // 2. Subscribers
    scan_sub_ = this->create_subscription<sensor_msgs::msg::LaserScan>(
      "/scan", rclcpp::SensorDataQoS(),
      std::bind(&AlgorithmNode::scan_callback, this, _1));

    odom_sub_ = this->create_subscription<nav_msgs::msg::Odometry>(
      "/odom", 10,
      std::bind(&AlgorithmNode::odom_callback, this, _1));

    imu_sub_ = this->create_subscription<sensor_msgs::msg::Imu>(
      "/sensor/data_raw", rclcpp::SensorDataQoS(),
      std::bind(&AlgorithmNode::imu_callback, this, _1));

    // 3. Publishers & TF Broadcaster
    map_pub_ = this->create_publisher<nav_msgs::msg::OccupancyGrid>("/map", 10);
    pose_pub_ = this->create_publisher<geometry_msgs::msg::PoseStamped>("/slam/pose", 10);
    tf_broadcaster_ = std::make_unique<tf2_ros::TransformBroadcaster>(*this);

    RCLCPP_INFO(this->get_logger(), "Algorithm Node ready.");
  }

private:
  void odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg)
  {
    latest_odom_ = msg;
    has_odom_ = true;

    // TODO: Extract pose / twist or run prediction step here
  }

  void imu_callback(const sensor_msgs::msg::Imu::SharedPtr msg)
  {
    latest_imu_ = msg;
    has_imu_ = true;

    // TODO: Integrate angular velocity / linear acceleration here
  }

  void scan_callback(const sensor_msgs::msg::LaserScan::SharedPtr msg)
  {
    latest_scan_ = msg;
    if (!has_odom_) {
      return;
    }

    run_algorithm();
  }

  void run_algorithm()
  {
    // =========================================================================
    // TODO: Implement your core math here using:
    //   - latest_scan_->ranges, angle_min, angle_increment
    //   - latest_odom_->pose.pose, twist.twist
    //   - latest_imu_->angular_velocity, linear_acceleration
    //   - state_x_, state_y_, state_yaw_, grid_state_
    // =========================================================================

    // Example output message shells ready to populate and publish:
    nav_msgs::msg::OccupancyGrid map_msg;
    map_msg.header.stamp = this->get_clock()->now();
    map_msg.header.frame_id = "map";
    // TODO: Populate map_msg.info and map_msg.data
    // map_pub_->publish(map_msg);
  }

  // ROS 2 Interfaces
  rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr scan_sub_;
  rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub_;
  rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr imu_sub_;

  rclcpp::Publisher<nav_msgs::msg::OccupancyGrid>::SharedPtr map_pub_;
  rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr pose_pub_;
  std::unique_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;

  // Cached Sensor Messages
  sensor_msgs::msg::LaserScan::SharedPtr latest_scan_;
  nav_msgs::msg::Odometry::SharedPtr latest_odom_;
  sensor_msgs::msg::Imu::SharedPtr latest_imu_;
  bool has_odom_{false};
  bool has_imu_{false};

  // Algorithm State Variables (Add your matrices/vectors here)
  double resolution_{0.05};
  int width_{160};
  int height_{160};
  double state_x_{0.0};
  double state_y_{0.0};
  double state_yaw_{0.0};
  std::vector<double> grid_state_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<AlgorithmNode>());
  rclcpp::shutdown();
  return 0;
}