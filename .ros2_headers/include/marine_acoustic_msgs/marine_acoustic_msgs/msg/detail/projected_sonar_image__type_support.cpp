// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from marine_acoustic_msgs:msg/ProjectedSonarImage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "marine_acoustic_msgs/msg/detail/projected_sonar_image__functions.h"
#include "marine_acoustic_msgs/msg/detail/projected_sonar_image__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace marine_acoustic_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ProjectedSonarImage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) marine_acoustic_msgs::msg::ProjectedSonarImage(_init);
}

void ProjectedSonarImage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<marine_acoustic_msgs::msg::ProjectedSonarImage *>(message_memory);
  typed_message->~ProjectedSonarImage();
}

size_t size_function__ProjectedSonarImage__beam_directions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ProjectedSonarImage__beam_directions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void * get_function__ProjectedSonarImage__beam_directions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ProjectedSonarImage__beam_directions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(
    get_const_function__ProjectedSonarImage__beam_directions(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(untyped_value);
  value = item;
}

void assign_function__ProjectedSonarImage__beam_directions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(
    get_function__ProjectedSonarImage__beam_directions(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(untyped_value);
  item = value;
}

void resize_function__ProjectedSonarImage__beam_directions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ProjectedSonarImage__ranges(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ProjectedSonarImage__ranges(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ProjectedSonarImage__ranges(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ProjectedSonarImage__ranges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ProjectedSonarImage__ranges(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ProjectedSonarImage__ranges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ProjectedSonarImage__ranges(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ProjectedSonarImage__ranges(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ProjectedSonarImage_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::ProjectedSonarImage, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ping_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<marine_acoustic_msgs::msg::PingInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::ProjectedSonarImage, ping_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "beam_directions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::ProjectedSonarImage, beam_directions),  // bytes offset in struct
    nullptr,  // default value
    size_function__ProjectedSonarImage__beam_directions,  // size() function pointer
    get_const_function__ProjectedSonarImage__beam_directions,  // get_const(index) function pointer
    get_function__ProjectedSonarImage__beam_directions,  // get(index) function pointer
    fetch_function__ProjectedSonarImage__beam_directions,  // fetch(index, &value) function pointer
    assign_function__ProjectedSonarImage__beam_directions,  // assign(index, value) function pointer
    resize_function__ProjectedSonarImage__beam_directions  // resize(index) function pointer
  },
  {
    "ranges",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::ProjectedSonarImage, ranges),  // bytes offset in struct
    nullptr,  // default value
    size_function__ProjectedSonarImage__ranges,  // size() function pointer
    get_const_function__ProjectedSonarImage__ranges,  // get_const(index) function pointer
    get_function__ProjectedSonarImage__ranges,  // get(index) function pointer
    fetch_function__ProjectedSonarImage__ranges,  // fetch(index, &value) function pointer
    assign_function__ProjectedSonarImage__ranges,  // assign(index, value) function pointer
    resize_function__ProjectedSonarImage__ranges  // resize(index) function pointer
  },
  {
    "image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<marine_acoustic_msgs::msg::SonarImageData>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::ProjectedSonarImage, image),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ProjectedSonarImage_message_members = {
  "marine_acoustic_msgs::msg",  // message namespace
  "ProjectedSonarImage",  // message name
  5,  // number of fields
  sizeof(marine_acoustic_msgs::msg::ProjectedSonarImage),
  false,  // has_any_key_member_
  ProjectedSonarImage_message_member_array,  // message members
  ProjectedSonarImage_init_function,  // function to initialize message memory (memory has to be allocated)
  ProjectedSonarImage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ProjectedSonarImage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ProjectedSonarImage_message_members,
  get_message_typesupport_handle_function,
  &marine_acoustic_msgs__msg__ProjectedSonarImage__get_type_hash,
  &marine_acoustic_msgs__msg__ProjectedSonarImage__get_type_description,
  &marine_acoustic_msgs__msg__ProjectedSonarImage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace marine_acoustic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<marine_acoustic_msgs::msg::ProjectedSonarImage>()
{
  return &::marine_acoustic_msgs::msg::rosidl_typesupport_introspection_cpp::ProjectedSonarImage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, marine_acoustic_msgs, msg, ProjectedSonarImage)() {
  return &::marine_acoustic_msgs::msg::rosidl_typesupport_introspection_cpp::ProjectedSonarImage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
