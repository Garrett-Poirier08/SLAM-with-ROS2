// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marine_acoustic_msgs:msg/ProjectedSonarImage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/projected_sonar_image.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PROJECTED_SONAR_IMAGE__STRUCT_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PROJECTED_SONAR_IMAGE__STRUCT_HPP_

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
// Member 'beam_directions'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'image'
#include "marine_acoustic_msgs/msg/detail/sonar_image_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marine_acoustic_msgs__msg__ProjectedSonarImage __attribute__((deprecated))
#else
# define DEPRECATED__marine_acoustic_msgs__msg__ProjectedSonarImage __declspec(deprecated)
#endif

namespace marine_acoustic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProjectedSonarImage_
{
  using Type = ProjectedSonarImage_<ContainerAllocator>;

  explicit ProjectedSonarImage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    ping_info(_init),
    image(_init)
  {
    (void)_init;
  }

  explicit ProjectedSonarImage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ping_info(_alloc, _init),
    image(_alloc, _init)
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
  using _beam_directions_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>>;
  _beam_directions_type beam_directions;
  using _ranges_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _ranges_type ranges;
  using _image_type =
    marine_acoustic_msgs::msg::SonarImageData_<ContainerAllocator>;
  _image_type image;

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
  Type & set__beam_directions(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>> & _arg)
  {
    this->beam_directions = _arg;
    return *this;
  }
  Type & set__ranges(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->ranges = _arg;
    return *this;
  }
  Type & set__image(
    const marine_acoustic_msgs::msg::SonarImageData_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marine_acoustic_msgs::msg::ProjectedSonarImage_<ContainerAllocator> *;
  using ConstRawPtr =
    const marine_acoustic_msgs::msg::ProjectedSonarImage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marine_acoustic_msgs::msg::ProjectedSonarImage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marine_acoustic_msgs::msg::ProjectedSonarImage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marine_acoustic_msgs::msg::ProjectedSonarImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marine_acoustic_msgs::msg::ProjectedSonarImage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marine_acoustic_msgs::msg::ProjectedSonarImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marine_acoustic_msgs::msg::ProjectedSonarImage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marine_acoustic_msgs::msg::ProjectedSonarImage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marine_acoustic_msgs::msg::ProjectedSonarImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marine_acoustic_msgs__msg__ProjectedSonarImage
    std::shared_ptr<marine_acoustic_msgs::msg::ProjectedSonarImage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marine_acoustic_msgs__msg__ProjectedSonarImage
    std::shared_ptr<marine_acoustic_msgs::msg::ProjectedSonarImage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProjectedSonarImage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ping_info != other.ping_info) {
      return false;
    }
    if (this->beam_directions != other.beam_directions) {
      return false;
    }
    if (this->ranges != other.ranges) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProjectedSonarImage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProjectedSonarImage_

// alias to use template instance with default allocator
using ProjectedSonarImage =
  marine_acoustic_msgs::msg::ProjectedSonarImage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marine_acoustic_msgs

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PROJECTED_SONAR_IMAGE__STRUCT_HPP_
