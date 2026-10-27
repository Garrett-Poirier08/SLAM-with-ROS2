// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pal_statistics_msgs:msg/StatisticsValues.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pal_statistics_msgs/msg/detail/statistics_values__rosidl_typesupport_introspection_c.h"
#include "pal_statistics_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pal_statistics_msgs/msg/detail/statistics_values__functions.h"
#include "pal_statistics_msgs/msg/detail/statistics_values__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__StatisticsValues_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pal_statistics_msgs__msg__StatisticsValues__init(message_memory);
}

void pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__StatisticsValues_fini_function(void * message_memory)
{
  pal_statistics_msgs__msg__StatisticsValues__fini(message_memory);
}

size_t pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__size_function__StatisticsValues__values(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__get_const_function__StatisticsValues__values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__get_function__StatisticsValues__values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__fetch_function__StatisticsValues__values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__get_const_function__StatisticsValues__values(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__assign_function__StatisticsValues__values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__get_function__StatisticsValues__values(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__resize_function__StatisticsValues__values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__StatisticsValues_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_statistics_msgs__msg__StatisticsValues, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_statistics_msgs__msg__StatisticsValues, values),  // bytes offset in struct
    NULL,  // default value
    pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__size_function__StatisticsValues__values,  // size() function pointer
    pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__get_const_function__StatisticsValues__values,  // get_const(index) function pointer
    pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__get_function__StatisticsValues__values,  // get(index) function pointer
    pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__fetch_function__StatisticsValues__values,  // fetch(index, &value) function pointer
    pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__assign_function__StatisticsValues__values,  // assign(index, value) function pointer
    pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__resize_function__StatisticsValues__values  // resize(index) function pointer
  },
  {
    "names_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pal_statistics_msgs__msg__StatisticsValues, names_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__StatisticsValues_message_members = {
  "pal_statistics_msgs__msg",  // message namespace
  "StatisticsValues",  // message name
  3,  // number of fields
  sizeof(pal_statistics_msgs__msg__StatisticsValues),
  false,  // has_any_key_member_
  pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__StatisticsValues_message_member_array,  // message members
  pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__StatisticsValues_init_function,  // function to initialize message memory (memory has to be allocated)
  pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__StatisticsValues_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__StatisticsValues_message_type_support_handle = {
  0,
  &pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__StatisticsValues_message_members,
  get_message_typesupport_handle_function,
  &pal_statistics_msgs__msg__StatisticsValues__get_type_hash,
  &pal_statistics_msgs__msg__StatisticsValues__get_type_description,
  &pal_statistics_msgs__msg__StatisticsValues__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pal_statistics_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pal_statistics_msgs, msg, StatisticsValues)() {
  pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__StatisticsValues_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__StatisticsValues_message_type_support_handle.typesupport_identifier) {
    pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__StatisticsValues_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pal_statistics_msgs__msg__StatisticsValues__rosidl_typesupport_introspection_c__StatisticsValues_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
