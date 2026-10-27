// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_statistics_msgs:msg/Statistics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pal_statistics_msgs/msg/statistics.hpp"


#ifndef PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS__BUILDER_HPP_
#define PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_statistics_msgs/msg/detail/statistics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_statistics_msgs
{

namespace msg
{

namespace builder
{

class Init_Statistics_statistics
{
public:
  explicit Init_Statistics_statistics(::pal_statistics_msgs::msg::Statistics & msg)
  : msg_(msg)
  {}
  ::pal_statistics_msgs::msg::Statistics statistics(::pal_statistics_msgs::msg::Statistics::_statistics_type arg)
  {
    msg_.statistics = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_statistics_msgs::msg::Statistics msg_;
};

class Init_Statistics_header
{
public:
  Init_Statistics_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Statistics_statistics header(::pal_statistics_msgs::msg::Statistics::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Statistics_statistics(msg_);
  }

private:
  ::pal_statistics_msgs::msg::Statistics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_statistics_msgs::msg::Statistics>()
{
  return pal_statistics_msgs::msg::builder::Init_Statistics_header();
}

}  // namespace pal_statistics_msgs

#endif  // PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS__BUILDER_HPP_
