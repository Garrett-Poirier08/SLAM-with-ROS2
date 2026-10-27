// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pal_statistics_msgs:msg/Statistic.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pal_statistics_msgs/msg/statistic.hpp"


#ifndef PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTIC__TRAITS_HPP_
#define PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pal_statistics_msgs/msg/detail/statistic__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pal_statistics_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Statistic & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Statistic & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Statistic & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace pal_statistics_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pal_statistics_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pal_statistics_msgs::msg::Statistic & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_statistics_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_statistics_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pal_statistics_msgs::msg::Statistic & msg)
{
  return pal_statistics_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pal_statistics_msgs::msg::Statistic>()
{
  return "pal_statistics_msgs::msg::Statistic";
}

template<>
inline const char * name<pal_statistics_msgs::msg::Statistic>()
{
  return "pal_statistics_msgs/msg/Statistic";
}

template<>
struct has_fixed_size<pal_statistics_msgs::msg::Statistic>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pal_statistics_msgs::msg::Statistic>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pal_statistics_msgs::msg::Statistic>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTIC__TRAITS_HPP_
