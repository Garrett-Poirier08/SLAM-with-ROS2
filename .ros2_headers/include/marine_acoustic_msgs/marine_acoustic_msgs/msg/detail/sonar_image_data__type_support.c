// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marine_acoustic_msgs:msg/SonarImageData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marine_acoustic_msgs/msg/detail/sonar_image_data__rosidl_typesupport_introspection_c.h"
#include "marine_acoustic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marine_acoustic_msgs/msg/detail/sonar_image_data__functions.h"
#include "marine_acoustic_msgs/msg/detail/sonar_image_data__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__SonarImageData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marine_acoustic_msgs__msg__SonarImageData__init(message_memory);
}

void marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__SonarImageData_fini_function(void * message_memory)
{
  marine_acoustic_msgs__msg__SonarImageData__fini(message_memory);
}

size_t marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__size_function__SonarImageData__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__get_const_function__SonarImageData__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__get_function__SonarImageData__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__fetch_function__SonarImageData__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__get_const_function__SonarImageData__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__assign_function__SonarImageData__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__get_function__SonarImageData__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__resize_function__SonarImageData__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__SonarImageData_message_member_array[4] = {
  {
    "is_bigendian",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__SonarImageData, is_bigendian),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dtype",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__SonarImageData, dtype),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "beam_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__SonarImageData, beam_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__SonarImageData, data),  // bytes offset in struct
    NULL,  // default value
    marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__size_function__SonarImageData__data,  // size() function pointer
    marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__get_const_function__SonarImageData__data,  // get_const(index) function pointer
    marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__get_function__SonarImageData__data,  // get(index) function pointer
    marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__fetch_function__SonarImageData__data,  // fetch(index, &value) function pointer
    marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__assign_function__SonarImageData__data,  // assign(index, value) function pointer
    marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__resize_function__SonarImageData__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__SonarImageData_message_members = {
  "marine_acoustic_msgs__msg",  // message namespace
  "SonarImageData",  // message name
  4,  // number of fields
  sizeof(marine_acoustic_msgs__msg__SonarImageData),
  false,  // has_any_key_member_
  marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__SonarImageData_message_member_array,  // message members
  marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__SonarImageData_init_function,  // function to initialize message memory (memory has to be allocated)
  marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__SonarImageData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__SonarImageData_message_type_support_handle = {
  0,
  &marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__SonarImageData_message_members,
  get_message_typesupport_handle_function,
  &marine_acoustic_msgs__msg__SonarImageData__get_type_hash,
  &marine_acoustic_msgs__msg__SonarImageData__get_type_description,
  &marine_acoustic_msgs__msg__SonarImageData__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marine_acoustic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marine_acoustic_msgs, msg, SonarImageData)() {
  if (!marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__SonarImageData_message_type_support_handle.typesupport_identifier) {
    marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__SonarImageData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marine_acoustic_msgs__msg__SonarImageData__rosidl_typesupport_introspection_c__SonarImageData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
