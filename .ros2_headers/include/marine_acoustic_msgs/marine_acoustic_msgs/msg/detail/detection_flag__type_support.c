// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marine_acoustic_msgs:msg/DetectionFlag.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marine_acoustic_msgs/msg/detail/detection_flag__rosidl_typesupport_introspection_c.h"
#include "marine_acoustic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marine_acoustic_msgs/msg/detail/detection_flag__functions.h"
#include "marine_acoustic_msgs/msg/detail/detection_flag__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void marine_acoustic_msgs__msg__DetectionFlag__rosidl_typesupport_introspection_c__DetectionFlag_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marine_acoustic_msgs__msg__DetectionFlag__init(message_memory);
}

void marine_acoustic_msgs__msg__DetectionFlag__rosidl_typesupport_introspection_c__DetectionFlag_fini_function(void * message_memory)
{
  marine_acoustic_msgs__msg__DetectionFlag__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember marine_acoustic_msgs__msg__DetectionFlag__rosidl_typesupport_introspection_c__DetectionFlag_message_member_array[1] = {
  {
    "flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__DetectionFlag, flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marine_acoustic_msgs__msg__DetectionFlag__rosidl_typesupport_introspection_c__DetectionFlag_message_members = {
  "marine_acoustic_msgs__msg",  // message namespace
  "DetectionFlag",  // message name
  1,  // number of fields
  sizeof(marine_acoustic_msgs__msg__DetectionFlag),
  false,  // has_any_key_member_
  marine_acoustic_msgs__msg__DetectionFlag__rosidl_typesupport_introspection_c__DetectionFlag_message_member_array,  // message members
  marine_acoustic_msgs__msg__DetectionFlag__rosidl_typesupport_introspection_c__DetectionFlag_init_function,  // function to initialize message memory (memory has to be allocated)
  marine_acoustic_msgs__msg__DetectionFlag__rosidl_typesupport_introspection_c__DetectionFlag_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marine_acoustic_msgs__msg__DetectionFlag__rosidl_typesupport_introspection_c__DetectionFlag_message_type_support_handle = {
  0,
  &marine_acoustic_msgs__msg__DetectionFlag__rosidl_typesupport_introspection_c__DetectionFlag_message_members,
  get_message_typesupport_handle_function,
  &marine_acoustic_msgs__msg__DetectionFlag__get_type_hash,
  &marine_acoustic_msgs__msg__DetectionFlag__get_type_description,
  &marine_acoustic_msgs__msg__DetectionFlag__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marine_acoustic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marine_acoustic_msgs, msg, DetectionFlag)() {
  if (!marine_acoustic_msgs__msg__DetectionFlag__rosidl_typesupport_introspection_c__DetectionFlag_message_type_support_handle.typesupport_identifier) {
    marine_acoustic_msgs__msg__DetectionFlag__rosidl_typesupport_introspection_c__DetectionFlag_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marine_acoustic_msgs__msg__DetectionFlag__rosidl_typesupport_introspection_c__DetectionFlag_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
