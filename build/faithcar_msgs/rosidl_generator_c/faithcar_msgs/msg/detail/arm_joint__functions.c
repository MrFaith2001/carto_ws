// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from faithcar_msgs:msg/ArmJoint.idl
// generated code does not contain a copyright notice
#include "faithcar_msgs/msg/detail/arm_joint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `joints`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
faithcar_msgs__msg__ArmJoint__init(faithcar_msgs__msg__ArmJoint * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // run_time
  // angle
  // joints
  if (!rosidl_runtime_c__float__Sequence__init(&msg->joints, 0)) {
    faithcar_msgs__msg__ArmJoint__fini(msg);
    return false;
  }
  return true;
}

void
faithcar_msgs__msg__ArmJoint__fini(faithcar_msgs__msg__ArmJoint * msg)
{
  if (!msg) {
    return;
  }
  // id
  // run_time
  // angle
  // joints
  rosidl_runtime_c__float__Sequence__fini(&msg->joints);
}

bool
faithcar_msgs__msg__ArmJoint__are_equal(const faithcar_msgs__msg__ArmJoint * lhs, const faithcar_msgs__msg__ArmJoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // run_time
  if (lhs->run_time != rhs->run_time) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // joints
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->joints), &(rhs->joints)))
  {
    return false;
  }
  return true;
}

bool
faithcar_msgs__msg__ArmJoint__copy(
  const faithcar_msgs__msg__ArmJoint * input,
  faithcar_msgs__msg__ArmJoint * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // run_time
  output->run_time = input->run_time;
  // angle
  output->angle = input->angle;
  // joints
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->joints), &(output->joints)))
  {
    return false;
  }
  return true;
}

faithcar_msgs__msg__ArmJoint *
faithcar_msgs__msg__ArmJoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  faithcar_msgs__msg__ArmJoint * msg = (faithcar_msgs__msg__ArmJoint *)allocator.allocate(sizeof(faithcar_msgs__msg__ArmJoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(faithcar_msgs__msg__ArmJoint));
  bool success = faithcar_msgs__msg__ArmJoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
faithcar_msgs__msg__ArmJoint__destroy(faithcar_msgs__msg__ArmJoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    faithcar_msgs__msg__ArmJoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
faithcar_msgs__msg__ArmJoint__Sequence__init(faithcar_msgs__msg__ArmJoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  faithcar_msgs__msg__ArmJoint * data = NULL;

  if (size) {
    data = (faithcar_msgs__msg__ArmJoint *)allocator.zero_allocate(size, sizeof(faithcar_msgs__msg__ArmJoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = faithcar_msgs__msg__ArmJoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        faithcar_msgs__msg__ArmJoint__fini(&data[i - 1]);
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
faithcar_msgs__msg__ArmJoint__Sequence__fini(faithcar_msgs__msg__ArmJoint__Sequence * array)
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
      faithcar_msgs__msg__ArmJoint__fini(&array->data[i]);
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

faithcar_msgs__msg__ArmJoint__Sequence *
faithcar_msgs__msg__ArmJoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  faithcar_msgs__msg__ArmJoint__Sequence * array = (faithcar_msgs__msg__ArmJoint__Sequence *)allocator.allocate(sizeof(faithcar_msgs__msg__ArmJoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = faithcar_msgs__msg__ArmJoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
faithcar_msgs__msg__ArmJoint__Sequence__destroy(faithcar_msgs__msg__ArmJoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    faithcar_msgs__msg__ArmJoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
faithcar_msgs__msg__ArmJoint__Sequence__are_equal(const faithcar_msgs__msg__ArmJoint__Sequence * lhs, const faithcar_msgs__msg__ArmJoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!faithcar_msgs__msg__ArmJoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
faithcar_msgs__msg__ArmJoint__Sequence__copy(
  const faithcar_msgs__msg__ArmJoint__Sequence * input,
  faithcar_msgs__msg__ArmJoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(faithcar_msgs__msg__ArmJoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    faithcar_msgs__msg__ArmJoint * data =
      (faithcar_msgs__msg__ArmJoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!faithcar_msgs__msg__ArmJoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          faithcar_msgs__msg__ArmJoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!faithcar_msgs__msg__ArmJoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
