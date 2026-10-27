// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simulation_interfaces:msg/SpawnResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "simulation_interfaces/msg/spawn_result.hpp"


#ifndef SIMULATION_INTERFACES__MSG__DETAIL__SPAWN_RESULT__STRUCT_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__SPAWN_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__simulation_interfaces__msg__SpawnResult __attribute__((deprecated))
#else
# define DEPRECATED__simulation_interfaces__msg__SpawnResult __declspec(deprecated)
#endif

namespace simulation_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpawnResult_
{
  using Type = SpawnResult_<ContainerAllocator>;

  explicit SpawnResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->entity_name = "";
    }
  }

  explicit SpawnResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init),
    entity_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->entity_name = "";
    }
  }

  // field types and members
  using _result_type =
    simulation_interfaces::msg::Result_<ContainerAllocator>;
  _result_type result;
  using _entity_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _entity_name_type entity_name;

  // setters for named parameter idiom
  Type & set__result(
    const simulation_interfaces::msg::Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__entity_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->entity_name = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NAME_NOT_UNIQUE =
    101u;
  static constexpr uint8_t NAME_INVALID =
    102u;
  static constexpr uint8_t UNSUPPORTED_FORMAT =
    103u;
  static constexpr uint8_t NO_RESOURCE =
    104u;
  static constexpr uint8_t NAMESPACE_INVALID =
    105u;
  static constexpr uint8_t RESOURCE_PARSE_ERROR =
    106u;
  static constexpr uint8_t MISSING_ASSETS =
    107u;
  static constexpr uint8_t UNSUPPORTED_ASSETS =
    108u;
  static constexpr uint8_t INVALID_POSE =
    109u;

  // pointer types
  using RawPtr =
    simulation_interfaces::msg::SpawnResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const simulation_interfaces::msg::SpawnResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simulation_interfaces::msg::SpawnResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simulation_interfaces::msg::SpawnResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::msg::SpawnResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::msg::SpawnResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simulation_interfaces::msg::SpawnResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simulation_interfaces::msg::SpawnResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simulation_interfaces::msg::SpawnResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simulation_interfaces::msg::SpawnResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simulation_interfaces__msg__SpawnResult
    std::shared_ptr<simulation_interfaces::msg::SpawnResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simulation_interfaces__msg__SpawnResult
    std::shared_ptr<simulation_interfaces::msg::SpawnResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpawnResult_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->entity_name != other.entity_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpawnResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpawnResult_

// alias to use template instance with default allocator
using SpawnResult =
  simulation_interfaces::msg::SpawnResult_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpawnResult_<ContainerAllocator>::NAME_NOT_UNIQUE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpawnResult_<ContainerAllocator>::NAME_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpawnResult_<ContainerAllocator>::UNSUPPORTED_FORMAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpawnResult_<ContainerAllocator>::NO_RESOURCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpawnResult_<ContainerAllocator>::NAMESPACE_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpawnResult_<ContainerAllocator>::RESOURCE_PARSE_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpawnResult_<ContainerAllocator>::MISSING_ASSETS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpawnResult_<ContainerAllocator>::UNSUPPORTED_ASSETS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpawnResult_<ContainerAllocator>::INVALID_POSE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__SPAWN_RESULT__STRUCT_HPP_
