// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from faithcar_msgs:msg/Position.idl
// generated code does not contain a copyright notice
#include "faithcar_msgs/msg/detail/position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
faithcar_msgs__msg__Position__init(faithcar_msgs__msg__Position * msg)
{
  if (!msg) {
    return false;
  }
  // anglex
  // angley
  // distance
  return true;
}

void
faithcar_msgs__msg__Position__fini(faithcar_msgs__msg__Position * msg)
{
  if (!msg) {
    return;
  }
  // anglex
  // angley
  // distance
}

bool
faithcar_msgs__msg__Position__are_equal(const faithcar_msgs__msg__Position * lhs, const faithcar_msgs__msg__Position * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // anglex
  if (lhs->anglex != rhs->anglex) {
    return false;
  }
  // angley
  if (lhs->angley != rhs->angley) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  return true;
}

bool
faithcar_msgs__msg__Position__copy(
  const faithcar_msgs__msg__Position * input,
  faithcar_msgs__msg__Position * output)
{
  if (!input || !output) {
    return false;
  }
  // anglex
  output->anglex = input->anglex;
  // angley
  output->angley = input->angley;
  // distance
  output->distance = input->distance;
  return true;
}

faithcar_msgs__msg__Position *
faithcar_msgs__msg__Position__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  faithcar_msgs__msg__Position * msg = (faithcar_msgs__msg__Position *)allocator.allocate(sizeof(faithcar_msgs__msg__Position), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(faithcar_msgs__msg__Position));
  bool success = faithcar_msgs__msg__Position__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
faithcar_msgs__msg__Position__destroy(faithcar_msgs__msg__Position * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    faithcar_msgs__msg__Position__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
faithcar_msgs__msg__Position__Sequence__init(faithcar_msgs__msg__Position__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  faithcar_msgs__msg__Position * data = NULL;

  if (size) {
    data = (faithcar_msgs__msg__Position *)allocator.zero_allocate(size, sizeof(faithcar_msgs__msg__Position), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = faithcar_msgs__msg__Position__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        faithcar_msgs__msg__Position__fini(&data[i - 1]);
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
faithcar_msgs__msg__Position__Sequence__fini(faithcar_msgs__msg__Position__Sequence * array)
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
      faithcar_msgs__msg__Position__fini(&array->data[i]);
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

faithcar_msgs__msg__Position__Sequence *
faithcar_msgs__msg__Position__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  faithcar_msgs__msg__Position__Sequence * array = (faithcar_msgs__msg__Position__Sequence *)allocator.allocate(sizeof(faithcar_msgs__msg__Position__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = faithcar_msgs__msg__Position__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
faithcar_msgs__msg__Position__Sequence__destroy(faithcar_msgs__msg__Position__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    faithcar_msgs__msg__Position__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
faithcar_msgs__msg__Position__Sequence__are_equal(const faithcar_msgs__msg__Position__Sequence * lhs, const faithcar_msgs__msg__Position__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!faithcar_msgs__msg__Position__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
faithcar_msgs__msg__Position__Sequence__copy(
  const faithcar_msgs__msg__Position__Sequence * input,
  faithcar_msgs__msg__Position__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(faithcar_msgs__msg__Position);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    faithcar_msgs__msg__Position * data =
      (faithcar_msgs__msg__Position *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!faithcar_msgs__msg__Position__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          faithcar_msgs__msg__Position__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!faithcar_msgs__msg__Position__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
