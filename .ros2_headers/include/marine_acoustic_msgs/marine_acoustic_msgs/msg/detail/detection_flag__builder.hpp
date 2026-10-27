// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marine_acoustic_msgs:msg/DetectionFlag.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/detection_flag.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DETECTION_FLAG__BUILDER_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DETECTION_FLAG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marine_acoustic_msgs/msg/detail/detection_flag__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marine_acoustic_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectionFlag_flag
{
public:
  Init_DetectionFlag_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::marine_acoustic_msgs::msg::DetectionFlag flag(::marine_acoustic_msgs::msg::DetectionFlag::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::DetectionFlag msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marine_acoustic_msgs::msg::DetectionFlag>()
{
  return marine_acoustic_msgs::msg::builder::Init_DetectionFlag_flag();
}

}  // namespace marine_acoustic_msgs

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DETECTION_FLAG__BUILDER_HPP_
