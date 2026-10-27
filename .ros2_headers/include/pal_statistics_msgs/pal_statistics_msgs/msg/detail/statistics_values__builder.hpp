// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_statistics_msgs:msg/StatisticsValues.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pal_statistics_msgs/msg/statistics_values.hpp"


#ifndef PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS_VALUES__BUILDER_HPP_
#define PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS_VALUES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_statistics_msgs/msg/detail/statistics_values__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_statistics_msgs
{

namespace msg
{

namespace builder
{

class Init_StatisticsValues_names_version
{
public:
  explicit Init_StatisticsValues_names_version(::pal_statistics_msgs::msg::StatisticsValues & msg)
  : msg_(msg)
  {}
  ::pal_statistics_msgs::msg::StatisticsValues names_version(::pal_statistics_msgs::msg::StatisticsValues::_names_version_type arg)
  {
    msg_.names_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_statistics_msgs::msg::StatisticsValues msg_;
};

class Init_StatisticsValues_values
{
public:
  explicit Init_StatisticsValues_values(::pal_statistics_msgs::msg::StatisticsValues & msg)
  : msg_(msg)
  {}
  Init_StatisticsValues_names_version values(::pal_statistics_msgs::msg::StatisticsValues::_values_type arg)
  {
    msg_.values = std::move(arg);
    return Init_StatisticsValues_names_version(msg_);
  }

private:
  ::pal_statistics_msgs::msg::StatisticsValues msg_;
};

class Init_StatisticsValues_header
{
public:
  Init_StatisticsValues_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StatisticsValues_values header(::pal_statistics_msgs::msg::StatisticsValues::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StatisticsValues_values(msg_);
  }

private:
  ::pal_statistics_msgs::msg::StatisticsValues msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_statistics_msgs::msg::StatisticsValues>()
{
  return pal_statistics_msgs::msg::builder::Init_StatisticsValues_header();
}

}  // namespace pal_statistics_msgs

#endif  // PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS_VALUES__BUILDER_HPP_
