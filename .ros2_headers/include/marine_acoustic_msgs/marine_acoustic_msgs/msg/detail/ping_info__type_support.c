// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marine_acoustic_msgs:msg/PingInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marine_acoustic_msgs/msg/detail/ping_info__rosidl_typesupport_introspection_c.h"
#include "marine_acoustic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marine_acoustic_msgs/msg/detail/ping_info__functions.h"
#include "marine_acoustic_msgs/msg/detail/ping_info__struct.h"


// Include directives for member types
// Member `tx_beamwidths`
// Member `rx_beamwidths`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__PingInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marine_acoustic_msgs__msg__PingInfo__init(message_memory);
}

void marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__PingInfo_fini_function(void * message_memory)
{
  marine_acoustic_msgs__msg__PingInfo__fini(message_memory);
}

size_t marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__size_function__PingInfo__tx_beamwidths(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__get_const_function__PingInfo__tx_beamwidths(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__get_function__PingInfo__tx_beamwidths(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__fetch_function__PingInfo__tx_beamwidths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__get_const_function__PingInfo__tx_beamwidths(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__assign_function__PingInfo__tx_beamwidths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__get_function__PingInfo__tx_beamwidths(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__resize_function__PingInfo__tx_beamwidths(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__size_function__PingInfo__rx_beamwidths(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__get_const_function__PingInfo__rx_beamwidths(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__get_function__PingInfo__rx_beamwidths(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__fetch_function__PingInfo__rx_beamwidths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__get_const_function__PingInfo__rx_beamwidths(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__assign_function__PingInfo__rx_beamwidths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__get_function__PingInfo__rx_beamwidths(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__resize_function__PingInfo__rx_beamwidths(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__PingInfo_message_member_array[4] = {
  {
    "frequency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__PingInfo, frequency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sound_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__PingInfo, sound_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tx_beamwidths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__PingInfo, tx_beamwidths),  // bytes offset in struct
    NULL,  // default value
    marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__size_function__PingInfo__tx_beamwidths,  // size() function pointer
    marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__get_const_function__PingInfo__tx_beamwidths,  // get_const(index) function pointer
    marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__get_function__PingInfo__tx_beamwidths,  // get(index) function pointer
    marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__fetch_function__PingInfo__tx_beamwidths,  // fetch(index, &value) function pointer
    marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__assign_function__PingInfo__tx_beamwidths,  // assign(index, value) function pointer
    marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__resize_function__PingInfo__tx_beamwidths  // resize(index) function pointer
  },
  {
    "rx_beamwidths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__PingInfo, rx_beamwidths),  // bytes offset in struct
    NULL,  // default value
    marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__size_function__PingInfo__rx_beamwidths,  // size() function pointer
    marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__get_const_function__PingInfo__rx_beamwidths,  // get_const(index) function pointer
    marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__get_function__PingInfo__rx_beamwidths,  // get(index) function pointer
    marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__fetch_function__PingInfo__rx_beamwidths,  // fetch(index, &value) function pointer
    marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__assign_function__PingInfo__rx_beamwidths,  // assign(index, value) function pointer
    marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__resize_function__PingInfo__rx_beamwidths  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__PingInfo_message_members = {
  "marine_acoustic_msgs__msg",  // message namespace
  "PingInfo",  // message name
  4,  // number of fields
  sizeof(marine_acoustic_msgs__msg__PingInfo),
  false,  // has_any_key_member_
  marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__PingInfo_message_member_array,  // message members
  marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__PingInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__PingInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__PingInfo_message_type_support_handle = {
  0,
  &marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__PingInfo_message_members,
  get_message_typesupport_handle_function,
  &marine_acoustic_msgs__msg__PingInfo__get_type_hash,
  &marine_acoustic_msgs__msg__PingInfo__get_type_description,
  &marine_acoustic_msgs__msg__PingInfo__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marine_acoustic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marine_acoustic_msgs, msg, PingInfo)() {
  if (!marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__PingInfo_message_type_support_handle.typesupport_identifier) {
    marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__PingInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marine_acoustic_msgs__msg__PingInfo__rosidl_typesupport_introspection_c__PingInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
