// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marine_acoustic_msgs:msg/SonarDetections.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/sonar_detections.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_DETECTIONS__BUILDER_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_DETECTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marine_acoustic_msgs/msg/detail/sonar_detections__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marine_acoustic_msgs
{

namespace msg
{

namespace builder
{

class Init_SonarDetections_rx_angles
{
public:
  explicit Init_SonarDetections_rx_angles(::marine_acoustic_msgs::msg::SonarDetections & msg)
  : msg_(msg)
  {}
  ::marine_acoustic_msgs::msg::SonarDetections rx_angles(::marine_acoustic_msgs::msg::SonarDetections::_rx_angles_type arg)
  {
    msg_.rx_angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::SonarDetections msg_;
};

class Init_SonarDetections_tx_angles
{
public:
  explicit Init_SonarDetections_tx_angles(::marine_acoustic_msgs::msg::SonarDetections & msg)
  : msg_(msg)
  {}
  Init_SonarDetections_rx_angles tx_angles(::marine_acoustic_msgs::msg::SonarDetections::_tx_angles_type arg)
  {
    msg_.tx_angles = std::move(arg);
    return Init_SonarDetections_rx_angles(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::SonarDetections msg_;
};

class Init_SonarDetections_intensities
{
public:
  explicit Init_SonarDetections_intensities(::marine_acoustic_msgs::msg::SonarDetections & msg)
  : msg_(msg)
  {}
  Init_SonarDetections_tx_angles intensities(::marine_acoustic_msgs::msg::SonarDetections::_intensities_type arg)
  {
    msg_.intensities = std::move(arg);
    return Init_SonarDetections_tx_angles(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::SonarDetections msg_;
};

class Init_SonarDetections_tx_delays
{
public:
  explicit Init_SonarDetections_tx_delays(::marine_acoustic_msgs::msg::SonarDetections & msg)
  : msg_(msg)
  {}
  Init_SonarDetections_intensities tx_delays(::marine_acoustic_msgs::msg::SonarDetections::_tx_delays_type arg)
  {
    msg_.tx_delays = std::move(arg);
    return Init_SonarDetections_intensities(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::SonarDetections msg_;
};

class Init_SonarDetections_two_way_travel_times
{
public:
  explicit Init_SonarDetections_two_way_travel_times(::marine_acoustic_msgs::msg::SonarDetections & msg)
  : msg_(msg)
  {}
  Init_SonarDetections_tx_delays two_way_travel_times(::marine_acoustic_msgs::msg::SonarDetections::_two_way_travel_times_type arg)
  {
    msg_.two_way_travel_times = std::move(arg);
    return Init_SonarDetections_tx_delays(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::SonarDetections msg_;
};

class Init_SonarDetections_flags
{
public:
  explicit Init_SonarDetections_flags(::marine_acoustic_msgs::msg::SonarDetections & msg)
  : msg_(msg)
  {}
  Init_SonarDetections_two_way_travel_times flags(::marine_acoustic_msgs::msg::SonarDetections::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return Init_SonarDetections_two_way_travel_times(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::SonarDetections msg_;
};

class Init_SonarDetections_ping_info
{
public:
  explicit Init_SonarDetections_ping_info(::marine_acoustic_msgs::msg::SonarDetections & msg)
  : msg_(msg)
  {}
  Init_SonarDetections_flags ping_info(::marine_acoustic_msgs::msg::SonarDetections::_ping_info_type arg)
  {
    msg_.ping_info = std::move(arg);
    return Init_SonarDetections_flags(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::SonarDetections msg_;
};

class Init_SonarDetections_header
{
public:
  Init_SonarDetections_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SonarDetections_ping_info header(::marine_acoustic_msgs::msg::SonarDetections::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SonarDetections_ping_info(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::SonarDetections msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marine_acoustic_msgs::msg::SonarDetections>()
{
  return marine_acoustic_msgs::msg::builder::Init_SonarDetections_header();
}

}  // namespace marine_acoustic_msgs

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_DETECTIONS__BUILDER_HPP_
