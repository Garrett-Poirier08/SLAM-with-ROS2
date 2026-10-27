// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marine_acoustic_msgs:msg/PingInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/ping_info.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PING_INFO__BUILDER_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PING_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marine_acoustic_msgs/msg/detail/ping_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marine_acoustic_msgs
{

namespace msg
{

namespace builder
{

class Init_PingInfo_rx_beamwidths
{
public:
  explicit Init_PingInfo_rx_beamwidths(::marine_acoustic_msgs::msg::PingInfo & msg)
  : msg_(msg)
  {}
  ::marine_acoustic_msgs::msg::PingInfo rx_beamwidths(::marine_acoustic_msgs::msg::PingInfo::_rx_beamwidths_type arg)
  {
    msg_.rx_beamwidths = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::PingInfo msg_;
};

class Init_PingInfo_tx_beamwidths
{
public:
  explicit Init_PingInfo_tx_beamwidths(::marine_acoustic_msgs::msg::PingInfo & msg)
  : msg_(msg)
  {}
  Init_PingInfo_rx_beamwidths tx_beamwidths(::marine_acoustic_msgs::msg::PingInfo::_tx_beamwidths_type arg)
  {
    msg_.tx_beamwidths = std::move(arg);
    return Init_PingInfo_rx_beamwidths(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::PingInfo msg_;
};

class Init_PingInfo_sound_speed
{
public:
  explicit Init_PingInfo_sound_speed(::marine_acoustic_msgs::msg::PingInfo & msg)
  : msg_(msg)
  {}
  Init_PingInfo_tx_beamwidths sound_speed(::marine_acoustic_msgs::msg::PingInfo::_sound_speed_type arg)
  {
    msg_.sound_speed = std::move(arg);
    return Init_PingInfo_tx_beamwidths(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::PingInfo msg_;
};

class Init_PingInfo_frequency
{
public:
  Init_PingInfo_frequency()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PingInfo_sound_speed frequency(::marine_acoustic_msgs::msg::PingInfo::_frequency_type arg)
  {
    msg_.frequency = std::move(arg);
    return Init_PingInfo_sound_speed(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::PingInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marine_acoustic_msgs::msg::PingInfo>()
{
  return marine_acoustic_msgs::msg::builder::Init_PingInfo_frequency();
}

}  // namespace marine_acoustic_msgs

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PING_INFO__BUILDER_HPP_
