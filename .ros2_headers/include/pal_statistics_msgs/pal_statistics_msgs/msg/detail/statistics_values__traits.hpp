// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pal_statistics_msgs:msg/StatisticsValues.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pal_statistics_msgs/msg/statistics_values.hpp"


#ifndef PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS_VALUES__TRAITS_HPP_
#define PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS_VALUES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pal_statistics_msgs/msg/detail/statistics_values__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pal_statistics_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StatisticsValues & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: values
  {
    if (msg.values.size() == 0) {
      out << "values: []";
    } else {
      out << "values: [";
      size_t pending_items = msg.values.size();
      for (auto item : msg.values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: names_version
  {
    out << "names_version: ";
    rosidl_generator_traits::value_to_yaml(msg.names_version, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StatisticsValues & msg,
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

  // member: values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.values.size() == 0) {
      out << "values: []\n";
    } else {
      out << "values:\n";
      for (auto item : msg.values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: names_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "names_version: ";
    rosidl_generator_traits::value_to_yaml(msg.names_version, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StatisticsValues & msg, bool use_flow_style = false)
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
  const pal_statistics_msgs::msg::StatisticsValues & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_statistics_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_statistics_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pal_statistics_msgs::msg::StatisticsValues & msg)
{
  return pal_statistics_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pal_statistics_msgs::msg::StatisticsValues>()
{
  return "pal_statistics_msgs::msg::StatisticsValues";
}

template<>
inline const char * name<pal_statistics_msgs::msg::StatisticsValues>()
{
  return "pal_statistics_msgs/msg/StatisticsValues";
}

template<>
struct has_fixed_size<pal_statistics_msgs::msg::StatisticsValues>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pal_statistics_msgs::msg::StatisticsValues>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pal_statistics_msgs::msg::StatisticsValues>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS_VALUES__TRAITS_HPP_
