// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marine_acoustic_msgs:msg/SonarImageData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/sonar_image_data.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_IMAGE_DATA__STRUCT_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_IMAGE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__marine_acoustic_msgs__msg__SonarImageData __attribute__((deprecated))
#else
# define DEPRECATED__marine_acoustic_msgs__msg__SonarImageData __declspec(deprecated)
#endif

namespace marine_acoustic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SonarImageData_
{
  using Type = SonarImageData_<ContainerAllocator>;

  explicit SonarImageData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_bigendian = false;
      this->dtype = 0ul;
      this->beam_count = 0ul;
    }
  }

  explicit SonarImageData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_bigendian = false;
      this->dtype = 0ul;
      this->beam_count = 0ul;
    }
  }

  // field types and members
  using _is_bigendian_type =
    bool;
  _is_bigendian_type is_bigendian;
  using _dtype_type =
    uint32_t;
  _dtype_type dtype;
  using _beam_count_type =
    uint32_t;
  _beam_count_type beam_count;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__is_bigendian(
    const bool & _arg)
  {
    this->is_bigendian = _arg;
    return *this;
  }
  Type & set__dtype(
    const uint32_t & _arg)
  {
    this->dtype = _arg;
    return *this;
  }
  Type & set__beam_count(
    const uint32_t & _arg)
  {
    this->beam_count = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t DTYPE_UINT8 =
    0u;
  static constexpr uint32_t DTYPE_INT8 =
    1u;
  static constexpr uint32_t DTYPE_UINT16 =
    2u;
  static constexpr uint32_t DTYPE_INT16 =
    3u;
  static constexpr uint32_t DTYPE_UINT32 =
    4u;
  static constexpr uint32_t DTYPE_INT32 =
    5u;
  static constexpr uint32_t DTYPE_UINT64 =
    6u;
  static constexpr uint32_t DTYPE_INT64 =
    7u;
  static constexpr uint32_t DTYPE_FLOAT32 =
    8u;
  static constexpr uint32_t DTYPE_FLOAT64 =
    9u;

  // pointer types
  using RawPtr =
    marine_acoustic_msgs::msg::SonarImageData_<ContainerAllocator> *;
  using ConstRawPtr =
    const marine_acoustic_msgs::msg::SonarImageData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marine_acoustic_msgs::msg::SonarImageData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marine_acoustic_msgs::msg::SonarImageData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marine_acoustic_msgs::msg::SonarImageData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marine_acoustic_msgs::msg::SonarImageData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marine_acoustic_msgs::msg::SonarImageData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marine_acoustic_msgs::msg::SonarImageData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marine_acoustic_msgs::msg::SonarImageData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marine_acoustic_msgs::msg::SonarImageData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marine_acoustic_msgs__msg__SonarImageData
    std::shared_ptr<marine_acoustic_msgs::msg::SonarImageData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marine_acoustic_msgs__msg__SonarImageData
    std::shared_ptr<marine_acoustic_msgs::msg::SonarImageData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SonarImageData_ & other) const
  {
    if (this->is_bigendian != other.is_bigendian) {
      return false;
    }
    if (this->dtype != other.dtype) {
      return false;
    }
    if (this->beam_count != other.beam_count) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SonarImageData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SonarImageData_

// alias to use template instance with default allocator
using SonarImageData =
  marine_acoustic_msgs::msg::SonarImageData_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SonarImageData_<ContainerAllocator>::DTYPE_UINT8;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SonarImageData_<ContainerAllocator>::DTYPE_INT8;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SonarImageData_<ContainerAllocator>::DTYPE_UINT16;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SonarImageData_<ContainerAllocator>::DTYPE_INT16;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SonarImageData_<ContainerAllocator>::DTYPE_UINT32;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SonarImageData_<ContainerAllocator>::DTYPE_INT32;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SonarImageData_<ContainerAllocator>::DTYPE_UINT64;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SonarImageData_<ContainerAllocator>::DTYPE_INT64;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SonarImageData_<ContainerAllocator>::DTYPE_FLOAT32;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SonarImageData_<ContainerAllocator>::DTYPE_FLOAT64;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace marine_acoustic_msgs

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_IMAGE_DATA__STRUCT_HPP_
