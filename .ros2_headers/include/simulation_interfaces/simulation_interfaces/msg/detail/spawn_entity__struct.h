// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simulation_interfaces:msg/SpawnEntity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "simulation_interfaces/msg/spawn_entity.h"


#ifndef SIMULATION_INTERFACES__MSG__DETAIL__SPAWN_ENTITY__STRUCT_H_
#define SIMULATION_INTERFACES__MSG__DETAIL__SPAWN_ENTITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'entity_namespace'
#include "rosidl_runtime_c/string.h"
// Member 'entity_resource'
#include "simulation_interfaces/msg/detail/resource__struct.h"
// Member 'initial_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/SpawnEntity in the package simulation_interfaces.
/**
  * Information about spawning an individual entity.
 */
typedef struct simulation_interfaces__msg__SpawnEntity
{
  /// A name to give to the spawned entity.
  /// If empty, the name field in the URI file or resource_string will be used,
  /// if supported and not empty (e.g. "name" field in SDFormat, URDF).
  /// If the name is still empty or not unique (as determined by the simulator),
  /// the service returns a generated name in the entity_name response field if the
  /// allow_renaming field is set to true. Otherwise, the service call fails and an
  /// error is returned.
  rosidl_runtime_c__String name;
  /// Determines whether the spawning succeeds with a non-unique name.
  /// If it is set to true, the user should always check entity_name response field
  /// and use it for any further interactions.
  bool allow_renaming;
  /// Resource such as SDFormat, URDF, USD or MJCF file, a native prefab, etc.
  /// Valid URIs can be determined by calling GetSpawnables first.
  /// Check simulator format support via the spawn_formats field in GetSimulatorFeatures.
  /// Using resource_string is supported if GetSimulatorFeatures includes
  /// the SPAWNING_RESOURCE_STRING feature.
  simulation_interfaces__msg__Resource entity_resource;
  /// Spawn the entity with all its interfaces under this namespace.
  rosidl_runtime_c__String entity_namespace;
  /// Initial entity pose.
  /// The header contains a reference frame, which defaults to global "world" frame.
  /// This frame must be known to the simulator, e.g. of an object spawned earlier.
  /// The timestamp field in the header is ignored.
  geometry_msgs__msg__PoseStamped initial_pose;
} simulation_interfaces__msg__SpawnEntity;

// Struct for a sequence of simulation_interfaces__msg__SpawnEntity.
typedef struct simulation_interfaces__msg__SpawnEntity__Sequence
{
  simulation_interfaces__msg__SpawnEntity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simulation_interfaces__msg__SpawnEntity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__SPAWN_ENTITY__STRUCT_H_
