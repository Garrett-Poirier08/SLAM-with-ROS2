#include <cmath>
#include <limits>
#include <memory>
#include <string>
#include <vector>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "sl_lidar.h"
#include "sl_lidar_driver.h"

using namespace sl;

#ifndef DEG2RAD
#define DEG2RAD(x) ((x) * M_PI / 180.0)
#endif

class S2DirectPublisherNode : public rclcpp::Node {
public:
    S2DirectPublisherNode() : Node("s2_direct_publisher_node") {
        // 1. Declare ROS 2 parameters (Jazzy requires explicit types/defaults)
        port_ = this->declare_parameter<std::string>("serial_port", "/dev/ttyUSB0");
        baudrate_ = this->declare_parameter<int>("serial_baudrate", 1000000);
        frame_id_ = this->declare_parameter<std::string>("frame_id", "laser_frame");
        inverted_ = this->declare_parameter<bool>("inverted", false);

        // 2. Create the /scan publisher
        scan_pub_ = this->create_publisher<sensor_msgs::msg::LaserScan>("/scan", rclcpp::SensorDataQoS());

        // 3. Initialize and connect to the RPLIDAR S2
        if (!initLidar()) {
            RCLCPP_ERROR(this->get_logger(), "LiDAR initialization failed. Shutting down.");
            rclcpp::shutdown();
        }
    }

    ~S2DirectPublisherNode() override {
        // 6. Clean shutdown when node exits (Ctrl+C)
        if (drv_) {
            RCLCPP_INFO(this->get_logger(), "Stopping RPLIDAR S2 motor...");
            drv_->stop();
            drv_->setMotorSpeed(0);
            drv_->disconnect();
            delete drv_;
            drv_ = nullptr;
        }
    }

    void spinScanLoop() {
        sl_lidar_response_measurement_node_hq_t nodes[8192];

        while (rclcpp::ok()) {
            size_t count = sizeof(nodes) / sizeof(nodes[0]);

            // Record start timestamp and duration of the 360-degree revolution
            rclcpp::Time start_scan_time = this->now();
            sl_result res = drv_->grabScanDataHq(nodes, count);
            rclcpp::Time end_scan_time = this->now();
            double scan_duration = (end_scan_time - start_scan_time).seconds();

            if (SL_IS_OK(res)) {
                drv_->ascendScanData(nodes, count);
                publishLaserScan(nodes, count, start_scan_time, scan_duration);
            } else if (res == SL_RESULT_OPERATION_TIMEOUT) {
                RCLCPP_WARN(this->get_logger(), "S2 grabScanDataHq timed out.");
            }

            // Process any ROS callbacks
            rclcpp::spin_some(this->get_node_base_interface());
        }
    }

private:
    bool initLidar() {
        drv_ = *createLidarDriver();
        if (!drv_) {
            RCLCPP_ERROR(this->get_logger(), "Failed to allocate ILidarDriver.");
            return false;
        }

        channel_ = *createSerialPortChannel(port_, baudrate_);
        if (SL_IS_FAIL(drv_->connect(channel_))) {
            RCLCPP_ERROR(this->get_logger(), "Failed to connect to S2 on %s at %d baud.",
                         port_.c_str(), baudrate_);
            return false;
        }

        sl_lidar_response_device_health_t healthinfo;
        if (!SL_IS_OK(drv_->getHealth(healthinfo)) || healthinfo.status != SL_LIDAR_STATUS_OK) {
            RCLCPP_ERROR(this->get_logger(), "RPLIDAR S2 health error (status: %d).", healthinfo.status);
            return false;
        }
        RCLCPP_INFO(this->get_logger(), "RPLIDAR S2 health status is OK.");

        drv_->setMotorSpeed();
        if (SL_IS_FAIL(drv_->startScan(false, true, 0, &scan_mode_))) {
            RCLCPP_ERROR(this->get_logger(), "Failed to start scan on RPLIDAR S2.");
            return false;
        }

        RCLCPP_INFO(this->get_logger(), "Active Scan Mode: %s (Max Range: %.1f m)",
                    scan_mode_.scan_mode, scan_mode_.max_distance);
        return true;
    }

    void publishLaserScan(sl_lidar_response_measurement_node_hq_t* nodes,
                          size_t node_count,
                          rclcpp::Time start_time,
                          double scan_duration) {
        if (node_count <= 1) return;

        auto scan_msg = std::make_unique<sensor_msgs::msg::LaserScan>();

        // Header
        scan_msg->header.stamp = start_time;
        scan_msg->header.frame_id = frame_id_;

        // Angular bounds: [-pi, +pi] in ROS 2 counter-clockwise frame
        float min_angle_deg = nodes[0].angle_z_q14 * 90.f / 16384.f;
        float max_angle_deg = nodes[node_count - 1].angle_z_q14 * 90.f / 16384.f;

        scan_msg->angle_min = DEG2RAD(min_angle_deg) - M_PI;
        scan_msg->angle_max = DEG2RAD(max_angle_deg) - M_PI;
        scan_msg->angle_increment =
            (scan_msg->angle_max - scan_msg->angle_min) / static_cast<double>(node_count - 1);

        // Timing and distance limits (S2 minimum range is 0.05m)
        scan_msg->scan_time = static_cast<float>(scan_duration);
        scan_msg->time_increment =
            static_cast<float>(scan_duration / static_cast<double>(node_count - 1));
        scan_msg->range_min = 0.05f;
        scan_msg->range_max = scan_mode_.max_distance > 0.0f ? scan_mode_.max_distance : 30.0f;

        scan_msg->ranges.resize(node_count);
        scan_msg->intensities.resize(node_count);

        for (size_t i = 0; i < node_count; ++i) {
            float dist_m = (nodes[i].dist_mm_q2 / 4.0f) / 1000.0f;
            float intensity = static_cast<float>(nodes[i].quality >> 2);

            // Reverse index to convert Slamtec's clockwise order to ROS 2 counter-clockwise order
            size_t ros_index = inverted_ ? i : (node_count - 1 - i);

            if (dist_m == 0.0f) {
                scan_msg->ranges[ros_index] = std::numeric_limits<float>::infinity();
            } else {
                scan_msg->ranges[ros_index] = dist_m;
            }
            scan_msg->intensities[ros_index] = intensity;
        }

        scan_pub_->publish(std::move(scan_msg));
    }

    std::string port_;
    int baudrate_;
    std::string frame_id_;
    bool inverted_;

    ILidarDriver* drv_ = nullptr;
    IChannel* channel_ = nullptr;
    LidarScanMode scan_mode_;
    rclcpp::Publisher<sensor_msgs::msg::LaserScan>::SharedPtr scan_pub_;
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<S2DirectPublisherNode>();
    if (rclcpp::ok()) {
        node->spinScanLoop();
    }
    rclcpp::shutdown();
    return 0;
}