// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from simulation_interfaces:srv/SpawnEntities.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "simulation_interfaces/srv/detail/spawn_entities__rosidl_typesupport_introspection_c.h"
#include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "simulation_interfaces/srv/detail/spawn_entities__functions.h"
#include "simulation_interfaces/srv/detail/spawn_entities__struct.h"


// Include directives for member types
// Member `spawn_requests`
#include "simulation_interfaces/msg/spawn_entity.h"
// Member `spawn_requests`
#include "simulation_interfaces/msg/detail/spawn_entity__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulation_interfaces__srv__SpawnEntities_Request__init(message_memory);
}

void simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_fini_function(void * message_memory)
{
  simulation_interfaces__srv__SpawnEntities_Request__fini(message_memory);
}

size_t simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__size_function__SpawnEntities_Request__spawn_requests(
  const void * untyped_member)
{
  const simulation_interfaces__msg__SpawnEntity__Sequence * member =
    (const simulation_interfaces__msg__SpawnEntity__Sequence *)(untyped_member);
  return member->size;
}

const void * simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Request__spawn_requests(
  const void * untyped_member, size_t index)
{
  const simulation_interfaces__msg__SpawnEntity__Sequence * member =
    (const simulation_interfaces__msg__SpawnEntity__Sequence *)(untyped_member);
  return &member->data[index];
}

void * simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Request__spawn_requests(
  void * untyped_member, size_t index)
{
  simulation_interfaces__msg__SpawnEntity__Sequence * member =
    (simulation_interfaces__msg__SpawnEntity__Sequence *)(untyped_member);
  return &member->data[index];
}

void simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__fetch_function__SpawnEntities_Request__spawn_requests(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const simulation_interfaces__msg__SpawnEntity * item =
    ((const simulation_interfaces__msg__SpawnEntity *)
    simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Request__spawn_requests(untyped_member, index));
  simulation_interfaces__msg__SpawnEntity * value =
    (simulation_interfaces__msg__SpawnEntity *)(untyped_value);
  *value = *item;
}

void simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__assign_function__SpawnEntities_Request__spawn_requests(
  void * untyped_member, size_t index, const void * untyped_value)
{
  simulation_interfaces__msg__SpawnEntity * item =
    ((simulation_interfaces__msg__SpawnEntity *)
    simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Request__spawn_requests(untyped_member, index));
  const simulation_interfaces__msg__SpawnEntity * value =
    (const simulation_interfaces__msg__SpawnEntity *)(untyped_value);
  *item = *value;
}

bool simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__resize_function__SpawnEntities_Request__spawn_requests(
  void * untyped_member, size_t size)
{
  simulation_interfaces__msg__SpawnEntity__Sequence * member =
    (simulation_interfaces__msg__SpawnEntity__Sequence *)(untyped_member);
  simulation_interfaces__msg__SpawnEntity__Sequence__fini(member);
  return simulation_interfaces__msg__SpawnEntity__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_member_array[1] = {
  {
    "spawn_requests",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__SpawnEntities_Request, spawn_requests),  // bytes offset in struct
    NULL,  // default value
    simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__size_function__SpawnEntities_Request__spawn_requests,  // size() function pointer
    simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Request__spawn_requests,  // get_const(index) function pointer
    simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Request__spawn_requests,  // get(index) function pointer
    simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__fetch_function__SpawnEntities_Request__spawn_requests,  // fetch(index, &value) function pointer
    simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__assign_function__SpawnEntities_Request__spawn_requests,  // assign(index, value) function pointer
    simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__resize_function__SpawnEntities_Request__spawn_requests  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_members = {
  "simulation_interfaces__srv",  // message namespace
  "SpawnEntities_Request",  // message name
  1,  // number of fields
  sizeof(simulation_interfaces__srv__SpawnEntities_Request),
  false,  // has_any_key_member_
  simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_member_array,  // message members
  simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_type_support_handle = {
  0,
  &simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_members,
  get_message_typesupport_handle_function,
  &simulation_interfaces__srv__SpawnEntities_Request__get_type_hash,
  &simulation_interfaces__srv__SpawnEntities_Request__get_type_description,
  &simulation_interfaces__srv__SpawnEntities_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, SpawnEntities_Request)() {
  simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, SpawnEntity)();
  if (!simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_type_support_handle.typesupport_identifier) {
    simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "simulation_interfaces/srv/detail/spawn_entities__rosidl_typesupport_introspection_c.h"
// already included above
// #include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "simulation_interfaces/srv/detail/spawn_entities__functions.h"
// already included above
// #include "simulation_interfaces/srv/detail/spawn_entities__struct.h"


// Include directives for member types
// Member `result`
#include "simulation_interfaces/msg/result.h"
// Member `result`
#include "simulation_interfaces/msg/detail/result__rosidl_typesupport_introspection_c.h"
// Member `results`
#include "simulation_interfaces/msg/spawn_result.h"
// Member `results`
#include "simulation_interfaces/msg/detail/spawn_result__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulation_interfaces__srv__SpawnEntities_Response__init(message_memory);
}

void simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_fini_function(void * message_memory)
{
  simulation_interfaces__srv__SpawnEntities_Response__fini(message_memory);
}

size_t simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__size_function__SpawnEntities_Response__results(
  const void * untyped_member)
{
  const simulation_interfaces__msg__SpawnResult__Sequence * member =
    (const simulation_interfaces__msg__SpawnResult__Sequence *)(untyped_member);
  return member->size;
}

const void * simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Response__results(
  const void * untyped_member, size_t index)
{
  const simulation_interfaces__msg__SpawnResult__Sequence * member =
    (const simulation_interfaces__msg__SpawnResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void * simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Response__results(
  void * untyped_member, size_t index)
{
  simulation_interfaces__msg__SpawnResult__Sequence * member =
    (simulation_interfaces__msg__SpawnResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__fetch_function__SpawnEntities_Response__results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const simulation_interfaces__msg__SpawnResult * item =
    ((const simulation_interfaces__msg__SpawnResult *)
    simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Response__results(untyped_member, index));
  simulation_interfaces__msg__SpawnResult * value =
    (simulation_interfaces__msg__SpawnResult *)(untyped_value);
  *value = *item;
}

void simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__assign_function__SpawnEntities_Response__results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  simulation_interfaces__msg__SpawnResult * item =
    ((simulation_interfaces__msg__SpawnResult *)
    simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Response__results(untyped_member, index));
  const simulation_interfaces__msg__SpawnResult * value =
    (const simulation_interfaces__msg__SpawnResult *)(untyped_value);
  *item = *value;
}

bool simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__resize_function__SpawnEntities_Response__results(
  void * untyped_member, size_t size)
{
  simulation_interfaces__msg__SpawnResult__Sequence * member =
    (simulation_interfaces__msg__SpawnResult__Sequence *)(untyped_member);
  simulation_interfaces__msg__SpawnResult__Sequence__fini(member);
  return simulation_interfaces__msg__SpawnResult__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_member_array[2] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__SpawnEntities_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "results",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__SpawnEntities_Response, results),  // bytes offset in struct
    NULL,  // default value
    simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__size_function__SpawnEntities_Response__results,  // size() function pointer
    simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Response__results,  // get_const(index) function pointer
    simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Response__results,  // get(index) function pointer
    simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__fetch_function__SpawnEntities_Response__results,  // fetch(index, &value) function pointer
    simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__assign_function__SpawnEntities_Response__results,  // assign(index, value) function pointer
    simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__resize_function__SpawnEntities_Response__results  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_members = {
  "simulation_interfaces__srv",  // message namespace
  "SpawnEntities_Response",  // message name
  2,  // number of fields
  sizeof(simulation_interfaces__srv__SpawnEntities_Response),
  false,  // has_any_key_member_
  simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_member_array,  // message members
  simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_type_support_handle = {
  0,
  &simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_members,
  get_message_typesupport_handle_function,
  &simulation_interfaces__srv__SpawnEntities_Response__get_type_hash,
  &simulation_interfaces__srv__SpawnEntities_Response__get_type_description,
  &simulation_interfaces__srv__SpawnEntities_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, SpawnEntities_Response)() {
  simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, Result)();
  simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, SpawnResult)();
  if (!simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_type_support_handle.typesupport_identifier) {
    simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "simulation_interfaces/srv/detail/spawn_entities__rosidl_typesupport_introspection_c.h"
// already included above
// #include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "simulation_interfaces/srv/detail/spawn_entities__functions.h"
// already included above
// #include "simulation_interfaces/srv/detail/spawn_entities__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "simulation_interfaces/srv/spawn_entities.h"
// Member `request`
// Member `response`
// already included above
// #include "simulation_interfaces/srv/detail/spawn_entities__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__SpawnEntities_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simulation_interfaces__srv__SpawnEntities_Event__init(message_memory);
}

void simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__SpawnEntities_Event_fini_function(void * message_memory)
{
  simulation_interfaces__srv__SpawnEntities_Event__fini(message_memory);
}

size_t simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__size_function__SpawnEntities_Event__request(
  const void * untyped_member)
{
  const simulation_interfaces__srv__SpawnEntities_Request__Sequence * member =
    (const simulation_interfaces__srv__SpawnEntities_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Event__request(
  const void * untyped_member, size_t index)
{
  const simulation_interfaces__srv__SpawnEntities_Request__Sequence * member =
    (const simulation_interfaces__srv__SpawnEntities_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Event__request(
  void * untyped_member, size_t index)
{
  simulation_interfaces__srv__SpawnEntities_Request__Sequence * member =
    (simulation_interfaces__srv__SpawnEntities_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__fetch_function__SpawnEntities_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const simulation_interfaces__srv__SpawnEntities_Request * item =
    ((const simulation_interfaces__srv__SpawnEntities_Request *)
    simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Event__request(untyped_member, index));
  simulation_interfaces__srv__SpawnEntities_Request * value =
    (simulation_interfaces__srv__SpawnEntities_Request *)(untyped_value);
  *value = *item;
}

void simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__assign_function__SpawnEntities_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  simulation_interfaces__srv__SpawnEntities_Request * item =
    ((simulation_interfaces__srv__SpawnEntities_Request *)
    simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Event__request(untyped_member, index));
  const simulation_interfaces__srv__SpawnEntities_Request * value =
    (const simulation_interfaces__srv__SpawnEntities_Request *)(untyped_value);
  *item = *value;
}

bool simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__resize_function__SpawnEntities_Event__request(
  void * untyped_member, size_t size)
{
  simulation_interfaces__srv__SpawnEntities_Request__Sequence * member =
    (simulation_interfaces__srv__SpawnEntities_Request__Sequence *)(untyped_member);
  simulation_interfaces__srv__SpawnEntities_Request__Sequence__fini(member);
  return simulation_interfaces__srv__SpawnEntities_Request__Sequence__init(member, size);
}

size_t simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__size_function__SpawnEntities_Event__response(
  const void * untyped_member)
{
  const simulation_interfaces__srv__SpawnEntities_Response__Sequence * member =
    (const simulation_interfaces__srv__SpawnEntities_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Event__response(
  const void * untyped_member, size_t index)
{
  const simulation_interfaces__srv__SpawnEntities_Response__Sequence * member =
    (const simulation_interfaces__srv__SpawnEntities_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Event__response(
  void * untyped_member, size_t index)
{
  simulation_interfaces__srv__SpawnEntities_Response__Sequence * member =
    (simulation_interfaces__srv__SpawnEntities_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__fetch_function__SpawnEntities_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const simulation_interfaces__srv__SpawnEntities_Response * item =
    ((const simulation_interfaces__srv__SpawnEntities_Response *)
    simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Event__response(untyped_member, index));
  simulation_interfaces__srv__SpawnEntities_Response * value =
    (simulation_interfaces__srv__SpawnEntities_Response *)(untyped_value);
  *value = *item;
}

void simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__assign_function__SpawnEntities_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  simulation_interfaces__srv__SpawnEntities_Response * item =
    ((simulation_interfaces__srv__SpawnEntities_Response *)
    simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Event__response(untyped_member, index));
  const simulation_interfaces__srv__SpawnEntities_Response * value =
    (const simulation_interfaces__srv__SpawnEntities_Response *)(untyped_value);
  *item = *value;
}

bool simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__resize_function__SpawnEntities_Event__response(
  void * untyped_member, size_t size)
{
  simulation_interfaces__srv__SpawnEntities_Response__Sequence * member =
    (simulation_interfaces__srv__SpawnEntities_Response__Sequence *)(untyped_member);
  simulation_interfaces__srv__SpawnEntities_Response__Sequence__fini(member);
  return simulation_interfaces__srv__SpawnEntities_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__SpawnEntities_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simulation_interfaces__srv__SpawnEntities_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(simulation_interfaces__srv__SpawnEntities_Event, request),  // bytes offset in struct
    NULL,  // default value
    simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__size_function__SpawnEntities_Event__request,  // size() function pointer
    simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Event__request,  // get_const(index) function pointer
    simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Event__request,  // get(index) function pointer
    simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__fetch_function__SpawnEntities_Event__request,  // fetch(index, &value) function pointer
    simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__assign_function__SpawnEntities_Event__request,  // assign(index, value) function pointer
    simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__resize_function__SpawnEntities_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(simulation_interfaces__srv__SpawnEntities_Event, response),  // bytes offset in struct
    NULL,  // default value
    simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__size_function__SpawnEntities_Event__response,  // size() function pointer
    simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__get_const_function__SpawnEntities_Event__response,  // get_const(index) function pointer
    simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__get_function__SpawnEntities_Event__response,  // get(index) function pointer
    simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__fetch_function__SpawnEntities_Event__response,  // fetch(index, &value) function pointer
    simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__assign_function__SpawnEntities_Event__response,  // assign(index, value) function pointer
    simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__resize_function__SpawnEntities_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__SpawnEntities_Event_message_members = {
  "simulation_interfaces__srv",  // message namespace
  "SpawnEntities_Event",  // message name
  3,  // number of fields
  sizeof(simulation_interfaces__srv__SpawnEntities_Event),
  false,  // has_any_key_member_
  simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__SpawnEntities_Event_message_member_array,  // message members
  simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__SpawnEntities_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__SpawnEntities_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__SpawnEntities_Event_message_type_support_handle = {
  0,
  &simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__SpawnEntities_Event_message_members,
  get_message_typesupport_handle_function,
  &simulation_interfaces__srv__SpawnEntities_Event__get_type_hash,
  &simulation_interfaces__srv__SpawnEntities_Event__get_type_description,
  &simulation_interfaces__srv__SpawnEntities_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, SpawnEntities_Event)() {
  simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__SpawnEntities_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__SpawnEntities_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, SpawnEntities_Request)();
  simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__SpawnEntities_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, SpawnEntities_Response)();
  if (!simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__SpawnEntities_Event_message_type_support_handle.typesupport_identifier) {
    simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__SpawnEntities_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__SpawnEntities_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "simulation_interfaces/srv/detail/spawn_entities__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers simulation_interfaces__srv__detail__spawn_entities__rosidl_typesupport_introspection_c__SpawnEntities_service_members = {
  "simulation_interfaces__srv",  // service namespace
  "SpawnEntities",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // simulation_interfaces__srv__detail__spawn_entities__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_type_support_handle,
  NULL,  // response message
  // simulation_interfaces__srv__detail__spawn_entities__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_type_support_handle
  NULL  // event_message
  // simulation_interfaces__srv__detail__spawn_entities__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_type_support_handle
};


static rosidl_service_type_support_t simulation_interfaces__srv__detail__spawn_entities__rosidl_typesupport_introspection_c__SpawnEntities_service_type_support_handle = {
  0,
  &simulation_interfaces__srv__detail__spawn_entities__rosidl_typesupport_introspection_c__SpawnEntities_service_members,
  get_service_typesupport_handle_function,
  &simulation_interfaces__srv__SpawnEntities_Request__rosidl_typesupport_introspection_c__SpawnEntities_Request_message_type_support_handle,
  &simulation_interfaces__srv__SpawnEntities_Response__rosidl_typesupport_introspection_c__SpawnEntities_Response_message_type_support_handle,
  &simulation_interfaces__srv__SpawnEntities_Event__rosidl_typesupport_introspection_c__SpawnEntities_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    simulation_interfaces,
    srv,
    SpawnEntities
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    simulation_interfaces,
    srv,
    SpawnEntities
  ),
  &simulation_interfaces__srv__SpawnEntities__get_type_hash,
  &simulation_interfaces__srv__SpawnEntities__get_type_description,
  &simulation_interfaces__srv__SpawnEntities__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, SpawnEntities_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, SpawnEntities_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, SpawnEntities_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simulation_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, SpawnEntities)(void) {
  if (!simulation_interfaces__srv__detail__spawn_entities__rosidl_typesupport_introspection_c__SpawnEntities_service_type_support_handle.typesupport_identifier) {
    simulation_interfaces__srv__detail__spawn_entities__rosidl_typesupport_introspection_c__SpawnEntities_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)simulation_interfaces__srv__detail__spawn_entities__rosidl_typesupport_introspection_c__SpawnEntities_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, SpawnEntities_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, SpawnEntities_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, srv, SpawnEntities_Event)()->data;
  }

  return &simulation_interfaces__srv__detail__spawn_entities__rosidl_typesupport_introspection_c__SpawnEntities_service_type_support_handle;
}
