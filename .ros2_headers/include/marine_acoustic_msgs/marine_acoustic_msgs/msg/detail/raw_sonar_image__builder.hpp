// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marine_acoustic_msgs:msg/RawSonarImage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/raw_sonar_image.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__RAW_SONAR_IMAGE__BUILDER_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__RAW_SONAR_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marine_acoustic_msgs/msg/detail/raw_sonar_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marine_acoustic_msgs
{

namespace msg
{

namespace builder
{

class Init_RawSonarImage_image
{
public:
  explicit Init_RawSonarImage_image(::marine_acoustic_msgs::msg::RawSonarImage & msg)
  : msg_(msg)
  {}
  ::marine_acoustic_msgs::msg::RawSonarImage image(::marine_acoustic_msgs::msg::RawSonarImage::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::RawSonarImage msg_;
};

class Init_RawSonarImage_rx_angles
{
public:
  explicit Init_RawSonarImage_rx_angles(::marine_acoustic_msgs::msg::RawSonarImage & msg)
  : msg_(msg)
  {}
  Init_RawSonarImage_image rx_angles(::marine_acoustic_msgs::msg::RawSonarImage::_rx_angles_type arg)
  {
    msg_.rx_angles = std::move(arg);
    return Init_RawSonarImage_image(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::RawSonarImage msg_;
};

class Init_RawSonarImage_tx_angles
{
public:
  explicit Init_RawSonarImage_tx_angles(::marine_acoustic_msgs::msg::RawSonarImage & msg)
  : msg_(msg)
  {}
  Init_RawSonarImage_rx_angles tx_angles(::marine_acoustic_msgs::msg::RawSonarImage::_tx_angles_type arg)
  {
    msg_.tx_angles = std::move(arg);
    return Init_RawSonarImage_rx_angles(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::RawSonarImage msg_;
};

class Init_RawSonarImage_tx_delays
{
public:
  explicit Init_RawSonarImage_tx_delays(::marine_acoustic_msgs::msg::RawSonarImage & msg)
  : msg_(msg)
  {}
  Init_RawSonarImage_tx_angles tx_delays(::marine_acoustic_msgs::msg::RawSonarImage::_tx_delays_type arg)
  {
    msg_.tx_delays = std::move(arg);
    return Init_RawSonarImage_tx_angles(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::RawSonarImage msg_;
};

class Init_RawSonarImage_sample0
{
public:
  explicit Init_RawSonarImage_sample0(::marine_acoustic_msgs::msg::RawSonarImage & msg)
  : msg_(msg)
  {}
  Init_RawSonarImage_tx_delays sample0(::marine_acoustic_msgs::msg::RawSonarImage::_sample0_type arg)
  {
    msg_.sample0 = std::move(arg);
    return Init_RawSonarImage_tx_delays(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::RawSonarImage msg_;
};

class Init_RawSonarImage_samples_per_beam
{
public:
  explicit Init_RawSonarImage_samples_per_beam(::marine_acoustic_msgs::msg::RawSonarImage & msg)
  : msg_(msg)
  {}
  Init_RawSonarImage_sample0 samples_per_beam(::marine_acoustic_msgs::msg::RawSonarImage::_samples_per_beam_type arg)
  {
    msg_.samples_per_beam = std::move(arg);
    return Init_RawSonarImage_sample0(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::RawSonarImage msg_;
};

class Init_RawSonarImage_sample_rate
{
public:
  explicit Init_RawSonarImage_sample_rate(::marine_acoustic_msgs::msg::RawSonarImage & msg)
  : msg_(msg)
  {}
  Init_RawSonarImage_samples_per_beam sample_rate(::marine_acoustic_msgs::msg::RawSonarImage::_sample_rate_type arg)
  {
    msg_.sample_rate = std::move(arg);
    return Init_RawSonarImage_samples_per_beam(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::RawSonarImage msg_;
};

class Init_RawSonarImage_ping_info
{
public:
  explicit Init_RawSonarImage_ping_info(::marine_acoustic_msgs::msg::RawSonarImage & msg)
  : msg_(msg)
  {}
  Init_RawSonarImage_sample_rate ping_info(::marine_acoustic_msgs::msg::RawSonarImage::_ping_info_type arg)
  {
    msg_.ping_info = std::move(arg);
    return Init_RawSonarImage_sample_rate(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::RawSonarImage msg_;
};

class Init_RawSonarImage_header
{
public:
  Init_RawSonarImage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawSonarImage_ping_info header(::marine_acoustic_msgs::msg::RawSonarImage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RawSonarImage_ping_info(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::RawSonarImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marine_acoustic_msgs::msg::RawSonarImage>()
{
  return marine_acoustic_msgs::msg::builder::Init_RawSonarImage_header();
}

}  // namespace marine_acoustic_msgs

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__RAW_SONAR_IMAGE__BUILDER_HPP_
