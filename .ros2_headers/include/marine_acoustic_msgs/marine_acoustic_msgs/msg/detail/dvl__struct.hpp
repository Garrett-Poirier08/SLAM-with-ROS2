// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marine_acoustic_msgs:msg/Dvl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/dvl.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DVL__STRUCT_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DVL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'velocity'
// Member 'beam_unit_vec'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marine_acoustic_msgs__msg__Dvl __attribute__((deprecated))
#else
# define DEPRECATED__marine_acoustic_msgs__msg__Dvl __declspec(deprecated)
#endif

namespace marine_acoustic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Dvl_
{
  using Type = Dvl_<ContainerAllocator>;

  explicit Dvl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity_mode = 0;
      this->dvl_type = 0;
      std::fill<typename std::array<double, 9>::iterator, double>(this->velocity_covar.begin(), this->velocity_covar.end(), 0.0);
      this->altitude = 0.0;
      this->course_gnd = 0.0;
      this->speed_gnd = 0.0;
      this->num_good_beams = 0;
      this->sound_speed = 0.0f;
      this->beam_ranges_valid = false;
      this->beam_velocities_valid = false;
      this->beam_unit_vec.fill(geometry_msgs::msg::Vector3_<ContainerAllocator>{_init});
      std::fill<typename std::array<double, 4>::iterator, double>(this->range.begin(), this->range.end(), 0.0);
      std::fill<typename std::array<float, 4>::iterator, float>(this->range_covar.begin(), this->range_covar.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->beam_quality.begin(), this->beam_quality.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->beam_velocity.begin(), this->beam_velocity.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->beam_velocity_covar.begin(), this->beam_velocity_covar.end(), 0.0f);
    }
  }

  explicit Dvl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    velocity(_alloc, _init),
    velocity_covar(_alloc),
    beam_unit_vec(_alloc),
    range(_alloc),
    range_covar(_alloc),
    beam_quality(_alloc),
    beam_velocity(_alloc),
    beam_velocity_covar(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity_mode = 0;
      this->dvl_type = 0;
      std::fill<typename std::array<double, 9>::iterator, double>(this->velocity_covar.begin(), this->velocity_covar.end(), 0.0);
      this->altitude = 0.0;
      this->course_gnd = 0.0;
      this->speed_gnd = 0.0;
      this->num_good_beams = 0;
      this->sound_speed = 0.0f;
      this->beam_ranges_valid = false;
      this->beam_velocities_valid = false;
      this->beam_unit_vec.fill(geometry_msgs::msg::Vector3_<ContainerAllocator>{_alloc, _init});
      std::fill<typename std::array<double, 4>::iterator, double>(this->range.begin(), this->range.end(), 0.0);
      std::fill<typename std::array<float, 4>::iterator, float>(this->range_covar.begin(), this->range_covar.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->beam_quality.begin(), this->beam_quality.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->beam_velocity.begin(), this->beam_velocity.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->beam_velocity_covar.begin(), this->beam_velocity_covar.end(), 0.0f);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _velocity_mode_type =
    uint8_t;
  _velocity_mode_type velocity_mode;
  using _dvl_type_type =
    uint8_t;
  _dvl_type_type dvl_type;
  using _velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_type velocity;
  using _velocity_covar_type =
    std::array<double, 9>;
  _velocity_covar_type velocity_covar;
  using _altitude_type =
    double;
  _altitude_type altitude;
  using _course_gnd_type =
    double;
  _course_gnd_type course_gnd;
  using _speed_gnd_type =
    double;
  _speed_gnd_type speed_gnd;
  using _num_good_beams_type =
    uint8_t;
  _num_good_beams_type num_good_beams;
  using _sound_speed_type =
    float;
  _sound_speed_type sound_speed;
  using _beam_ranges_valid_type =
    bool;
  _beam_ranges_valid_type beam_ranges_valid;
  using _beam_velocities_valid_type =
    bool;
  _beam_velocities_valid_type beam_velocities_valid;
  using _beam_unit_vec_type =
    std::array<geometry_msgs::msg::Vector3_<ContainerAllocator>, 4>;
  _beam_unit_vec_type beam_unit_vec;
  using _range_type =
    std::array<double, 4>;
  _range_type range;
  using _range_covar_type =
    std::array<float, 4>;
  _range_covar_type range_covar;
  using _beam_quality_type =
    std::array<float, 4>;
  _beam_quality_type beam_quality;
  using _beam_velocity_type =
    std::array<float, 4>;
  _beam_velocity_type beam_velocity;
  using _beam_velocity_covar_type =
    std::array<float, 4>;
  _beam_velocity_covar_type beam_velocity_covar;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__velocity_mode(
    const uint8_t & _arg)
  {
    this->velocity_mode = _arg;
    return *this;
  }
  Type & set__dvl_type(
    const uint8_t & _arg)
  {
    this->dvl_type = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__velocity_covar(
    const std::array<double, 9> & _arg)
  {
    this->velocity_covar = _arg;
    return *this;
  }
  Type & set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__course_gnd(
    const double & _arg)
  {
    this->course_gnd = _arg;
    return *this;
  }
  Type & set__speed_gnd(
    const double & _arg)
  {
    this->speed_gnd = _arg;
    return *this;
  }
  Type & set__num_good_beams(
    const uint8_t & _arg)
  {
    this->num_good_beams = _arg;
    return *this;
  }
  Type & set__sound_speed(
    const float & _arg)
  {
    this->sound_speed = _arg;
    return *this;
  }
  Type & set__beam_ranges_valid(
    const bool & _arg)
  {
    this->beam_ranges_valid = _arg;
    return *this;
  }
  Type & set__beam_velocities_valid(
    const bool & _arg)
  {
    this->beam_velocities_valid = _arg;
    return *this;
  }
  Type & set__beam_unit_vec(
    const std::array<geometry_msgs::msg::Vector3_<ContainerAllocator>, 4> & _arg)
  {
    this->beam_unit_vec = _arg;
    return *this;
  }
  Type & set__range(
    const std::array<double, 4> & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__range_covar(
    const std::array<float, 4> & _arg)
  {
    this->range_covar = _arg;
    return *this;
  }
  Type & set__beam_quality(
    const std::array<float, 4> & _arg)
  {
    this->beam_quality = _arg;
    return *this;
  }
  Type & set__beam_velocity(
    const std::array<float, 4> & _arg)
  {
    this->beam_velocity = _arg;
    return *this;
  }
  Type & set__beam_velocity_covar(
    const std::array<float, 4> & _arg)
  {
    this->beam_velocity_covar = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DVL_MODE_BOTTOM =
    1u;
  static constexpr uint8_t DVL_MODE_WATER =
    2u;
  static constexpr uint8_t DVL_TYPE_PISTON =
    0u;
  static constexpr uint8_t DVL_TYPE_PHASED_ARRAY =
    1u;

  // pointer types
  using RawPtr =
    marine_acoustic_msgs::msg::Dvl_<ContainerAllocator> *;
  using ConstRawPtr =
    const marine_acoustic_msgs::msg::Dvl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marine_acoustic_msgs::msg::Dvl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marine_acoustic_msgs::msg::Dvl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marine_acoustic_msgs::msg::Dvl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marine_acoustic_msgs::msg::Dvl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marine_acoustic_msgs::msg::Dvl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marine_acoustic_msgs::msg::Dvl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marine_acoustic_msgs::msg::Dvl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marine_acoustic_msgs::msg::Dvl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marine_acoustic_msgs__msg__Dvl
    std::shared_ptr<marine_acoustic_msgs::msg::Dvl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marine_acoustic_msgs__msg__Dvl
    std::shared_ptr<marine_acoustic_msgs::msg::Dvl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dvl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->velocity_mode != other.velocity_mode) {
      return false;
    }
    if (this->dvl_type != other.dvl_type) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->velocity_covar != other.velocity_covar) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->course_gnd != other.course_gnd) {
      return false;
    }
    if (this->speed_gnd != other.speed_gnd) {
      return false;
    }
    if (this->num_good_beams != other.num_good_beams) {
      return false;
    }
    if (this->sound_speed != other.sound_speed) {
      return false;
    }
    if (this->beam_ranges_valid != other.beam_ranges_valid) {
      return false;
    }
    if (this->beam_velocities_valid != other.beam_velocities_valid) {
      return false;
    }
    if (this->beam_unit_vec != other.beam_unit_vec) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    if (this->range_covar != other.range_covar) {
      return false;
    }
    if (this->beam_quality != other.beam_quality) {
      return false;
    }
    if (this->beam_velocity != other.beam_velocity) {
      return false;
    }
    if (this->beam_velocity_covar != other.beam_velocity_covar) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dvl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dvl_

// alias to use template instance with default allocator
using Dvl =
  marine_acoustic_msgs::msg::Dvl_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Dvl_<ContainerAllocator>::DVL_MODE_BOTTOM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Dvl_<ContainerAllocator>::DVL_MODE_WATER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Dvl_<ContainerAllocator>::DVL_TYPE_PISTON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Dvl_<ContainerAllocator>::DVL_TYPE_PHASED_ARRAY;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace marine_acoustic_msgs

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DVL__STRUCT_HPP_
