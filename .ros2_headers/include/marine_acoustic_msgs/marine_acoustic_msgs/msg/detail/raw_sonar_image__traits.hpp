// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marine_acoustic_msgs:msg/RawSonarImage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/raw_sonar_image.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__RAW_SONAR_IMAGE__TRAITS_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__RAW_SONAR_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marine_acoustic_msgs/msg/detail/raw_sonar_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ping_info'
#include "marine_acoustic_msgs/msg/detail/ping_info__traits.hpp"
// Member 'image'
#include "marine_acoustic_msgs/msg/detail/sonar_image_data__traits.hpp"

namespace marine_acoustic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RawSonarImage & msg,
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

  // member: sample_rate
  {
    out << "sample_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.sample_rate, out);
    out << ", ";
  }

  // member: samples_per_beam
  {
    out << "samples_per_beam: ";
    rosidl_generator_traits::value_to_yaml(msg.samples_per_beam, out);
    out << ", ";
  }

  // member: sample0
  {
    out << "sample0: ";
    rosidl_generator_traits::value_to_yaml(msg.sample0, out);
    out << ", ";
  }

  // member: tx_delays
  {
    if (msg.tx_delays.size() == 0) {
      out << "tx_delays: []";
    } else {
      out << "tx_delays: [";
      size_t pending_items = msg.tx_delays.size();
      for (auto item : msg.tx_delays) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tx_angles
  {
    if (msg.tx_angles.size() == 0) {
      out << "tx_angles: []";
    } else {
      out << "tx_angles: [";
      size_t pending_items = msg.tx_angles.size();
      for (auto item : msg.tx_angles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rx_angles
  {
    if (msg.rx_angles.size() == 0) {
      out << "rx_angles: []";
    } else {
      out << "rx_angles: [";
      size_t pending_items = msg.rx_angles.size();
      for (auto item : msg.rx_angles) {
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
  const RawSonarImage & msg,
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

  // member: sample_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sample_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.sample_rate, out);
    out << "\n";
  }

  // member: samples_per_beam
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "samples_per_beam: ";
    rosidl_generator_traits::value_to_yaml(msg.samples_per_beam, out);
    out << "\n";
  }

  // member: sample0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sample0: ";
    rosidl_generator_traits::value_to_yaml(msg.sample0, out);
    out << "\n";
  }

  // member: tx_delays
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tx_delays.size() == 0) {
      out << "tx_delays: []\n";
    } else {
      out << "tx_delays:\n";
      for (auto item : msg.tx_delays) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tx_angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tx_angles.size() == 0) {
      out << "tx_angles: []\n";
    } else {
      out << "tx_angles:\n";
      for (auto item : msg.tx_angles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rx_angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rx_angles.size() == 0) {
      out << "rx_angles: []\n";
    } else {
      out << "rx_angles:\n";
      for (auto item : msg.rx_angles) {
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

inline std::string to_yaml(const RawSonarImage & msg, bool use_flow_style = false)
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
  const marine_acoustic_msgs::msg::RawSonarImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  marine_acoustic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marine_acoustic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marine_acoustic_msgs::msg::RawSonarImage & msg)
{
  return marine_acoustic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marine_acoustic_msgs::msg::RawSonarImage>()
{
  return "marine_acoustic_msgs::msg::RawSonarImage";
}

template<>
inline const char * name<marine_acoustic_msgs::msg::RawSonarImage>()
{
  return "marine_acoustic_msgs/msg/RawSonarImage";
}

template<>
struct has_fixed_size<marine_acoustic_msgs::msg::RawSonarImage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marine_acoustic_msgs::msg::RawSonarImage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marine_acoustic_msgs::msg::RawSonarImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__RAW_SONAR_IMAGE__TRAITS_HPP_
