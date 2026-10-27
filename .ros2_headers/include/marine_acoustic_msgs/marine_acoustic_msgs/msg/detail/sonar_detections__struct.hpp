// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marine_acoustic_msgs:msg/SonarDetections.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/sonar_detections.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_DETECTIONS__STRUCT_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_DETECTIONS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__marine_acoustic_msgs__msg__SonarDetections __attribute__((deprecated))
#else
# define DEPRECATED__marine_acoustic_msgs__msg__SonarDetections __declspec(deprecated)
#endif

namespace marine_acoustic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SonarDetections_
{
  using Type = SonarDetections_<ContainerAllocator>;

  explicit SonarDetections_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    ping_info(_init)
  {
    (void)_init;
  }

  explicit SonarDetections_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  using _two_way_travel_times_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _two_way_travel_times_type two_way_travel_times;
  using _tx_delays_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _tx_delays_type tx_delays;
  using _intensities_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _intensities_type intensities;
  using _tx_angles_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _tx_angles_type tx_angles;
  using _rx_angles_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _rx_angles_type rx_angles;

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
  Type & set__two_way_travel_times(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->two_way_travel_times = _arg;
    return *this;
  }
  Type & set__tx_delays(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->tx_delays = _arg;
    return *this;
  }
  Type & set__intensities(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->intensities = _arg;
    return *this;
  }
  Type & set__tx_angles(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->tx_angles = _arg;
    return *this;
  }
  Type & set__rx_angles(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->rx_angles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marine_acoustic_msgs::msg::SonarDetections_<ContainerAllocator> *;
  using ConstRawPtr =
    const marine_acoustic_msgs::msg::SonarDetections_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marine_acoustic_msgs::msg::SonarDetections_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marine_acoustic_msgs::msg::SonarDetections_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marine_acoustic_msgs::msg::SonarDetections_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marine_acoustic_msgs::msg::SonarDetections_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marine_acoustic_msgs::msg::SonarDetections_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marine_acoustic_msgs::msg::SonarDetections_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marine_acoustic_msgs::msg::SonarDetections_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marine_acoustic_msgs::msg::SonarDetections_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marine_acoustic_msgs__msg__SonarDetections
    std::shared_ptr<marine_acoustic_msgs::msg::SonarDetections_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marine_acoustic_msgs__msg__SonarDetections
    std::shared_ptr<marine_acoustic_msgs::msg::SonarDetections_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SonarDetections_ & other) const
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
    if (this->two_way_travel_times != other.two_way_travel_times) {
      return false;
    }
    if (this->tx_delays != other.tx_delays) {
      return false;
    }
    if (this->intensities != other.intensities) {
      return false;
    }
    if (this->tx_angles != other.tx_angles) {
      return false;
    }
    if (this->rx_angles != other.rx_angles) {
      return false;
    }
    return true;
  }
  bool operator!=(const SonarDetections_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SonarDetections_

// alias to use template instance with default allocator
using SonarDetections =
  marine_acoustic_msgs::msg::SonarDetections_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marine_acoustic_msgs

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_DETECTIONS__STRUCT_HPP_
