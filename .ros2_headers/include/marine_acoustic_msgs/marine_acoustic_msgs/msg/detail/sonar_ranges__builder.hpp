// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marine_acoustic_msgs:msg/SonarRanges.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/sonar_ranges.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_RANGES__BUILDER_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_RANGES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marine_acoustic_msgs/msg/detail/sonar_ranges__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marine_acoustic_msgs
{

namespace msg
{

namespace builder
{

class Init_SonarRanges_ranges
{
public:
  explicit Init_SonarRanges_ranges(::marine_acoustic_msgs::msg::SonarRanges & msg)
  : msg_(msg)
  {}
  ::marine_acoustic_msgs::msg::SonarRanges ranges(::marine_acoustic_msgs::msg::SonarRanges::_ranges_type arg)
  {
    msg_.ranges = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::SonarRanges msg_;
};

class Init_SonarRanges_beam_unit_vec
{
public:
  explicit Init_SonarRanges_beam_unit_vec(::marine_acoustic_msgs::msg::SonarRanges & msg)
  : msg_(msg)
  {}
  Init_SonarRanges_ranges beam_unit_vec(::marine_acoustic_msgs::msg::SonarRanges::_beam_unit_vec_type arg)
  {
    msg_.beam_unit_vec = std::move(arg);
    return Init_SonarRanges_ranges(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::SonarRanges msg_;
};

class Init_SonarRanges_intensities
{
public:
  explicit Init_SonarRanges_intensities(::marine_acoustic_msgs::msg::SonarRanges & msg)
  : msg_(msg)
  {}
  Init_SonarRanges_beam_unit_vec intensities(::marine_acoustic_msgs::msg::SonarRanges::_intensities_type arg)
  {
    msg_.intensities = std::move(arg);
    return Init_SonarRanges_beam_unit_vec(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::SonarRanges msg_;
};

class Init_SonarRanges_transmit_delays
{
public:
  explicit Init_SonarRanges_transmit_delays(::marine_acoustic_msgs::msg::SonarRanges & msg)
  : msg_(msg)
  {}
  Init_SonarRanges_intensities transmit_delays(::marine_acoustic_msgs::msg::SonarRanges::_transmit_delays_type arg)
  {
    msg_.transmit_delays = std::move(arg);
    return Init_SonarRanges_intensities(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::SonarRanges msg_;
};

class Init_SonarRanges_flags
{
public:
  explicit Init_SonarRanges_flags(::marine_acoustic_msgs::msg::SonarRanges & msg)
  : msg_(msg)
  {}
  Init_SonarRanges_transmit_delays flags(::marine_acoustic_msgs::msg::SonarRanges::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return Init_SonarRanges_transmit_delays(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::SonarRanges msg_;
};

class Init_SonarRanges_ping_info
{
public:
  explicit Init_SonarRanges_ping_info(::marine_acoustic_msgs::msg::SonarRanges & msg)
  : msg_(msg)
  {}
  Init_SonarRanges_flags ping_info(::marine_acoustic_msgs::msg::SonarRanges::_ping_info_type arg)
  {
    msg_.ping_info = std::move(arg);
    return Init_SonarRanges_flags(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::SonarRanges msg_;
};

class Init_SonarRanges_header
{
public:
  Init_SonarRanges_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SonarRanges_ping_info header(::marine_acoustic_msgs::msg::SonarRanges::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SonarRanges_ping_info(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::SonarRanges msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marine_acoustic_msgs::msg::SonarRanges>()
{
  return marine_acoustic_msgs::msg::builder::Init_SonarRanges_header();
}

}  // namespace marine_acoustic_msgs

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_RANGES__BUILDER_HPP_
