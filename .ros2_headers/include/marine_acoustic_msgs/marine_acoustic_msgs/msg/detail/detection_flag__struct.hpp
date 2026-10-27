// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marine_acoustic_msgs:msg/DetectionFlag.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/detection_flag.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DETECTION_FLAG__STRUCT_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DETECTION_FLAG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__marine_acoustic_msgs__msg__DetectionFlag __attribute__((deprecated))
#else
# define DEPRECATED__marine_acoustic_msgs__msg__DetectionFlag __declspec(deprecated)
#endif

namespace marine_acoustic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectionFlag_
{
  using Type = DetectionFlag_<ContainerAllocator>;

  explicit DetectionFlag_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->flag = 0;
    }
  }

  explicit DetectionFlag_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->flag = 0;
    }
  }

  // field types and members
  using _flag_type =
    uint8_t;
  _flag_type flag;

  // setters for named parameter idiom
  Type & set__flag(
    const uint8_t & _arg)
  {
    this->flag = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DETECT_OK =
    0u;
  static constexpr uint8_t DETECT_BAD_SONAR =
    1u;
  static constexpr uint8_t DETECT_BAD_FILTER =
    2u;
  static constexpr uint8_t DETECT_BAD_USER =
    4u;

  // pointer types
  using RawPtr =
    marine_acoustic_msgs::msg::DetectionFlag_<ContainerAllocator> *;
  using ConstRawPtr =
    const marine_acoustic_msgs::msg::DetectionFlag_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marine_acoustic_msgs::msg::DetectionFlag_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marine_acoustic_msgs::msg::DetectionFlag_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marine_acoustic_msgs::msg::DetectionFlag_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marine_acoustic_msgs::msg::DetectionFlag_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marine_acoustic_msgs::msg::DetectionFlag_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marine_acoustic_msgs::msg::DetectionFlag_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marine_acoustic_msgs::msg::DetectionFlag_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marine_acoustic_msgs::msg::DetectionFlag_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marine_acoustic_msgs__msg__DetectionFlag
    std::shared_ptr<marine_acoustic_msgs::msg::DetectionFlag_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marine_acoustic_msgs__msg__DetectionFlag
    std::shared_ptr<marine_acoustic_msgs::msg::DetectionFlag_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectionFlag_ & other) const
  {
    if (this->flag != other.flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectionFlag_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectionFlag_

// alias to use template instance with default allocator
using DetectionFlag =
  marine_acoustic_msgs::msg::DetectionFlag_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectionFlag_<ContainerAllocator>::DETECT_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectionFlag_<ContainerAllocator>::DETECT_BAD_SONAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectionFlag_<ContainerAllocator>::DETECT_BAD_FILTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DetectionFlag_<ContainerAllocator>::DETECT_BAD_USER;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace marine_acoustic_msgs

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DETECTION_FLAG__STRUCT_HPP_
