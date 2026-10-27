// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marine_acoustic_msgs:msg/PingInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/ping_info.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PING_INFO__STRUCT_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PING_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__marine_acoustic_msgs__msg__PingInfo __attribute__((deprecated))
#else
# define DEPRECATED__marine_acoustic_msgs__msg__PingInfo __declspec(deprecated)
#endif

namespace marine_acoustic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PingInfo_
{
  using Type = PingInfo_<ContainerAllocator>;

  explicit PingInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frequency = 0.0f;
      this->sound_speed = 0.0f;
    }
  }

  explicit PingInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frequency = 0.0f;
      this->sound_speed = 0.0f;
    }
  }

  // field types and members
  using _frequency_type =
    float;
  _frequency_type frequency;
  using _sound_speed_type =
    float;
  _sound_speed_type sound_speed;
  using _tx_beamwidths_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _tx_beamwidths_type tx_beamwidths;
  using _rx_beamwidths_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _rx_beamwidths_type rx_beamwidths;

  // setters for named parameter idiom
  Type & set__frequency(
    const float & _arg)
  {
    this->frequency = _arg;
    return *this;
  }
  Type & set__sound_speed(
    const float & _arg)
  {
    this->sound_speed = _arg;
    return *this;
  }
  Type & set__tx_beamwidths(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->tx_beamwidths = _arg;
    return *this;
  }
  Type & set__rx_beamwidths(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->rx_beamwidths = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marine_acoustic_msgs::msg::PingInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const marine_acoustic_msgs::msg::PingInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marine_acoustic_msgs::msg::PingInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marine_acoustic_msgs::msg::PingInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marine_acoustic_msgs::msg::PingInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marine_acoustic_msgs::msg::PingInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marine_acoustic_msgs::msg::PingInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marine_acoustic_msgs::msg::PingInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marine_acoustic_msgs::msg::PingInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marine_acoustic_msgs::msg::PingInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marine_acoustic_msgs__msg__PingInfo
    std::shared_ptr<marine_acoustic_msgs::msg::PingInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marine_acoustic_msgs__msg__PingInfo
    std::shared_ptr<marine_acoustic_msgs::msg::PingInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PingInfo_ & other) const
  {
    if (this->frequency != other.frequency) {
      return false;
    }
    if (this->sound_speed != other.sound_speed) {
      return false;
    }
    if (this->tx_beamwidths != other.tx_beamwidths) {
      return false;
    }
    if (this->rx_beamwidths != other.rx_beamwidths) {
      return false;
    }
    return true;
  }
  bool operator!=(const PingInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PingInfo_

// alias to use template instance with default allocator
using PingInfo =
  marine_acoustic_msgs::msg::PingInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marine_acoustic_msgs

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PING_INFO__STRUCT_HPP_
