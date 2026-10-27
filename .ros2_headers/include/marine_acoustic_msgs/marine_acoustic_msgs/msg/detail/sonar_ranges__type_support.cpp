// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from marine_acoustic_msgs:msg/SonarRanges.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "marine_acoustic_msgs/msg/detail/sonar_ranges__functions.h"
#include "marine_acoustic_msgs/msg/detail/sonar_ranges__struct.hpp"
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

void SonarRanges_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) marine_acoustic_msgs::msg::SonarRanges(_init);
}

void SonarRanges_fini_function(void * message_memory)
{
  auto typed_message = static_cast<marine_acoustic_msgs::msg::SonarRanges *>(message_memory);
  typed_message->~SonarRanges();
}

size_t size_function__SonarRanges__flags(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<marine_acoustic_msgs::msg::DetectionFlag> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SonarRanges__flags(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<marine_acoustic_msgs::msg::DetectionFlag> *>(untyped_member);
  return &member[index];
}

void * get_function__SonarRanges__flags(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<marine_acoustic_msgs::msg::DetectionFlag> *>(untyped_member);
  return &member[index];
}

void fetch_function__SonarRanges__flags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const marine_acoustic_msgs::msg::DetectionFlag *>(
    get_const_function__SonarRanges__flags(untyped_member, index));
  auto & value = *reinterpret_cast<marine_acoustic_msgs::msg::DetectionFlag *>(untyped_value);
  value = item;
}

void assign_function__SonarRanges__flags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<marine_acoustic_msgs::msg::DetectionFlag *>(
    get_function__SonarRanges__flags(untyped_member, index));
  const auto & value = *reinterpret_cast<const marine_acoustic_msgs::msg::DetectionFlag *>(untyped_value);
  item = value;
}

void resize_function__SonarRanges__flags(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<marine_acoustic_msgs::msg::DetectionFlag> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SonarRanges__transmit_delays(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SonarRanges__transmit_delays(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SonarRanges__transmit_delays(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SonarRanges__transmit_delays(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SonarRanges__transmit_delays(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SonarRanges__transmit_delays(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SonarRanges__transmit_delays(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SonarRanges__transmit_delays(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SonarRanges__intensities(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SonarRanges__intensities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SonarRanges__intensities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SonarRanges__intensities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SonarRanges__intensities(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SonarRanges__intensities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SonarRanges__intensities(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SonarRanges__intensities(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SonarRanges__beam_unit_vec(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SonarRanges__beam_unit_vec(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void * get_function__SonarRanges__beam_unit_vec(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SonarRanges__beam_unit_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(
    get_const_function__SonarRanges__beam_unit_vec(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(untyped_value);
  value = item;
}

void assign_function__SonarRanges__beam_unit_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(
    get_function__SonarRanges__beam_unit_vec(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(untyped_value);
  item = value;
}

void resize_function__SonarRanges__beam_unit_vec(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SonarRanges__ranges(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SonarRanges__ranges(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SonarRanges__ranges(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SonarRanges__ranges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SonarRanges__ranges(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SonarRanges__ranges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SonarRanges__ranges(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SonarRanges__ranges(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SonarRanges_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::SonarRanges, header),  // bytes offset in struct
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
    offsetof(marine_acoustic_msgs::msg::SonarRanges, ping_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "flags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<marine_acoustic_msgs::msg::DetectionFlag>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::SonarRanges, flags),  // bytes offset in struct
    nullptr,  // default value
    size_function__SonarRanges__flags,  // size() function pointer
    get_const_function__SonarRanges__flags,  // get_const(index) function pointer
    get_function__SonarRanges__flags,  // get(index) function pointer
    fetch_function__SonarRanges__flags,  // fetch(index, &value) function pointer
    assign_function__SonarRanges__flags,  // assign(index, value) function pointer
    resize_function__SonarRanges__flags  // resize(index) function pointer
  },
  {
    "transmit_delays",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::SonarRanges, transmit_delays),  // bytes offset in struct
    nullptr,  // default value
    size_function__SonarRanges__transmit_delays,  // size() function pointer
    get_const_function__SonarRanges__transmit_delays,  // get_const(index) function pointer
    get_function__SonarRanges__transmit_delays,  // get(index) function pointer
    fetch_function__SonarRanges__transmit_delays,  // fetch(index, &value) function pointer
    assign_function__SonarRanges__transmit_delays,  // assign(index, value) function pointer
    resize_function__SonarRanges__transmit_delays  // resize(index) function pointer
  },
  {
    "intensities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::SonarRanges, intensities),  // bytes offset in struct
    nullptr,  // default value
    size_function__SonarRanges__intensities,  // size() function pointer
    get_const_function__SonarRanges__intensities,  // get_const(index) function pointer
    get_function__SonarRanges__intensities,  // get(index) function pointer
    fetch_function__SonarRanges__intensities,  // fetch(index, &value) function pointer
    assign_function__SonarRanges__intensities,  // assign(index, value) function pointer
    resize_function__SonarRanges__intensities  // resize(index) function pointer
  },
  {
    "beam_unit_vec",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::SonarRanges, beam_unit_vec),  // bytes offset in struct
    nullptr,  // default value
    size_function__SonarRanges__beam_unit_vec,  // size() function pointer
    get_const_function__SonarRanges__beam_unit_vec,  // get_const(index) function pointer
    get_function__SonarRanges__beam_unit_vec,  // get(index) function pointer
    fetch_function__SonarRanges__beam_unit_vec,  // fetch(index, &value) function pointer
    assign_function__SonarRanges__beam_unit_vec,  // assign(index, value) function pointer
    resize_function__SonarRanges__beam_unit_vec  // resize(index) function pointer
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
    offsetof(marine_acoustic_msgs::msg::SonarRanges, ranges),  // bytes offset in struct
    nullptr,  // default value
    size_function__SonarRanges__ranges,  // size() function pointer
    get_const_function__SonarRanges__ranges,  // get_const(index) function pointer
    get_function__SonarRanges__ranges,  // get(index) function pointer
    fetch_function__SonarRanges__ranges,  // fetch(index, &value) function pointer
    assign_function__SonarRanges__ranges,  // assign(index, value) function pointer
    resize_function__SonarRanges__ranges  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SonarRanges_message_members = {
  "marine_acoustic_msgs::msg",  // message namespace
  "SonarRanges",  // message name
  7,  // number of fields
  sizeof(marine_acoustic_msgs::msg::SonarRanges),
  false,  // has_any_key_member_
  SonarRanges_message_member_array,  // message members
  SonarRanges_init_function,  // function to initialize message memory (memory has to be allocated)
  SonarRanges_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SonarRanges_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SonarRanges_message_members,
  get_message_typesupport_handle_function,
  &marine_acoustic_msgs__msg__SonarRanges__get_type_hash,
  &marine_acoustic_msgs__msg__SonarRanges__get_type_description,
  &marine_acoustic_msgs__msg__SonarRanges__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace marine_acoustic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<marine_acoustic_msgs::msg::SonarRanges>()
{
  return &::marine_acoustic_msgs::msg::rosidl_typesupport_introspection_cpp::SonarRanges_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, marine_acoustic_msgs, msg, SonarRanges)() {
  return &::marine_acoustic_msgs::msg::rosidl_typesupport_introspection_cpp::SonarRanges_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
