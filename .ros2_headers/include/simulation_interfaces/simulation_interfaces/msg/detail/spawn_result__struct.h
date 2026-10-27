// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:msg/SpawnResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "simulation_interfaces/msg/spawn_result.h"


#ifndef SIMULATION_INTERFACES__MSG__DETAIL__SPAWN_RESULT__STRUCT_H_
#define SIMULATION_INTERFACES__MSG__DETAIL__SPAWN_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'NAME_NOT_UNIQUE'.
/**
  * Given name is already taken by entity and allow_renaming is false.
 */
enum
{
  simulation_interfaces__msg__SpawnResult__NAME_NOT_UNIQUE = 101
};

/// Constant 'NAME_INVALID'.
/**
  * Given name is invalid in the simulator (e.g. does not meet naming
  * requirements such as allowed characters). This is also returned if name is
  * empty and allow_renaming is false.
 */
enum
{
  simulation_interfaces__msg__SpawnResult__NAME_INVALID = 102
};

/// Constant 'UNSUPPORTED_FORMAT'.
/**
  * Format for uri or resource string is unsupported. Check supported formats
  * through GetSimulatorFeatures service, in spawn_formats field.
 */
enum
{
  simulation_interfaces__msg__SpawnResult__UNSUPPORTED_FORMAT = 103
};

/// Constant 'NO_RESOURCE'.
/**
  * Both uri and resource string are empty.
 */
enum
{
  simulation_interfaces__msg__SpawnResult__NO_RESOURCE = 104
};

/// Constant 'NAMESPACE_INVALID'.
/**
  * Namespace does not meet namespace naming standards.
 */
enum
{
  simulation_interfaces__msg__SpawnResult__NAMESPACE_INVALID = 105
};

/// Constant 'RESOURCE_PARSE_ERROR'.
/**
  * Resource file or string failed to parse.
 */
enum
{
  simulation_interfaces__msg__SpawnResult__RESOURCE_PARSE_ERROR = 106
};

/// Constant 'MISSING_ASSETS'.
/**
  * At least one of resource assets (such as meshes) was not found.
 */
enum
{
  simulation_interfaces__msg__SpawnResult__MISSING_ASSETS = 107
};

/// Constant 'UNSUPPORTED_ASSETS'.
/**
  * At least one of resource assets (such as meshes) is not supported.
 */
enum
{
  simulation_interfaces__msg__SpawnResult__UNSUPPORTED_ASSETS = 108
};

/// Constant 'INVALID_POSE'.
/**
  * initial_pose is invalid, such as when the quaternion is invalid or position
  * exceeds simulator world bounds.
 */
enum
{
  simulation_interfaces__msg__SpawnResult__INVALID_POSE = 109
};

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"
// Member 'entity_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SpawnResult in the package simulation_interfaces.
/**
  * Result of spawning.
 */
typedef struct simulation_interfaces__msg__SpawnResult
{
  simulation_interfaces__msg__Result result;
  /// Spawned entity full name, guaranteed to be unique in the simulation.
  /// If allow_renaming is true, it may differ from the request name field.
  rosidl_runtime_c__String entity_name;
} simulation_interfaces__msg__SpawnResult;

// Struct for a sequence of simulation_interfaces__msg__SpawnResult.
typedef struct simulation_interfaces__msg__SpawnResult__Sequence
{
  simulation_interfaces__msg__SpawnResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__msg__SpawnResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__SPAWN_RESULT__STRUCT_H_
