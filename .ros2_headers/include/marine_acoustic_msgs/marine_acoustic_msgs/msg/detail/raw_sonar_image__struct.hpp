// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marine_acoustic_msgs:msg/RawSonarImage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/raw_sonar_image.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__RAW_SONAR_IMAGE__STRUCT_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__RAW_SONAR_IMAGE__STRUCT_HPP_

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
// Member 'image'
#include "marine_acoustic_msgs/msg/detail/sonar_image_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marine_acoustic_msgs__msg__RawSonarImage __attribute__((deprecated))
#else
# define DEPRECATED__marine_acoustic_msgs__msg__RawSonarImage __declspec(deprecated)
#endif

namespace marine_acoustic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RawSonarImage_
{
  using Type = RawSonarImage_<ContainerAllocator>;

  explicit RawSonarImage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    ping_info(_init),
    image(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sample_rate = 0.0f;
      this->samples_per_beam = 0ul;
      this->sample0 = 0ul;
    }
  }

  explicit RawSonarImage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ping_info(_alloc, _init),
    image(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sample_rate = 0.0f;
      this->samples_per_beam = 0ul;
      this->sample0 = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ping_info_type =
    marine_acoustic_msgs::msg::PingInfo_<ContainerAllocator>;
  _ping_info_type ping_info;
  using _sample_rate_type =
    float;
  _sample_rate_type sample_rate;
  using _samples_per_beam_type =
    uint32_t;
  _samples_per_beam_type samples_per_beam;
  using _sample0_type =
    uint32_t;
  _sample0_type sample0;
  using _tx_delays_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _tx_delays_type tx_delays;
  using _tx_angles_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _tx_angles_type tx_angles;
  using _rx_angles_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _rx_angles_type rx_angles;
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
  Type & set__sample_rate(
    const float & _arg)
  {
    this->sample_rate = _arg;
    return *this;
  }
  Type & set__samples_per_beam(
    const uint32_t & _arg)
  {
    this->samples_per_beam = _arg;
    return *this;
  }
  Type & set__sample0(
    const uint32_t & _arg)
  {
    this->sample0 = _arg;
    return *this;
  }
  Type & set__tx_delays(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->tx_delays = _arg;
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
  Type & set__image(
    const marine_acoustic_msgs::msg::SonarImageData_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marine_acoustic_msgs::msg::RawSonarImage_<ContainerAllocator> *;
  using ConstRawPtr =
    const marine_acoustic_msgs::msg::RawSonarImage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marine_acoustic_msgs::msg::RawSonarImage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marine_acoustic_msgs::msg::RawSonarImage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marine_acoustic_msgs::msg::RawSonarImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marine_acoustic_msgs::msg::RawSonarImage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marine_acoustic_msgs::msg::RawSonarImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marine_acoustic_msgs::msg::RawSonarImage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marine_acoustic_msgs::msg::RawSonarImage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marine_acoustic_msgs::msg::RawSonarImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marine_acoustic_msgs__msg__RawSonarImage
    std::shared_ptr<marine_acoustic_msgs::msg::RawSonarImage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marine_acoustic_msgs__msg__RawSonarImage
    std::shared_ptr<marine_acoustic_msgs::msg::RawSonarImage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RawSonarImage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ping_info != other.ping_info) {
      return false;
    }
    if (this->sample_rate != other.sample_rate) {
      return false;
    }
    if (this->samples_per_beam != other.samples_per_beam) {
      return false;
    }
    if (this->sample0 != other.sample0) {
      return false;
    }
    if (this->tx_delays != other.tx_delays) {
      return false;
    }
    if (this->tx_angles != other.tx_angles) {
      return false;
    }
    if (this->rx_angles != other.rx_angles) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    return true;
  }
  bool operator!=(const RawSonarImage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RawSonarImage_

// alias to use template instance with default allocator
using RawSonarImage =
  marine_acoustic_msgs::msg::RawSonarImage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marine_acoustic_msgs

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__RAW_SONAR_IMAGE__STRUCT_HPP_
