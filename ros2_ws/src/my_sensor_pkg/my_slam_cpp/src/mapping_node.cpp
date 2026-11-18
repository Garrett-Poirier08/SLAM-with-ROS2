#include <memory>
#include <functional>
#include <cmath>
#include <unordered_map>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"

#include <Grid2D.h>

class mapping_node : public rclcpp::Node {
public:

    mapping_node() : Node("mapping_node_subscriber"), grid(200,200,.005f,-5.0f,-5.0f) {
        scan_sub_ = this->create_subscription<sensor_msgs::msg::LaserScan>(
            "/scan",
            rclcpp::SensorDataQoS(),
            std::bind(&mapping_node::scanCallback, this, std::placeholders::_1));
        // subscriber to the node handling the imu and wheel encoder fusion
        //odom_sub = this->create_subscription<sensor_msgs::msg::
    }

private:
    void scanCallback(const sensor_msgs::msg::LaserScan::SharedPtr msg) {
        for (size_t i = 0; i < msg->ranges.size(); ++i) {
            float range = msg->ranges[i];

            // Skip out-of-range (infinity) or invalid readings
            if (std::isinf(range) || std::isnan(range) ||
                range < msg->range_min || range > msg->range_max) {
                continue;
            }

            float angle_rad = msg->angle_min + i * msg->angle_increment;
            // Convert polar (range, angle_rad) to local Cartesian (x, y) in laser_frame:
            float x = range * std::cos(angle_rad);
            float y = range * std::sin(angle_rad);
            
            //need to transform the points by x y speed as well as angular velocity.
        }
    }

    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr scan_sub_;
    Grid2D grid;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<mapping_node>());
    rclcpp::shutdown();
    return 0;
}