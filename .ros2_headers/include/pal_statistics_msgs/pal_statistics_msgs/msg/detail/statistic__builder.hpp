// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_statistics_msgs:msg/Statistic.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pal_statistics_msgs/msg/statistic.hpp"


#ifndef PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTIC__BUILDER_HPP_
#define PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_statistics_msgs/msg/detail/statistic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_statistics_msgs
{

namespace msg
{

namespace builder
{

class Init_Statistic_value
{
public:
  explicit Init_Statistic_value(::pal_statistics_msgs::msg::Statistic & msg)
  : msg_(msg)
  {}
  ::pal_statistics_msgs::msg::Statistic value(::pal_statistics_msgs::msg::Statistic::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_statistics_msgs::msg::Statistic msg_;
};

class Init_Statistic_name
{
public:
  Init_Statistic_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Statistic_value name(::pal_statistics_msgs::msg::Statistic::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Statistic_value(msg_);
  }

private:
  ::pal_statistics_msgs::msg::Statistic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_statistics_msgs::msg::Statistic>()
{
  return pal_statistics_msgs::msg::builder::Init_Statistic_name();
}

}  // namespace pal_statistics_msgs

#endif  // PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTIC__BUILDER_HPP_
