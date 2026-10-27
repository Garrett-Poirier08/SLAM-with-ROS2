// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from pal_statistics_msgs:msg/Statistic.idl
// generated code does not contain a copyright notice

#ifndef PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTIC__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTIC__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "pal_statistics_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "pal_statistics_msgs/msg/detail/statistic__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace pal_statistics_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pal_statistics_msgs
cdr_serialize(
  const pal_statistics_msgs::msg::Statistic & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pal_statistics_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pal_statistics_msgs::msg::Statistic & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pal_statistics_msgs
get_serialized_size(
  const pal_statistics_msgs::msg::Statistic & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pal_statistics_msgs
max_serialized_size_Statistic(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pal_statistics_msgs
cdr_serialize_key(
  const pal_statistics_msgs::msg::Statistic & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pal_statistics_msgs
get_serialized_size_key(
  const pal_statistics_msgs::msg::Statistic & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pal_statistics_msgs
max_serialized_size_key_Statistic(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace pal_statistics_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pal_statistics_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pal_statistics_msgs, msg, Statistic)();

#ifdef __cplusplus
}
#endif

#endif  // PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTIC__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
