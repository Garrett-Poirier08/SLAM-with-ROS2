// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pal_statistics_msgs:msg/StatisticsNames.idl
// generated code does not contain a copyright notice
#include "pal_statistics_msgs/msg/detail/statistics_names__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `names`
#include "rosidl_runtime_c/string_functions.h"

bool
pal_statistics_msgs__msg__StatisticsNames__init(pal_statistics_msgs__msg__StatisticsNames * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pal_statistics_msgs__msg__StatisticsNames__fini(msg);
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->names, 0)) {
    pal_statistics_msgs__msg__StatisticsNames__fini(msg);
    return false;
  }
  // names_version
  return true;
}

void
pal_statistics_msgs__msg__StatisticsNames__fini(pal_statistics_msgs__msg__StatisticsNames * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // names
  rosidl_runtime_c__String__Sequence__fini(&msg->names);
  // names_version
}

bool
pal_statistics_msgs__msg__StatisticsNames__are_equal(const pal_statistics_msgs__msg__StatisticsNames * lhs, const pal_statistics_msgs__msg__StatisticsNames * rhs)
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
  // names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->names), &(rhs->names)))
  {
    return false;
  }
  // names_version
  if (lhs->names_version != rhs->names_version) {
    return false;
  }
  return true;
}

bool
pal_statistics_msgs__msg__StatisticsNames__copy(
  const pal_statistics_msgs__msg__StatisticsNames * input,
  pal_statistics_msgs__msg__StatisticsNames * output)
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
  // names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->names), &(output->names)))
  {
    return false;
  }
  // names_version
  output->names_version = input->names_version;
  return true;
}

pal_statistics_msgs__msg__StatisticsNames *
pal_statistics_msgs__msg__StatisticsNames__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_statistics_msgs__msg__StatisticsNames * msg = (pal_statistics_msgs__msg__StatisticsNames *)allocator.allocate(sizeof(pal_statistics_msgs__msg__StatisticsNames), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pal_statistics_msgs__msg__StatisticsNames));
  bool success = pal_statistics_msgs__msg__StatisticsNames__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pal_statistics_msgs__msg__StatisticsNames__destroy(pal_statistics_msgs__msg__StatisticsNames * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pal_statistics_msgs__msg__StatisticsNames__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pal_statistics_msgs__msg__StatisticsNames__Sequence__init(pal_statistics_msgs__msg__StatisticsNames__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_statistics_msgs__msg__StatisticsNames * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pal_statistics_msgs__msg__StatisticsNames)) {
      return false;
    }
    data = (pal_statistics_msgs__msg__StatisticsNames *)allocator.zero_allocate(size, sizeof(pal_statistics_msgs__msg__StatisticsNames), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pal_statistics_msgs__msg__StatisticsNames__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pal_statistics_msgs__msg__StatisticsNames__fini(&data[i - 1]);
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
pal_statistics_msgs__msg__StatisticsNames__Sequence__fini(pal_statistics_msgs__msg__StatisticsNames__Sequence * array)
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
      pal_statistics_msgs__msg__StatisticsNames__fini(&array->data[i]);
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

pal_statistics_msgs__msg__StatisticsNames__Sequence *
pal_statistics_msgs__msg__StatisticsNames__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_statistics_msgs__msg__StatisticsNames__Sequence * array = (pal_statistics_msgs__msg__StatisticsNames__Sequence *)allocator.allocate(sizeof(pal_statistics_msgs__msg__StatisticsNames__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pal_statistics_msgs__msg__StatisticsNames__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pal_statistics_msgs__msg__StatisticsNames__Sequence__destroy(pal_statistics_msgs__msg__StatisticsNames__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pal_statistics_msgs__msg__StatisticsNames__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pal_statistics_msgs__msg__StatisticsNames__Sequence__are_equal(const pal_statistics_msgs__msg__StatisticsNames__Sequence * lhs, const pal_statistics_msgs__msg__StatisticsNames__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pal_statistics_msgs__msg__StatisticsNames__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pal_statistics_msgs__msg__StatisticsNames__Sequence__copy(
  const pal_statistics_msgs__msg__StatisticsNames__Sequence * input,
  pal_statistics_msgs__msg__StatisticsNames__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pal_statistics_msgs__msg__StatisticsNames)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pal_statistics_msgs__msg__StatisticsNames);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pal_statistics_msgs__msg__StatisticsNames * data =
      (pal_statistics_msgs__msg__StatisticsNames *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pal_statistics_msgs__msg__StatisticsNames__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pal_statistics_msgs__msg__StatisticsNames__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pal_statistics_msgs__msg__StatisticsNames__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
