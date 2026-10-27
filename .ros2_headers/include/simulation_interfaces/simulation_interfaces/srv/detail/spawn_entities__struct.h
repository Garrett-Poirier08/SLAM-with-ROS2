// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:srv/SpawnEntities.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "simulation_interfaces/srv/spawn_entities.h"


#ifndef SIMULATION_INTERFACES__SRV__DETAIL__SPAWN_ENTITIES__STRUCT_H_
#define SIMULATION_INTERFACES__SRV__DETAIL__SPAWN_ENTITIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'spawn_requests'
#include "simulation_interfaces/msg/detail/spawn_entity__struct.h"

/// Struct defined in srv/SpawnEntities in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__SpawnEntities_Request
{
  /// List of spawn requests.
  simulation_interfaces__msg__SpawnEntity__Sequence spawn_requests;
} simulation_interfaces__srv__SpawnEntities_Request;

// Struct for a sequence of simulation_interfaces__srv__SpawnEntities_Request.
typedef struct simulation_interfaces__srv__SpawnEntities_Request__Sequence
{
  simulation_interfaces__srv__SpawnEntities_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__SpawnEntities_Request__Sequence;

// Constants defined in the message

/// Constant 'ENTITIES_SPAWN_FAILED'.
/**
  * Additional result.result_code values for this service. Check result.error_message for further details.
  * There was at least one failed spawn request. Check individual results in the `results`.
 */
enum
{
  simulation_interfaces__srv__SpawnEntities_Response__ENTITIES_SPAWN_FAILED = 150
};

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"
// Member 'results'
#include "simulation_interfaces/msg/detail/spawn_result__struct.h"

/// Struct defined in srv/SpawnEntities in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__SpawnEntities_Response
{
  /// If one or more requests failed, it will give ENTITIES_SPAWN_FAILED otherwise RESULT_OK
  simulation_interfaces__msg__Result result;
  /// List of results for each spawn request.
  simulation_interfaces__msg__SpawnResult__Sequence results;
} simulation_interfaces__srv__SpawnEntities_Response;

// Struct for a sequence of simulation_interfaces__srv__SpawnEntities_Response.
typedef struct simulation_interfaces__srv__SpawnEntities_Response__Sequence
{
  simulation_interfaces__srv__SpawnEntities_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__SpawnEntities_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  simulation_interfaces__srv__SpawnEntities_Event__request__MAX_SIZE = 1
};
// response
enum
{
  simulation_interfaces__srv__SpawnEntities_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SpawnEntities in the package simulation_interfaces.
typedef struct simulation_interfaces__srv__SpawnEntities_Event
{
  service_msgs__msg__ServiceEventInfo info;
  simulation_interfaces__srv__SpawnEntities_Request__Sequence request;
  simulation_interfaces__srv__SpawnEntities_Response__Sequence response;
} simulation_interfaces__srv__SpawnEntities_Event;

// Struct for a sequence of simulation_interfaces__srv__SpawnEntities_Event.
typedef struct simulation_interfaces__srv__SpawnEntities_Event__Sequence
{
  simulation_interfaces__srv__SpawnEntities_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__srv__SpawnEntities_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__SPAWN_ENTITIES__STRUCT_H_
