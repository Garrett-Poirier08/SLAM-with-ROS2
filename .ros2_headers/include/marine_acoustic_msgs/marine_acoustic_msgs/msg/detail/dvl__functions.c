// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marine_acoustic_msgs:msg/Dvl.idl
// generated code does not contain a copyright notice
#include "marine_acoustic_msgs/msg/detail/dvl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `velocity`
// Member `beam_unit_vec`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
marine_acoustic_msgs__msg__Dvl__init(marine_acoustic_msgs__msg__Dvl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marine_acoustic_msgs__msg__Dvl__fini(msg);
    return false;
  }
  // velocity_mode
  // dvl_type
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    marine_acoustic_msgs__msg__Dvl__fini(msg);
    return false;
  }
  // velocity_covar
  // altitude
  // course_gnd
  // speed_gnd
  // num_good_beams
  // sound_speed
  // beam_ranges_valid
  // beam_velocities_valid
  // beam_unit_vec
  for (size_t i = 0; i < 4; ++i) {
    if (!geometry_msgs__msg__Vector3__init(&msg->beam_unit_vec[i])) {
      marine_acoustic_msgs__msg__Dvl__fini(msg);
      return false;
    }
  }
  // range
  // range_covar
  // beam_quality
  // beam_velocity
  // beam_velocity_covar
  return true;
}

void
marine_acoustic_msgs__msg__Dvl__fini(marine_acoustic_msgs__msg__Dvl * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // velocity_mode
  // dvl_type
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // velocity_covar
  // altitude
  // course_gnd
  // speed_gnd
  // num_good_beams
  // sound_speed
  // beam_ranges_valid
  // beam_velocities_valid
  // beam_unit_vec
  for (size_t i = 0; i < 4; ++i) {
    geometry_msgs__msg__Vector3__fini(&msg->beam_unit_vec[i]);
  }
  // range
  // range_covar
  // beam_quality
  // beam_velocity
  // beam_velocity_covar
}

bool
marine_acoustic_msgs__msg__Dvl__are_equal(const marine_acoustic_msgs__msg__Dvl * lhs, const marine_acoustic_msgs__msg__Dvl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // velocity_mode
  if (lhs->velocity_mode != rhs->velocity_mode) {
    return false;
  }
  // dvl_type
  if (lhs->dvl_type != rhs->dvl_type) {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // velocity_covar
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->velocity_covar[i] != rhs->velocity_covar[i]) {
      return false;
    }
  }
  // altitude
  if (lhs->altitude != rhs->altitude) {
    return false;
  }
  // course_gnd
  if (lhs->course_gnd != rhs->course_gnd) {
    return false;
  }
  // speed_gnd
  if (lhs->speed_gnd != rhs->speed_gnd) {
    return false;
  }
  // num_good_beams
  if (lhs->num_good_beams != rhs->num_good_beams) {
    return false;
  }
  // sound_speed
  if (lhs->sound_speed != rhs->sound_speed) {
    return false;
  }
  // beam_ranges_valid
  if (lhs->beam_ranges_valid != rhs->beam_ranges_valid) {
    return false;
  }
  // beam_velocities_valid
  if (lhs->beam_velocities_valid != rhs->beam_velocities_valid) {
    return false;
  }
  // beam_unit_vec
  for (size_t i = 0; i < 4; ++i) {
    if (!geometry_msgs__msg__Vector3__are_equal(
        &(lhs->beam_unit_vec[i]), &(rhs->beam_unit_vec[i])))
    {
      return false;
    }
  }
  // range
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->range[i] != rhs->range[i]) {
      return false;
    }
  }
  // range_covar
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->range_covar[i] != rhs->range_covar[i]) {
      return false;
    }
  }
  // beam_quality
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->beam_quality[i] != rhs->beam_quality[i]) {
      return false;
    }
  }
  // beam_velocity
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->beam_velocity[i] != rhs->beam_velocity[i]) {
      return false;
    }
  }
  // beam_velocity_covar
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->beam_velocity_covar[i] != rhs->beam_velocity_covar[i]) {
      return false;
    }
  }
  return true;
}

bool
marine_acoustic_msgs__msg__Dvl__copy(
  const marine_acoustic_msgs__msg__Dvl * input,
  marine_acoustic_msgs__msg__Dvl * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // velocity_mode
  output->velocity_mode = input->velocity_mode;
  // dvl_type
  output->dvl_type = input->dvl_type;
  // velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // velocity_covar
  for (size_t i = 0; i < 9; ++i) {
    output->velocity_covar[i] = input->velocity_covar[i];
  }
  // altitude
  output->altitude = input->altitude;
  // course_gnd
  output->course_gnd = input->course_gnd;
  // speed_gnd
  output->speed_gnd = input->speed_gnd;
  // num_good_beams
  output->num_good_beams = input->num_good_beams;
  // sound_speed
  output->sound_speed = input->sound_speed;
  // beam_ranges_valid
  output->beam_ranges_valid = input->beam_ranges_valid;
  // beam_velocities_valid
  output->beam_velocities_valid = input->beam_velocities_valid;
  // beam_unit_vec
  for (size_t i = 0; i < 4; ++i) {
    if (!geometry_msgs__msg__Vector3__copy(
        &(input->beam_unit_vec[i]), &(output->beam_unit_vec[i])))
    {
      return false;
    }
  }
  // range
  for (size_t i = 0; i < 4; ++i) {
    output->range[i] = input->range[i];
  }
  // range_covar
  for (size_t i = 0; i < 4; ++i) {
    output->range_covar[i] = input->range_covar[i];
  }
  // beam_quality
  for (size_t i = 0; i < 4; ++i) {
    output->beam_quality[i] = input->beam_quality[i];
  }
  // beam_velocity
  for (size_t i = 0; i < 4; ++i) {
    output->beam_velocity[i] = input->beam_velocity[i];
  }
  // beam_velocity_covar
  for (size_t i = 0; i < 4; ++i) {
    output->beam_velocity_covar[i] = input->beam_velocity_covar[i];
  }
  return true;
}

marine_acoustic_msgs__msg__Dvl *
marine_acoustic_msgs__msg__Dvl__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marine_acoustic_msgs__msg__Dvl * msg = (marine_acoustic_msgs__msg__Dvl *)allocator.allocate(sizeof(marine_acoustic_msgs__msg__Dvl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marine_acoustic_msgs__msg__Dvl));
  bool success = marine_acoustic_msgs__msg__Dvl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marine_acoustic_msgs__msg__Dvl__destroy(marine_acoustic_msgs__msg__Dvl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marine_acoustic_msgs__msg__Dvl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marine_acoustic_msgs__msg__Dvl__Sequence__init(marine_acoustic_msgs__msg__Dvl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marine_acoustic_msgs__msg__Dvl * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(marine_acoustic_msgs__msg__Dvl)) {
      return false;
    }
    data = (marine_acoustic_msgs__msg__Dvl *)allocator.zero_allocate(size, sizeof(marine_acoustic_msgs__msg__Dvl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marine_acoustic_msgs__msg__Dvl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marine_acoustic_msgs__msg__Dvl__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
marine_acoustic_msgs__msg__Dvl__Sequence__fini(marine_acoustic_msgs__msg__Dvl__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      marine_acoustic_msgs__msg__Dvl__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

marine_acoustic_msgs__msg__Dvl__Sequence *
marine_acoustic_msgs__msg__Dvl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marine_acoustic_msgs__msg__Dvl__Sequence * array = (marine_acoustic_msgs__msg__Dvl__Sequence *)allocator.allocate(sizeof(marine_acoustic_msgs__msg__Dvl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marine_acoustic_msgs__msg__Dvl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marine_acoustic_msgs__msg__Dvl__Sequence__destroy(marine_acoustic_msgs__msg__Dvl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marine_acoustic_msgs__msg__Dvl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marine_acoustic_msgs__msg__Dvl__Sequence__are_equal(const marine_acoustic_msgs__msg__Dvl__Sequence * lhs, const marine_acoustic_msgs__msg__Dvl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marine_acoustic_msgs__msg__Dvl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marine_acoustic_msgs__msg__Dvl__Sequence__copy(
  const marine_acoustic_msgs__msg__Dvl__Sequence * input,
  marine_acoustic_msgs__msg__Dvl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(marine_acoustic_msgs__msg__Dvl)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(marine_acoustic_msgs__msg__Dvl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marine_acoustic_msgs__msg__Dvl * data =
      (marine_acoustic_msgs__msg__Dvl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marine_acoustic_msgs__msg__Dvl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marine_acoustic_msgs__msg__Dvl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marine_acoustic_msgs__msg__Dvl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
