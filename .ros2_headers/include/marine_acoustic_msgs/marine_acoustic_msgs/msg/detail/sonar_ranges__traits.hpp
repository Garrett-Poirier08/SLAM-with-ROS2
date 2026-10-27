// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marine_acoustic_msgs:msg/SonarRanges.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/sonar_ranges.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_RANGES__TRAITS_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_RANGES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marine_acoustic_msgs/msg/detail/sonar_ranges__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ping_info'
#include "marine_acoustic_msgs/msg/detail/ping_info__traits.hpp"
// Member 'flags'
#include "marine_acoustic_msgs/msg/detail/detection_flag__traits.hpp"
// Member 'beam_unit_vec'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace marine_acoustic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SonarRanges & msg,
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

  // member: flags
  {
    if (msg.flags.size() == 0) {
      out << "flags: []";
    } else {
      out << "flags: [";
      size_t pending_items = msg.flags.size();
      for (auto item : msg.flags) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: transmit_delays
  {
    if (msg.transmit_delays.size() == 0) {
      out << "transmit_delays: []";
    } else {
      out << "transmit_delays: [";
      size_t pending_items = msg.transmit_delays.size();
      for (auto item : msg.transmit_delays) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: intensities
  {
    if (msg.intensities.size() == 0) {
      out << "intensities: []";
    } else {
      out << "intensities: [";
      size_t pending_items = msg.intensities.size();
      for (auto item : msg.intensities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: beam_unit_vec
  {
    if (msg.beam_unit_vec.size() == 0) {
      out << "beam_unit_vec: []";
    } else {
      out << "beam_unit_vec: [";
      size_t pending_items = msg.beam_unit_vec.size();
      for (auto item : msg.beam_unit_vec) {
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SonarRanges & msg,
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

  // member: flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.flags.size() == 0) {
      out << "flags: []\n";
    } else {
      out << "flags:\n";
      for (auto item : msg.flags) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: transmit_delays
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.transmit_delays.size() == 0) {
      out << "transmit_delays: []\n";
    } else {
      out << "transmit_delays:\n";
      for (auto item : msg.transmit_delays) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: intensities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.intensities.size() == 0) {
      out << "intensities: []\n";
    } else {
      out << "intensities:\n";
      for (auto item : msg.intensities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: beam_unit_vec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.beam_unit_vec.size() == 0) {
      out << "beam_unit_vec: []\n";
    } else {
      out << "beam_unit_vec:\n";
      for (auto item : msg.beam_unit_vec) {
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SonarRanges & msg, bool use_flow_style = false)
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
  const marine_acoustic_msgs::msg::SonarRanges & msg,
  std::ostream & out, size_t indentation = 0)
{
  marine_acoustic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marine_acoustic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marine_acoustic_msgs::msg::SonarRanges & msg)
{
  return marine_acoustic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marine_acoustic_msgs::msg::SonarRanges>()
{
  return "marine_acoustic_msgs::msg::SonarRanges";
}

template<>
inline const char * name<marine_acoustic_msgs::msg::SonarRanges>()
{
  return "marine_acoustic_msgs/msg/SonarRanges";
}

template<>
struct has_fixed_size<marine_acoustic_msgs::msg::SonarRanges>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marine_acoustic_msgs::msg::SonarRanges>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marine_acoustic_msgs::msg::SonarRanges>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_RANGES__TRAITS_HPP_
