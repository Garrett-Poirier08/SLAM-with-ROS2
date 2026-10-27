// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marine_acoustic_msgs:msg/ProjectedSonarImage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marine_acoustic_msgs/msg/detail/projected_sonar_image__rosidl_typesupport_introspection_c.h"
#include "marine_acoustic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marine_acoustic_msgs/msg/detail/projected_sonar_image__functions.h"
#include "marine_acoustic_msgs/msg/detail/projected_sonar_image__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `ping_info`
#include "marine_acoustic_msgs/msg/ping_info.h"
// Member `ping_info`
#include "marine_acoustic_msgs/msg/detail/ping_info__rosidl_typesupport_introspection_c.h"
// Member `beam_directions`
#include "geometry_msgs/msg/vector3.h"
// Member `beam_directions`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `ranges`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `image`
#include "marine_acoustic_msgs/msg/sonar_image_data.h"
// Member `image`
#include "marine_acoustic_msgs/msg/detail/sonar_image_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__ProjectedSonarImage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marine_acoustic_msgs__msg__ProjectedSonarImage__init(message_memory);
}

void marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__ProjectedSonarImage_fini_function(void * message_memory)
{
  marine_acoustic_msgs__msg__ProjectedSonarImage__fini(message_memory);
}

size_t marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__size_function__ProjectedSonarImage__beam_directions(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__get_const_function__ProjectedSonarImage__beam_directions(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__get_function__ProjectedSonarImage__beam_directions(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__fetch_function__ProjectedSonarImage__beam_directions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__get_const_function__ProjectedSonarImage__beam_directions(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__assign_function__ProjectedSonarImage__beam_directions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__get_function__ProjectedSonarImage__beam_directions(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__resize_function__ProjectedSonarImage__beam_directions(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

size_t marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__size_function__ProjectedSonarImage__ranges(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__get_const_function__ProjectedSonarImage__ranges(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__get_function__ProjectedSonarImage__ranges(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__fetch_function__ProjectedSonarImage__ranges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__get_const_function__ProjectedSonarImage__ranges(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__assign_function__ProjectedSonarImage__ranges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__get_function__ProjectedSonarImage__ranges(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__resize_function__ProjectedSonarImage__ranges(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__ProjectedSonarImage_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__ProjectedSonarImage, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ping_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__ProjectedSonarImage, ping_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "beam_directions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__ProjectedSonarImage, beam_directions),  // bytes offset in struct
    NULL,  // default value
    marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__size_function__ProjectedSonarImage__beam_directions,  // size() function pointer
    marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__get_const_function__ProjectedSonarImage__beam_directions,  // get_const(index) function pointer
    marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__get_function__ProjectedSonarImage__beam_directions,  // get(index) function pointer
    marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__fetch_function__ProjectedSonarImage__beam_directions,  // fetch(index, &value) function pointer
    marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__assign_function__ProjectedSonarImage__beam_directions,  // assign(index, value) function pointer
    marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__resize_function__ProjectedSonarImage__beam_directions  // resize(index) function pointer
  },
  {
    "ranges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__ProjectedSonarImage, ranges),  // bytes offset in struct
    NULL,  // default value
    marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__size_function__ProjectedSonarImage__ranges,  // size() function pointer
    marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__get_const_function__ProjectedSonarImage__ranges,  // get_const(index) function pointer
    marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__get_function__ProjectedSonarImage__ranges,  // get(index) function pointer
    marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__fetch_function__ProjectedSonarImage__ranges,  // fetch(index, &value) function pointer
    marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__assign_function__ProjectedSonarImage__ranges,  // assign(index, value) function pointer
    marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__resize_function__ProjectedSonarImage__ranges  // resize(index) function pointer
  },
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_acoustic_msgs__msg__ProjectedSonarImage, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__ProjectedSonarImage_message_members = {
  "marine_acoustic_msgs__msg",  // message namespace
  "ProjectedSonarImage",  // message name
  5,  // number of fields
  sizeof(marine_acoustic_msgs__msg__ProjectedSonarImage),
  false,  // has_any_key_member_
  marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__ProjectedSonarImage_message_member_array,  // message members
  marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__ProjectedSonarImage_init_function,  // function to initialize message memory (memory has to be allocated)
  marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__ProjectedSonarImage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__ProjectedSonarImage_message_type_support_handle = {
  0,
  &marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__ProjectedSonarImage_message_members,
  get_message_typesupport_handle_function,
  &marine_acoustic_msgs__msg__ProjectedSonarImage__get_type_hash,
  &marine_acoustic_msgs__msg__ProjectedSonarImage__get_type_description,
  &marine_acoustic_msgs__msg__ProjectedSonarImage__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marine_acoustic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marine_acoustic_msgs, msg, ProjectedSonarImage)() {
  marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__ProjectedSonarImage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__ProjectedSonarImage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marine_acoustic_msgs, msg, PingInfo)();
  marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__ProjectedSonarImage_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__ProjectedSonarImage_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marine_acoustic_msgs, msg, SonarImageData)();
  if (!marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__ProjectedSonarImage_message_type_support_handle.typesupport_identifier) {
    marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__ProjectedSonarImage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marine_acoustic_msgs__msg__ProjectedSonarImage__rosidl_typesupport_introspection_c__ProjectedSonarImage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
