// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_statistics_msgs:msg/StatisticsNames.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pal_statistics_msgs/msg/statistics_names.hpp"


#ifndef PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS_NAMES__BUILDER_HPP_
#define PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS_NAMES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_statistics_msgs/msg/detail/statistics_names__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_statistics_msgs
{

namespace msg
{

namespace builder
{

class Init_StatisticsNames_names_version
{
public:
  explicit Init_StatisticsNames_names_version(::pal_statistics_msgs::msg::StatisticsNames & msg)
  : msg_(msg)
  {}
  ::pal_statistics_msgs::msg::StatisticsNames names_version(::pal_statistics_msgs::msg::StatisticsNames::_names_version_type arg)
  {
    msg_.names_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_statistics_msgs::msg::StatisticsNames msg_;
};

class Init_StatisticsNames_names
{
public:
  explicit Init_StatisticsNames_names(::pal_statistics_msgs::msg::StatisticsNames & msg)
  : msg_(msg)
  {}
  Init_StatisticsNames_names_version names(::pal_statistics_msgs::msg::StatisticsNames::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_StatisticsNames_names_version(msg_);
  }

private:
  ::pal_statistics_msgs::msg::StatisticsNames msg_;
};

class Init_StatisticsNames_header
{
public:
  Init_StatisticsNames_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StatisticsNames_names header(::pal_statistics_msgs::msg::StatisticsNames::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StatisticsNames_names(msg_);
  }

private:
  ::pal_statistics_msgs::msg::StatisticsNames msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_statistics_msgs::msg::StatisticsNames>()
{
  return pal_statistics_msgs::msg::builder::Init_StatisticsNames_header();
}

}  // namespace pal_statistics_msgs

#endif  // PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS_NAMES__BUILDER_HPP_
