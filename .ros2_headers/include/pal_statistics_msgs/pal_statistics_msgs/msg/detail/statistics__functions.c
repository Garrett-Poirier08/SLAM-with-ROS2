// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pal_statistics_msgs:msg/Statistics.idl
// generated code does not contain a copyright notice
#include "pal_statistics_msgs/msg/detail/statistics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `statistics`
#include "pal_statistics_msgs/msg/detail/statistic__functions.h"

bool
pal_statistics_msgs__msg__Statistics__init(pal_statistics_msgs__msg__Statistics * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pal_statistics_msgs__msg__Statistics__fini(msg);
    return false;
  }
  // statistics
  if (!pal_statistics_msgs__msg__Statistic__Sequence__init(&msg->statistics, 0)) {
    pal_statistics_msgs__msg__Statistics__fini(msg);
    return false;
  }
  return true;
}

void
pal_statistics_msgs__msg__Statistics__fini(pal_statistics_msgs__msg__Statistics * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // statistics
  pal_statistics_msgs__msg__Statistic__Sequence__fini(&msg->statistics);
}

bool
pal_statistics_msgs__msg__Statistics__are_equal(const pal_statistics_msgs__msg__Statistics * lhs, const pal_statistics_msgs__msg__Statistics * rhs)
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
  // statistics
  if (!pal_statistics_msgs__msg__Statistic__Sequence__are_equal(
      &(lhs->statistics), &(rhs->statistics)))
  {
    return false;
  }
  return true;
}

bool
pal_statistics_msgs__msg__Statistics__copy(
  const pal_statistics_msgs__msg__Statistics * input,
  pal_statistics_msgs__msg__Statistics * output)
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
  // statistics
  if (!pal_statistics_msgs__msg__Statistic__Sequence__copy(
      &(input->statistics), &(output->statistics)))
  {
    return false;
  }
  return true;
}

pal_statistics_msgs__msg__Statistics *
pal_statistics_msgs__msg__Statistics__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_statistics_msgs__msg__Statistics * msg = (pal_statistics_msgs__msg__Statistics *)allocator.allocate(sizeof(pal_statistics_msgs__msg__Statistics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pal_statistics_msgs__msg__Statistics));
  bool success = pal_statistics_msgs__msg__Statistics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pal_statistics_msgs__msg__Statistics__destroy(pal_statistics_msgs__msg__Statistics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pal_statistics_msgs__msg__Statistics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pal_statistics_msgs__msg__Statistics__Sequence__init(pal_statistics_msgs__msg__Statistics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_statistics_msgs__msg__Statistics * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pal_statistics_msgs__msg__Statistics)) {
      return false;
    }
    data = (pal_statistics_msgs__msg__Statistics *)allocator.zero_allocate(size, sizeof(pal_statistics_msgs__msg__Statistics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pal_statistics_msgs__msg__Statistics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pal_statistics_msgs__msg__Statistics__fini(&data[i - 1]);
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
pal_statistics_msgs__msg__Statistics__Sequence__fini(pal_statistics_msgs__msg__Statistics__Sequence * array)
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
      pal_statistics_msgs__msg__Statistics__fini(&array->data[i]);
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

pal_statistics_msgs__msg__Statistics__Sequence *
pal_statistics_msgs__msg__Statistics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pal_statistics_msgs__msg__Statistics__Sequence * array = (pal_statistics_msgs__msg__Statistics__Sequence *)allocator.allocate(sizeof(pal_statistics_msgs__msg__Statistics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pal_statistics_msgs__msg__Statistics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pal_statistics_msgs__msg__Statistics__Sequence__destroy(pal_statistics_msgs__msg__Statistics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pal_statistics_msgs__msg__Statistics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pal_statistics_msgs__msg__Statistics__Sequence__are_equal(const pal_statistics_msgs__msg__Statistics__Sequence * lhs, const pal_statistics_msgs__msg__Statistics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pal_statistics_msgs__msg__Statistics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pal_statistics_msgs__msg__Statistics__Sequence__copy(
  const pal_statistics_msgs__msg__Statistics__Sequence * input,
  pal_statistics_msgs__msg__Statistics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pal_statistics_msgs__msg__Statistics)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pal_statistics_msgs__msg__Statistics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pal_statistics_msgs__msg__Statistics * data =
      (pal_statistics_msgs__msg__Statistics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pal_statistics_msgs__msg__Statistics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pal_statistics_msgs__msg__Statistics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pal_statistics_msgs__msg__Statistics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
