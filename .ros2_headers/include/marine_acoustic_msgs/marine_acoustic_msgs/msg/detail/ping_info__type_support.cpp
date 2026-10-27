// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from marine_acoustic_msgs:msg/PingInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "marine_acoustic_msgs/msg/detail/ping_info__functions.h"
#include "marine_acoustic_msgs/msg/detail/ping_info__struct.hpp"
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

void PingInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) marine_acoustic_msgs::msg::PingInfo(_init);
}

void PingInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<marine_acoustic_msgs::msg::PingInfo *>(message_memory);
  typed_message->~PingInfo();
}

size_t size_function__PingInfo__tx_beamwidths(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PingInfo__tx_beamwidths(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__PingInfo__tx_beamwidths(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__PingInfo__tx_beamwidths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__PingInfo__tx_beamwidths(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__PingInfo__tx_beamwidths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__PingInfo__tx_beamwidths(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__PingInfo__tx_beamwidths(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PingInfo__rx_beamwidths(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PingInfo__rx_beamwidths(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__PingInfo__rx_beamwidths(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__PingInfo__rx_beamwidths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__PingInfo__rx_beamwidths(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__PingInfo__rx_beamwidths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__PingInfo__rx_beamwidths(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__PingInfo__rx_beamwidths(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PingInfo_message_member_array[4] = {
  {
    "frequency",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::PingInfo, frequency),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sound_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::PingInfo, sound_speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tx_beamwidths",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::PingInfo, tx_beamwidths),  // bytes offset in struct
    nullptr,  // default value
    size_function__PingInfo__tx_beamwidths,  // size() function pointer
    get_const_function__PingInfo__tx_beamwidths,  // get_const(index) function pointer
    get_function__PingInfo__tx_beamwidths,  // get(index) function pointer
    fetch_function__PingInfo__tx_beamwidths,  // fetch(index, &value) function pointer
    assign_function__PingInfo__tx_beamwidths,  // assign(index, value) function pointer
    resize_function__PingInfo__tx_beamwidths  // resize(index) function pointer
  },
  {
    "rx_beamwidths",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::PingInfo, rx_beamwidths),  // bytes offset in struct
    nullptr,  // default value
    size_function__PingInfo__rx_beamwidths,  // size() function pointer
    get_const_function__PingInfo__rx_beamwidths,  // get_const(index) function pointer
    get_function__PingInfo__rx_beamwidths,  // get(index) function pointer
    fetch_function__PingInfo__rx_beamwidths,  // fetch(index, &value) function pointer
    assign_function__PingInfo__rx_beamwidths,  // assign(index, value) function pointer
    resize_function__PingInfo__rx_beamwidths  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PingInfo_message_members = {
  "marine_acoustic_msgs::msg",  // message namespace
  "PingInfo",  // message name
  4,  // number of fields
  sizeof(marine_acoustic_msgs::msg::PingInfo),
  false,  // has_any_key_member_
  PingInfo_message_member_array,  // message members
  PingInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  PingInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PingInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PingInfo_message_members,
  get_message_typesupport_handle_function,
  &marine_acoustic_msgs__msg__PingInfo__get_type_hash,
  &marine_acoustic_msgs__msg__PingInfo__get_type_description,
  &marine_acoustic_msgs__msg__PingInfo__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace marine_acoustic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<marine_acoustic_msgs::msg::PingInfo>()
{
  return &::marine_acoustic_msgs::msg::rosidl_typesupport_introspection_cpp::PingInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, marine_acoustic_msgs, msg, PingInfo)() {
  return &::marine_acoustic_msgs::msg::rosidl_typesupport_introspection_cpp::PingInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
