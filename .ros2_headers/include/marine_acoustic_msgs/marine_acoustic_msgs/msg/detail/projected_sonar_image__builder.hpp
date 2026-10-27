// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marine_acoustic_msgs:msg/ProjectedSonarImage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/projected_sonar_image.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PROJECTED_SONAR_IMAGE__BUILDER_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PROJECTED_SONAR_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marine_acoustic_msgs/msg/detail/projected_sonar_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marine_acoustic_msgs
{

namespace msg
{

namespace builder
{

class Init_ProjectedSonarImage_image
{
public:
  explicit Init_ProjectedSonarImage_image(::marine_acoustic_msgs::msg::ProjectedSonarImage & msg)
  : msg_(msg)
  {}
  ::marine_acoustic_msgs::msg::ProjectedSonarImage image(::marine_acoustic_msgs::msg::ProjectedSonarImage::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::ProjectedSonarImage msg_;
};

class Init_ProjectedSonarImage_ranges
{
public:
  explicit Init_ProjectedSonarImage_ranges(::marine_acoustic_msgs::msg::ProjectedSonarImage & msg)
  : msg_(msg)
  {}
  Init_ProjectedSonarImage_image ranges(::marine_acoustic_msgs::msg::ProjectedSonarImage::_ranges_type arg)
  {
    msg_.ranges = std::move(arg);
    return Init_ProjectedSonarImage_image(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::ProjectedSonarImage msg_;
};

class Init_ProjectedSonarImage_beam_directions
{
public:
  explicit Init_ProjectedSonarImage_beam_directions(::marine_acoustic_msgs::msg::ProjectedSonarImage & msg)
  : msg_(msg)
  {}
  Init_ProjectedSonarImage_ranges beam_directions(::marine_acoustic_msgs::msg::ProjectedSonarImage::_beam_directions_type arg)
  {
    msg_.beam_directions = std::move(arg);
    return Init_ProjectedSonarImage_ranges(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::ProjectedSonarImage msg_;
};

class Init_ProjectedSonarImage_ping_info
{
public:
  explicit Init_ProjectedSonarImage_ping_info(::marine_acoustic_msgs::msg::ProjectedSonarImage & msg)
  : msg_(msg)
  {}
  Init_ProjectedSonarImage_beam_directions ping_info(::marine_acoustic_msgs::msg::ProjectedSonarImage::_ping_info_type arg)
  {
    msg_.ping_info = std::move(arg);
    return Init_ProjectedSonarImage_beam_directions(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::ProjectedSonarImage msg_;
};

class Init_ProjectedSonarImage_header
{
public:
  Init_ProjectedSonarImage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProjectedSonarImage_ping_info header(::marine_acoustic_msgs::msg::ProjectedSonarImage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ProjectedSonarImage_ping_info(msg_);
  }

private:
  ::marine_acoustic_msgs::msg::ProjectedSonarImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marine_acoustic_msgs::msg::ProjectedSonarImage>()
{
  return marine_acoustic_msgs::msg::builder::Init_ProjectedSonarImage_header();
}

}  // namespace marine_acoustic_msgs

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PROJECTED_SONAR_IMAGE__BUILDER_HPP_
