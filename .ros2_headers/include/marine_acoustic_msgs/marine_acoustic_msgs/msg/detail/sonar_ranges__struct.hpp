// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marine_acoustic_msgs:msg/SonarRanges.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/sonar_ranges.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_RANGES__STRUCT_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_RANGES__STRUCT_HPP_

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
// Member 'ping_info'
#include "marine_acoustic_msgs/msg/detail/ping_info__struct.hpp"
// Member 'flags'
#include "marine_acoustic_msgs/msg/detail/detection_flag__struct.hpp"
// Member 'beam_unit_vec'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marine_acoustic_msgs__msg__SonarRanges __attribute__((deprecated))
#else
# define DEPRECATED__marine_acoustic_msgs__msg__SonarRanges __declspec(deprecated)
#endif

namespace marine_acoustic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SonarRanges_
{
  using Type = SonarRanges_<ContainerAllocator>;

  explicit SonarRanges_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    ping_info(_init)
  {
    (void)_init;
  }

  explicit SonarRanges_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ping_info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ping_info_type =
    marine_acoustic_msgs::msg::PingInfo_<ContainerAllocator>;
  _ping_info_type ping_info;
  using _flags_type =
    std::vector<marine_acoustic_msgs::msg::DetectionFlag_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marine_acoustic_msgs::msg::DetectionFlag_<ContainerAllocator>>>;
  _flags_type flags;
  using _transmit_delays_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _transmit_delays_type transmit_delays;
  using _intensities_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _intensities_type intensities;
  using _beam_unit_vec_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>>;
  _beam_unit_vec_type beam_unit_vec;
  using _ranges_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _ranges_type ranges;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ping_info(
    const marine_acoustic_msgs::msg::PingInfo_<ContainerAllocator> & _arg)
  {
    this->ping_info = _arg;
    return *this;
  }
  Type & set__flags(
    const std::vector<marine_acoustic_msgs::msg::DetectionFlag_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marine_acoustic_msgs::msg::DetectionFlag_<ContainerAllocator>>> & _arg)
  {
    this->flags = _arg;
    return *this;
  }
  Type & set__transmit_delays(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->transmit_delays = _arg;
    return *this;
  }
  Type & set__intensities(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->intensities = _arg;
    return *this;
  }
  Type & set__beam_unit_vec(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>> & _arg)
  {
    this->beam_unit_vec = _arg;
    return *this;
  }
  Type & set__ranges(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->ranges = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marine_acoustic_msgs::msg::SonarRanges_<ContainerAllocator> *;
  using ConstRawPtr =
    const marine_acoustic_msgs::msg::SonarRanges_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marine_acoustic_msgs::msg::SonarRanges_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marine_acoustic_msgs::msg::SonarRanges_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marine_acoustic_msgs::msg::SonarRanges_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marine_acoustic_msgs::msg::SonarRanges_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marine_acoustic_msgs::msg::SonarRanges_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marine_acoustic_msgs::msg::SonarRanges_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marine_acoustic_msgs::msg::SonarRanges_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marine_acoustic_msgs::msg::SonarRanges_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marine_acoustic_msgs__msg__SonarRanges
    std::shared_ptr<marine_acoustic_msgs::msg::SonarRanges_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marine_acoustic_msgs__msg__SonarRanges
    std::shared_ptr<marine_acoustic_msgs::msg::SonarRanges_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SonarRanges_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ping_info != other.ping_info) {
      return false;
    }
    if (this->flags != other.flags) {
      return false;
    }
    if (this->transmit_delays != other.transmit_delays) {
      return false;
    }
    if (this->intensities != other.intensities) {
      return false;
    }
    if (this->beam_unit_vec != other.beam_unit_vec) {
      return false;
    }
    if (this->ranges != other.ranges) {
      return false;
    }
    return true;
  }
  bool operator!=(const SonarRanges_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SonarRanges_

// alias to use template instance with default allocator
using SonarRanges =
  marine_acoustic_msgs::msg::SonarRanges_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marine_acoustic_msgs

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_RANGES__STRUCT_HPP_
