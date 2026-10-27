// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pal_statistics_msgs:msg/Statistics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pal_statistics_msgs/msg/detail/statistics__rosidl_typesupport_introspection_c.h"
#include "pal_statistics_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pal_statistics_msgs/msg/detail/statistics__functions.h"
#include "pal_statistics_msgs/msg/detail/statistics__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `statistics`
#include "pal_statistics_msgs/msg/statistic.h"
// Member `statistics`
#include "pal_statistics_msgs/msg/detail/statistic__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__Statistics_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pal_statistics_msgs__msg__Statistics__init(message_memory);
}

void pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__Statistics_fini_function(void * message_memory)
{
  pal_statistics_msgs__msg__Statistics__fini(message_memory);
}

size_t pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__size_function__Statistics__statistics(
  const void * untyped_member)
{
  const pal_statistics_msgs__msg__Statistic__Sequence * member =
    (const pal_statistics_msgs__msg__Statistic__Sequence *)(untyped_member);
  return member->size;
}

const void * pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__get_const_function__Statistics__statistics(
  const void * untyped_member, size_t index)
{
  const pal_statistics_msgs__msg__Statistic__Sequence * member =
    (const pal_statistics_msgs__msg__Statistic__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__get_function__Statistics__statistics(
  void * untyped_member, size_t index)
{
  pal_statistics_msgs__msg__Statistic__Sequence * member =
    (pal_statistics_msgs__msg__Statistic__Sequence *)(untyped_member);
  return &member->data[index];
}

void pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__fetch_function__Statistics__statistics(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pal_statistics_msgs__msg__Statistic * item =
    ((const pal_statistics_msgs__msg__Statistic *)
    pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__get_const_function__Statistics__statistics(untyped_member, index));
  pal_statistics_msgs__msg__Statistic * value =
    (pal_statistics_msgs__msg__Statistic *)(untyped_value);
  *value = *item;
}

void pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__assign_function__Statistics__statistics(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pal_statistics_msgs__msg__Statistic * item =
    ((pal_statistics_msgs__msg__Statistic *)
    pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__get_function__Statistics__statistics(untyped_member, index));
  const pal_statistics_msgs__msg__Statistic * value =
    (const pal_statistics_msgs__msg__Statistic *)(untyped_value);
  *item = *value;
}

bool pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__resize_function__Statistics__statistics(
  void * untyped_member, size_t size)
{
  pal_statistics_msgs__msg__Statistic__Sequence * member =
    (pal_statistics_msgs__msg__Statistic__Sequence *)(untyped_member);
  pal_statistics_msgs__msg__Statistic__Sequence__fini(member);
  return pal_statistics_msgs__msg__Statistic__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__Statistics_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_statistics_msgs__msg__Statistics, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "statistics",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_statistics_msgs__msg__Statistics, statistics),  // bytes offset in struct
    NULL,  // default value
    pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__size_function__Statistics__statistics,  // size() function pointer
    pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__get_const_function__Statistics__statistics,  // get_const(index) function pointer
    pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__get_function__Statistics__statistics,  // get(index) function pointer
    pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__fetch_function__Statistics__statistics,  // fetch(index, &value) function pointer
    pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__assign_function__Statistics__statistics,  // assign(index, value) function pointer
    pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__resize_function__Statistics__statistics  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__Statistics_message_members = {
  "pal_statistics_msgs__msg",  // message namespace
  "Statistics",  // message name
  2,  // number of fields
  sizeof(pal_statistics_msgs__msg__Statistics),
  false,  // has_any_key_member_
  pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__Statistics_message_member_array,  // message members
  pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__Statistics_init_function,  // function to initialize message memory (memory has to be allocated)
  pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__Statistics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__Statistics_message_type_support_handle = {
  0,
  &pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__Statistics_message_members,
  get_message_typesupport_handle_function,
  &pal_statistics_msgs__msg__Statistics__get_type_hash,
  &pal_statistics_msgs__msg__Statistics__get_type_description,
  &pal_statistics_msgs__msg__Statistics__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pal_statistics_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_statistics_msgs, msg, Statistics)() {
  pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__Statistics_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__Statistics_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_statistics_msgs, msg, Statistic)();
  if (!pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__Statistics_message_type_support_handle.typesupport_identifier) {
    pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__Statistics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pal_statistics_msgs__msg__Statistics__rosidl_typesupport_introspection_c__Statistics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
