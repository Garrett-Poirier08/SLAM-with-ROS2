// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pal_statistics_msgs:msg/Statistic.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pal_statistics_msgs/msg/detail/statistic__rosidl_typesupport_introspection_c.h"
#include "pal_statistics_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pal_statistics_msgs/msg/detail/statistic__functions.h"
#include "pal_statistics_msgs/msg/detail/statistic__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pal_statistics_msgs__msg__Statistic__rosidl_typesupport_introspection_c__Statistic_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pal_statistics_msgs__msg__Statistic__init(message_memory);
}

void pal_statistics_msgs__msg__Statistic__rosidl_typesupport_introspection_c__Statistic_fini_function(void * message_memory)
{
  pal_statistics_msgs__msg__Statistic__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pal_statistics_msgs__msg__Statistic__rosidl_typesupport_introspection_c__Statistic_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_statistics_msgs__msg__Statistic, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_statistics_msgs__msg__Statistic, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pal_statistics_msgs__msg__Statistic__rosidl_typesupport_introspection_c__Statistic_message_members = {
  "pal_statistics_msgs__msg",  // message namespace
  "Statistic",  // message name
  2,  // number of fields
  sizeof(pal_statistics_msgs__msg__Statistic),
  false,  // has_any_key_member_
  pal_statistics_msgs__msg__Statistic__rosidl_typesupport_introspection_c__Statistic_message_member_array,  // message members
  pal_statistics_msgs__msg__Statistic__rosidl_typesupport_introspection_c__Statistic_init_function,  // function to initialize message memory (memory has to be allocated)
  pal_statistics_msgs__msg__Statistic__rosidl_typesupport_introspection_c__Statistic_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pal_statistics_msgs__msg__Statistic__rosidl_typesupport_introspection_c__Statistic_message_type_support_handle = {
  0,
  &pal_statistics_msgs__msg__Statistic__rosidl_typesupport_introspection_c__Statistic_message_members,
  get_message_typesupport_handle_function,
  &pal_statistics_msgs__msg__Statistic__get_type_hash,
  &pal_statistics_msgs__msg__Statistic__get_type_description,
  &pal_statistics_msgs__msg__Statistic__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pal_statistics_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_statistics_msgs, msg, Statistic)() {
  if (!pal_statistics_msgs__msg__Statistic__rosidl_typesupport_introspection_c__Statistic_message_type_support_handle.typesupport_identifier) {
    pal_statistics_msgs__msg__Statistic__rosidl_typesupport_introspection_c__Statistic_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pal_statistics_msgs__msg__Statistic__rosidl_typesupport_introspection_c__Statistic_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
