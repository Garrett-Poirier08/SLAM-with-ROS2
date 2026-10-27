// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pal_statistics_msgs:msg/Statistics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pal_statistics_msgs/msg/statistics.hpp"


#ifndef PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS__STRUCT_HPP_
#define PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS__STRUCT_HPP_

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
// Member 'statistics'
#include "pal_statistics_msgs/msg/detail/statistic__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pal_statistics_msgs__msg__Statistics __attribute__((deprecated))
#else
# define DEPRECATED__pal_statistics_msgs__msg__Statistics __declspec(deprecated)
#endif

namespace pal_statistics_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Statistics_
{
  using Type = Statistics_<ContainerAllocator>;

  explicit Statistics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Statistics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _statistics_type =
    std::vector<pal_statistics_msgs::msg::Statistic_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pal_statistics_msgs::msg::Statistic_<ContainerAllocator>>>;
  _statistics_type statistics;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__statistics(
    const std::vector<pal_statistics_msgs::msg::Statistic_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pal_statistics_msgs::msg::Statistic_<ContainerAllocator>>> & _arg)
  {
    this->statistics = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pal_statistics_msgs::msg::Statistics_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_statistics_msgs::msg::Statistics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_statistics_msgs::msg::Statistics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_statistics_msgs::msg::Statistics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_statistics_msgs::msg::Statistics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_statistics_msgs::msg::Statistics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_statistics_msgs::msg::Statistics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_statistics_msgs::msg::Statistics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_statistics_msgs::msg::Statistics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_statistics_msgs::msg::Statistics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_statistics_msgs__msg__Statistics
    std::shared_ptr<pal_statistics_msgs::msg::Statistics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_statistics_msgs__msg__Statistics
    std::shared_ptr<pal_statistics_msgs::msg::Statistics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Statistics_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->statistics != other.statistics) {
      return false;
    }
    return true;
  }
  bool operator!=(const Statistics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Statistics_

// alias to use template instance with default allocator
using Statistics =
  pal_statistics_msgs::msg::Statistics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pal_statistics_msgs

#endif  // PAL_STATISTICS_MSGS__MSG__DETAIL__STATISTICS__STRUCT_HPP_
