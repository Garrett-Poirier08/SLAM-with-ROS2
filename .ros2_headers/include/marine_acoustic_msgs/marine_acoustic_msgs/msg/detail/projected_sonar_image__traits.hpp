// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marine_acoustic_msgs:msg/ProjectedSonarImage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/projected_sonar_image.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PROJECTED_SONAR_IMAGE__TRAITS_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PROJECTED_SONAR_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marine_acoustic_msgs/msg/detail/projected_sonar_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ping_info'
#include "marine_acoustic_msgs/msg/detail/ping_info__traits.hpp"
// Member 'beam_directions'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'image'
#include "marine_acoustic_msgs/msg/detail/sonar_image_data__traits.hpp"

namespace marine_acoustic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ProjectedSonarImage & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ping_info
  {
    out << "ping_info: ";
    to_flow_style_yaml(msg.ping_info, out);
    out << ", ";
  }

  // member: beam_directions
  {
    if (msg.beam_directions.size() == 0) {
      out << "beam_directions: []";
    } else {
      out << "beam_directions: [";
      size_t pending_items = msg.beam_directions.size();
      for (auto item : msg.beam_directions) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ranges
  {
    if (msg.ranges.size() == 0) {
      out << "ranges: []";
    } else {
      out << "ranges: [";
      size_t pending_items = msg.ranges.size();
      for (auto item : msg.ranges) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProjectedSonarImage & msg,
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

  // member: ping_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ping_info:\n";
    to_block_style_yaml(msg.ping_info, out, indentation + 2);
  }

  // member: beam_directions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.beam_directions.size() == 0) {
      out << "beam_directions: []\n";
    } else {
      out << "beam_directions:\n";
      for (auto item : msg.beam_directions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: ranges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ranges.size() == 0) {
      out << "ranges: []\n";
    } else {
      out << "ranges:\n";
      for (auto item : msg.ranges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProjectedSonarImage & msg, bool use_flow_style = false)
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

}  // namespace marine_acoustic_msgs

namespace rosidl_generator_traits
{

[[deprecated("use marine_acoustic_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const marine_acoustic_msgs::msg::ProjectedSonarImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  marine_acoustic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marine_acoustic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marine_acoustic_msgs::msg::ProjectedSonarImage & msg)
{
  return marine_acoustic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marine_acoustic_msgs::msg::ProjectedSonarImage>()
{
  return "marine_acoustic_msgs::msg::ProjectedSonarImage";
}

template<>
inline const char * name<marine_acoustic_msgs::msg::ProjectedSonarImage>()
{
  return "marine_acoustic_msgs/msg/ProjectedSonarImage";
}

template<>
struct has_fixed_size<marine_acoustic_msgs::msg::ProjectedSonarImage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marine_acoustic_msgs::msg::ProjectedSonarImage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marine_acoustic_msgs::msg::ProjectedSonarImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PROJECTED_SONAR_IMAGE__TRAITS_HPP_
