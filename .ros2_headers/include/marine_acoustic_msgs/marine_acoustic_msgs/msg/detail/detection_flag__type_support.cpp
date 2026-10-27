// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from marine_acoustic_msgs:msg/DetectionFlag.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "marine_acoustic_msgs/msg/detail/detection_flag__functions.h"
#include "marine_acoustic_msgs/msg/detail/detection_flag__struct.hpp"
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

void DetectionFlag_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) marine_acoustic_msgs::msg::DetectionFlag(_init);
}

void DetectionFlag_fini_function(void * message_memory)
{
  auto typed_message = static_cast<marine_acoustic_msgs::msg::DetectionFlag *>(message_memory);
  typed_message->~DetectionFlag();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DetectionFlag_message_member_array[1] = {
  {
    "flag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs::msg::DetectionFlag, flag),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DetectionFlag_message_members = {
  "marine_acoustic_msgs::msg",  // message namespace
  "DetectionFlag",  // message name
  1,  // number of fields
  sizeof(marine_acoustic_msgs::msg::DetectionFlag),
  false,  // has_any_key_member_
  DetectionFlag_message_member_array,  // message members
  DetectionFlag_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectionFlag_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DetectionFlag_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectionFlag_message_members,
  get_message_typesupport_handle_function,
  &marine_acoustic_msgs__msg__DetectionFlag__get_type_hash,
  &marine_acoustic_msgs__msg__DetectionFlag__get_type_description,
  &marine_acoustic_msgs__msg__DetectionFlag__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace marine_acoustic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<marine_acoustic_msgs::msg::DetectionFlag>()
{
  return &::marine_acoustic_msgs::msg::rosidl_typesupport_introspection_cpp::DetectionFlag_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, marine_acoustic_msgs, msg, DetectionFlag)() {
  return &::marine_acoustic_msgs::msg::rosidl_typesupport_introspection_cpp::DetectionFlag_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
