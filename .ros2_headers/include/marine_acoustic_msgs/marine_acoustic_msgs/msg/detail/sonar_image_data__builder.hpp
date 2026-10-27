// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marine_acoustic_msgs:msg/SonarImageData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/sonar_image_data.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_IMAGE_DATA__BUILDER_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_IMAGE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marine_acoustic_msgs/msg/detail/sonar_image_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marine_acoustic_msgs
{

namespace msg
{

namespace builder
{

class Init_SonarImageData_data
{
public:
  explicit Init_SonarImageData_data(::marine_acoustic_msgs::msg::SonarImageData & msg)
  : msg_(msg)
  {}
  ::marine_acoustic_msgs::msg::SonarImageData data(::marine_acoustic_msgs::msg::SonarImageData::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::SonarImageData msg_;
};

class Init_SonarImageData_beam_count
{
public:
  explicit Init_SonarImageData_beam_count(::marine_acoustic_msgs::msg::SonarImageData & msg)
  : msg_(msg)
  {}
  Init_SonarImageData_data beam_count(::marine_acoustic_msgs::msg::SonarImageData::_beam_count_type arg)
  {
    msg_.beam_count = std::move(arg);
    return Init_SonarImageData_data(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::SonarImageData msg_;
};

class Init_SonarImageData_dtype
{
public:
  explicit Init_SonarImageData_dtype(::marine_acoustic_msgs::msg::SonarImageData & msg)
  : msg_(msg)
  {}
  Init_SonarImageData_beam_count dtype(::marine_acoustic_msgs::msg::SonarImageData::_dtype_type arg)
  {
    msg_.dtype = std::move(arg);
    return Init_SonarImageData_beam_count(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::SonarImageData msg_;
};

class Init_SonarImageData_is_bigendian
{
public:
  Init_SonarImageData_is_bigendian()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SonarImageData_dtype is_bigendian(::marine_acoustic_msgs::msg::SonarImageData::_is_bigendian_type arg)
  {
    msg_.is_bigendian = std::move(arg);
    return Init_SonarImageData_dtype(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::SonarImageData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marine_acoustic_msgs::msg::SonarImageData>()
{
  return marine_acoustic_msgs::msg::builder::Init_SonarImageData_is_bigendian();
}

}  // namespace marine_acoustic_msgs

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_IMAGE_DATA__BUILDER_HPP_
