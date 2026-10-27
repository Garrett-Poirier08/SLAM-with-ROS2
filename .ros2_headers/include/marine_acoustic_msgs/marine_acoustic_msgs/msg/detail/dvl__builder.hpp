// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marine_acoustic_msgs:msg/Dvl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/dvl.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DVL__BUILDER_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DVL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marine_acoustic_msgs/msg/detail/dvl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marine_acoustic_msgs
{

namespace msg
{

namespace builder
{

class Init_Dvl_beam_velocity_covar
{
public:
  explicit Init_Dvl_beam_velocity_covar(::marine_acoustic_msgs::msg::Dvl & msg)
  : msg_(msg)
  {}
  ::marine_acoustic_msgs::msg::Dvl beam_velocity_covar(::marine_acoustic_msgs::msg::Dvl::_beam_velocity_covar_type arg)
  {
    msg_.beam_velocity_covar = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::Dvl msg_;
};

class Init_Dvl_beam_velocity
{
public:
  explicit Init_Dvl_beam_velocity(::marine_acoustic_msgs::msg::Dvl & msg)
  : msg_(msg)
  {}
  Init_Dvl_beam_velocity_covar beam_velocity(::marine_acoustic_msgs::msg::Dvl::_beam_velocity_type arg)
  {
    msg_.beam_velocity = std::move(arg);
    return Init_Dvl_beam_velocity_covar(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::Dvl msg_;
};

class Init_Dvl_beam_quality
{
public:
  explicit Init_Dvl_beam_quality(::marine_acoustic_msgs::msg::Dvl & msg)
  : msg_(msg)
  {}
  Init_Dvl_beam_velocity beam_quality(::marine_acoustic_msgs::msg::Dvl::_beam_quality_type arg)
  {
    msg_.beam_quality = std::move(arg);
    return Init_Dvl_beam_velocity(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::Dvl msg_;
};

class Init_Dvl_range_covar
{
public:
  explicit Init_Dvl_range_covar(::marine_acoustic_msgs::msg::Dvl & msg)
  : msg_(msg)
  {}
  Init_Dvl_beam_quality range_covar(::marine_acoustic_msgs::msg::Dvl::_range_covar_type arg)
  {
    msg_.range_covar = std::move(arg);
    return Init_Dvl_beam_quality(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::Dvl msg_;
};

class Init_Dvl_range
{
public:
  explicit Init_Dvl_range(::marine_acoustic_msgs::msg::Dvl & msg)
  : msg_(msg)
  {}
  Init_Dvl_range_covar range(::marine_acoustic_msgs::msg::Dvl::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_Dvl_range_covar(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::Dvl msg_;
};

class Init_Dvl_beam_unit_vec
{
public:
  explicit Init_Dvl_beam_unit_vec(::marine_acoustic_msgs::msg::Dvl & msg)
  : msg_(msg)
  {}
  Init_Dvl_range beam_unit_vec(::marine_acoustic_msgs::msg::Dvl::_beam_unit_vec_type arg)
  {
    msg_.beam_unit_vec = std::move(arg);
    return Init_Dvl_range(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::Dvl msg_;
};

class Init_Dvl_beam_velocities_valid
{
public:
  explicit Init_Dvl_beam_velocities_valid(::marine_acoustic_msgs::msg::Dvl & msg)
  : msg_(msg)
  {}
  Init_Dvl_beam_unit_vec beam_velocities_valid(::marine_acoustic_msgs::msg::Dvl::_beam_velocities_valid_type arg)
  {
    msg_.beam_velocities_valid = std::move(arg);
    return Init_Dvl_beam_unit_vec(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::Dvl msg_;
};

class Init_Dvl_beam_ranges_valid
{
public:
  explicit Init_Dvl_beam_ranges_valid(::marine_acoustic_msgs::msg::Dvl & msg)
  : msg_(msg)
  {}
  Init_Dvl_beam_velocities_valid beam_ranges_valid(::marine_acoustic_msgs::msg::Dvl::_beam_ranges_valid_type arg)
  {
    msg_.beam_ranges_valid = std::move(arg);
    return Init_Dvl_beam_velocities_valid(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::Dvl msg_;
};

class Init_Dvl_sound_speed
{
public:
  explicit Init_Dvl_sound_speed(::marine_acoustic_msgs::msg::Dvl & msg)
  : msg_(msg)
  {}
  Init_Dvl_beam_ranges_valid sound_speed(::marine_acoustic_msgs::msg::Dvl::_sound_speed_type arg)
  {
    msg_.sound_speed = std::move(arg);
    return Init_Dvl_beam_ranges_valid(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::Dvl msg_;
};

class Init_Dvl_num_good_beams
{
public:
  explicit Init_Dvl_num_good_beams(::marine_acoustic_msgs::msg::Dvl & msg)
  : msg_(msg)
  {}
  Init_Dvl_sound_speed num_good_beams(::marine_acoustic_msgs::msg::Dvl::_num_good_beams_type arg)
  {
    msg_.num_good_beams = std::move(arg);
    return Init_Dvl_sound_speed(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::Dvl msg_;
};

class Init_Dvl_speed_gnd
{
public:
  explicit Init_Dvl_speed_gnd(::marine_acoustic_msgs::msg::Dvl & msg)
  : msg_(msg)
  {}
  Init_Dvl_num_good_beams speed_gnd(::marine_acoustic_msgs::msg::Dvl::_speed_gnd_type arg)
  {
    msg_.speed_gnd = std::move(arg);
    return Init_Dvl_num_good_beams(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::Dvl msg_;
};

class Init_Dvl_course_gnd
{
public:
  explicit Init_Dvl_course_gnd(::marine_acoustic_msgs::msg::Dvl & msg)
  : msg_(msg)
  {}
  Init_Dvl_speed_gnd course_gnd(::marine_acoustic_msgs::msg::Dvl::_course_gnd_type arg)
  {
    msg_.course_gnd = std::move(arg);
    return Init_Dvl_speed_gnd(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::Dvl msg_;
};

class Init_Dvl_altitude
{
public:
  explicit Init_Dvl_altitude(::marine_acoustic_msgs::msg::Dvl & msg)
  : msg_(msg)
  {}
  Init_Dvl_course_gnd altitude(::marine_acoustic_msgs::msg::Dvl::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_Dvl_course_gnd(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::Dvl msg_;
};

class Init_Dvl_velocity_covar
{
public:
  explicit Init_Dvl_velocity_covar(::marine_acoustic_msgs::msg::Dvl & msg)
  : msg_(msg)
  {}
  Init_Dvl_altitude velocity_covar(::marine_acoustic_msgs::msg::Dvl::_velocity_covar_type arg)
  {
    msg_.velocity_covar = std::move(arg);
    return Init_Dvl_altitude(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::Dvl msg_;
};

class Init_Dvl_velocity
{
public:
  explicit Init_Dvl_velocity(::marine_acoustic_msgs::msg::Dvl & msg)
  : msg_(msg)
  {}
  Init_Dvl_velocity_covar velocity(::marine_acoustic_msgs::msg::Dvl::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_Dvl_velocity_covar(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::Dvl msg_;
};

class Init_Dvl_dvl_type
{
public:
  explicit Init_Dvl_dvl_type(::marine_acoustic_msgs::msg::Dvl & msg)
  : msg_(msg)
  {}
  Init_Dvl_velocity dvl_type(::marine_acoustic_msgs::msg::Dvl::_dvl_type_type arg)
  {
    msg_.dvl_type = std::move(arg);
    return Init_Dvl_velocity(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::Dvl msg_;
};

class Init_Dvl_velocity_mode
{
public:
  explicit Init_Dvl_velocity_mode(::marine_acoustic_msgs::msg::Dvl & msg)
  : msg_(msg)
  {}
  Init_Dvl_dvl_type velocity_mode(::marine_acoustic_msgs::msg::Dvl::_velocity_mode_type arg)
  {
    msg_.velocity_mode = std::move(arg);
    return Init_Dvl_dvl_type(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::Dvl msg_;
};

class Init_Dvl_header
{
public:
  Init_Dvl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dvl_velocity_mode header(::marine_acoustic_msgs::msg::Dvl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Dvl_velocity_mode(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::Dvl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marine_acoustic_msgs::msg::Dvl>()
{
  return marine_acoustic_msgs::msg::builder::Init_Dvl_header();
}

}  // namespace marine_acoustic_msgs

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DVL__BUILDER_HPP_
