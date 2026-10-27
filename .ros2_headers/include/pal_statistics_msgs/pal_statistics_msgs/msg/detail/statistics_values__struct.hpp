// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pal_statistics_msgs:msg/StatisticsValues.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pal_statistics_msgs/msg/statistics_values.hpp"


#ifndef PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS_VALUES__STRUCT_HPP_
#define PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS_VALUES__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__pal_statistics_msgs__msg__StatisticsValues __attribute__((deprecated))
#else
# define DEPRECATED__pal_statistics_msgs__msg__StatisticsValues __declspec(deprecated)
#endif

namespace pal_statistics_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StatisticsValues_
{
  using Type = StatisticsValues_<ContainerAllocator>;

  explicit StatisticsValues_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->names_version = 0ul;
    }
  }

  explicit StatisticsValues_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->names_version = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _values_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _values_type values;
  using _names_version_type =
    uint32_t;
  _names_version_type names_version;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__values(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->values = _arg;
    return *this;
  }
  Type & set__names_version(
    const uint32_t & _arg)
  {
    this->names_version = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pal_statistics_msgs::msg::StatisticsValues_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_statistics_msgs::msg::StatisticsValues_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_statistics_msgs::msg::StatisticsValues_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_statistics_msgs::msg::StatisticsValues_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_statistics_msgs::msg::StatisticsValues_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_statistics_msgs::msg::StatisticsValues_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_statistics_msgs::msg::StatisticsValues_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_statistics_msgs::msg::StatisticsValues_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_statistics_msgs::msg::StatisticsValues_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_statistics_msgs::msg::StatisticsValues_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_statistics_msgs__msg__StatisticsValues
    std::shared_ptr<pal_statistics_msgs::msg::StatisticsValues_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_statistics_msgs__msg__StatisticsValues
    std::shared_ptr<pal_statistics_msgs::msg::StatisticsValues_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StatisticsValues_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->values != other.values) {
      return false;
    }
    if (this->names_version != other.names_version) {
      return false;
    }
    return true;
  }
  bool operator!=(const StatisticsValues_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StatisticsValues_

// alias to use template instance with default allocator
using StatisticsValues =
  pal_statistics_msgs::msg::StatisticsValues_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pal_statistics_msgs

#endif  // PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS_VALUES__STRUCT_HPP_
