// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marine_acoustic_msgs:msg/Dvl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/dvl.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DVL__TRAITS_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DVL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marine_acoustic_msgs/msg/detail/dvl__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'velocity'
// Member 'beam_unit_vec'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace marine_acoustic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Dvl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: velocity_mode
  {
    out << "velocity_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_mode, out);
    out << ", ";
  }

  // member: dvl_type
  {
    out << "dvl_type: ";
    rosidl_generator_traits::value_to_yaml(msg.dvl_type, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: velocity_covar
  {
    if (msg.velocity_covar.size() == 0) {
      out << "velocity_covar: []";
    } else {
      out << "velocity_covar: [";
      size_t pending_items = msg.velocity_covar.size();
      for (auto item : msg.velocity_covar) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: altitude
  {
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << ", ";
  }

  // member: course_gnd
  {
    out << "course_gnd: ";
    rosidl_generator_traits::value_to_yaml(msg.course_gnd, out);
    out << ", ";
  }

  // member: speed_gnd
  {
    out << "speed_gnd: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_gnd, out);
    out << ", ";
  }

  // member: num_good_beams
  {
    out << "num_good_beams: ";
    rosidl_generator_traits::value_to_yaml(msg.num_good_beams, out);
    out << ", ";
  }

  // member: sound_speed
  {
    out << "sound_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.sound_speed, out);
    out << ", ";
  }

  // member: beam_ranges_valid
  {
    out << "beam_ranges_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_ranges_valid, out);
    out << ", ";
  }

  // member: beam_velocities_valid
  {
    out << "beam_velocities_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_velocities_valid, out);
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

  // member: range
  {
    if (msg.range.size() == 0) {
      out << "range: []";
    } else {
      out << "range: [";
      size_t pending_items = msg.range.size();
      for (auto item : msg.range) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: range_covar
  {
    if (msg.range_covar.size() == 0) {
      out << "range_covar: []";
    } else {
      out << "range_covar: [";
      size_t pending_items = msg.range_covar.size();
      for (auto item : msg.range_covar) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: beam_quality
  {
    if (msg.beam_quality.size() == 0) {
      out << "beam_quality: []";
    } else {
      out << "beam_quality: [";
      size_t pending_items = msg.beam_quality.size();
      for (auto item : msg.beam_quality) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: beam_velocity
  {
    if (msg.beam_velocity.size() == 0) {
      out << "beam_velocity: []";
    } else {
      out << "beam_velocity: [";
      size_t pending_items = msg.beam_velocity.size();
      for (auto item : msg.beam_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: beam_velocity_covar
  {
    if (msg.beam_velocity_covar.size() == 0) {
      out << "beam_velocity_covar: []";
    } else {
      out << "beam_velocity_covar: [";
      size_t pending_items = msg.beam_velocity_covar.size();
      for (auto item : msg.beam_velocity_covar) {
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
  const Dvl & msg,
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

  // member: velocity_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_mode, out);
    out << "\n";
  }

  // member: dvl_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dvl_type: ";
    rosidl_generator_traits::value_to_yaml(msg.dvl_type, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: velocity_covar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity_covar.size() == 0) {
      out << "velocity_covar: []\n";
    } else {
      out << "velocity_covar:\n";
      for (auto item : msg.velocity_covar) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << "\n";
  }

  // member: course_gnd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "course_gnd: ";
    rosidl_generator_traits::value_to_yaml(msg.course_gnd, out);
    out << "\n";
  }

  // member: speed_gnd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_gnd: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_gnd, out);
    out << "\n";
  }

  // member: num_good_beams
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_good_beams: ";
    rosidl_generator_traits::value_to_yaml(msg.num_good_beams, out);
    out << "\n";
  }

  // member: sound_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sound_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.sound_speed, out);
    out << "\n";
  }

  // member: beam_ranges_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beam_ranges_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_ranges_valid, out);
    out << "\n";
  }

  // member: beam_velocities_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beam_velocities_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_velocities_valid, out);
    out << "\n";
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

  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.range.size() == 0) {
      out << "range: []\n";
    } else {
      out << "range:\n";
      for (auto item : msg.range) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: range_covar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.range_covar.size() == 0) {
      out << "range_covar: []\n";
    } else {
      out << "range_covar:\n";
      for (auto item : msg.range_covar) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: beam_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.beam_quality.size() == 0) {
      out << "beam_quality: []\n";
    } else {
      out << "beam_quality:\n";
      for (auto item : msg.beam_quality) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: beam_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.beam_velocity.size() == 0) {
      out << "beam_velocity: []\n";
    } else {
      out << "beam_velocity:\n";
      for (auto item : msg.beam_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: beam_velocity_covar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.beam_velocity_covar.size() == 0) {
      out << "beam_velocity_covar: []\n";
    } else {
      out << "beam_velocity_covar:\n";
      for (auto item : msg.beam_velocity_covar) {
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

inline std::string to_yaml(const Dvl & msg, bool use_flow_style = false)
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
  const marine_acoustic_msgs::msg::Dvl & msg,
  std::ostream & out, size_t indentation = 0)
{
  marine_acoustic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marine_acoustic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const marine_acoustic_msgs::msg::Dvl & msg)
{
  return marine_acoustic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marine_acoustic_msgs::msg::Dvl>()
{
  return "marine_acoustic_msgs::msg::Dvl";
}

template<>
inline const char * name<marine_acoustic_msgs::msg::Dvl>()
{
  return "marine_acoustic_msgs/msg/Dvl";
}

template<>
struct has_fixed_size<marine_acoustic_msgs::msg::Dvl>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<marine_acoustic_msgs::msg::Dvl>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<marine_acoustic_msgs::msg::Dvl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DVL__TRAITS_HPP_
