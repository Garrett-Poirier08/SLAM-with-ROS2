// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pal_statistics_msgs:msg/Statistics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pal_statistics_msgs/msg/statistics.hpp"


#ifndef PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS__TRAITS_HPP_
#define PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pal_statistics_msgs/msg/detail/statistics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'statistics'
#include "pal_statistics_msgs/msg/detail/statistic__traits.hpp"

namespace pal_statistics_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Statistics & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: statistics
  {
    if (msg.statistics.size() == 0) {
      out << "statistics: []";
    } else {
      out << "statistics: [";
      size_t pending_items = msg.statistics.size();
      for (auto item : msg.statistics) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Statistics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: statistics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.statistics.size() == 0) {
      out << "statistics: []\n";
    } else {
      out << "statistics:\n";
      for (auto item : msg.statistics) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Statistics & msg, bool use_flow_style = false)
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
  const pal_statistics_msgs::msg::Statistics & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_statistics_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_statistics_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pal_statistics_msgs::msg::Statistics & msg)
{
  return pal_statistics_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pal_statistics_msgs::msg::Statistics>()
{
  return "pal_statistics_msgs::msg::Statistics";
}

template<>
inline const char * name<pal_statistics_msgs::msg::Statistics>()
{
  return "pal_statistics_msgs/msg/Statistics";
}

template<>
struct has_fixed_size<pal_statistics_msgs::msg::Statistics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pal_statistics_msgs::msg::Statistics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pal_statistics_msgs::msg::Statistics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS__TRAITS_HPP_
