// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from faithcar_msgs:srv/Kinemarics.idl
// generated code does not contain a copyright notice
#include "faithcar_msgs/srv/detail/kinemarics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `kin_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `src_pos`
// Member `src_joints`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
faithcar_msgs__srv__Kinemarics_Request__init(faithcar_msgs__srv__Kinemarics_Request * msg)
{
  if (!msg) {
    return false;
  }
  // kin_name
  if (!rosidl_runtime_c__String__init(&msg->kin_name)) {
    faithcar_msgs__srv__Kinemarics_Request__fini(msg);
    return false;
  }
  // src_pos
  if (!rosidl_runtime_c__double__Sequence__init(&msg->src_pos, 0)) {
    faithcar_msgs__srv__Kinemarics_Request__fini(msg);
    return false;
  }
  // src_joints
  if (!rosidl_runtime_c__double__Sequence__init(&msg->src_joints, 0)) {
    faithcar_msgs__srv__Kinemarics_Request__fini(msg);
    return false;
  }
  return true;
}

void
faithcar_msgs__srv__Kinemarics_Request__fini(faithcar_msgs__srv__Kinemarics_Request * msg)
{
  if (!msg) {
    return;
  }
  // kin_name
  rosidl_runtime_c__String__fini(&msg->kin_name);
  // src_pos
  rosidl_runtime_c__double__Sequence__fini(&msg->src_pos);
  // src_joints
  rosidl_runtime_c__double__Sequence__fini(&msg->src_joints);
}

bool
faithcar_msgs__srv__Kinemarics_Request__are_equal(const faithcar_msgs__srv__Kinemarics_Request * lhs, const faithcar_msgs__srv__Kinemarics_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // kin_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->kin_name), &(rhs->kin_name)))
  {
    return false;
  }
  // src_pos
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->src_pos), &(rhs->src_pos)))
  {
    return false;
  }
  // src_joints
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->src_joints), &(rhs->src_joints)))
  {
    return false;
  }
  return true;
}

bool
faithcar_msgs__srv__Kinemarics_Request__copy(
  const faithcar_msgs__srv__Kinemarics_Request * input,
  faithcar_msgs__srv__Kinemarics_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // kin_name
  if (!rosidl_runtime_c__String__copy(
      &(input->kin_name), &(output->kin_name)))
  {
    return false;
  }
  // src_pos
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->src_pos), &(output->src_pos)))
  {
    return false;
  }
  // src_joints
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->src_joints), &(output->src_joints)))
  {
    return false;
  }
  return true;
}

faithcar_msgs__srv__Kinemarics_Request *
faithcar_msgs__srv__Kinemarics_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  faithcar_msgs__srv__Kinemarics_Request * msg = (faithcar_msgs__srv__Kinemarics_Request *)allocator.allocate(sizeof(faithcar_msgs__srv__Kinemarics_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(faithcar_msgs__srv__Kinemarics_Request));
  bool success = faithcar_msgs__srv__Kinemarics_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
faithcar_msgs__srv__Kinemarics_Request__destroy(faithcar_msgs__srv__Kinemarics_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    faithcar_msgs__srv__Kinemarics_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
faithcar_msgs__srv__Kinemarics_Request__Sequence__init(faithcar_msgs__srv__Kinemarics_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  faithcar_msgs__srv__Kinemarics_Request * data = NULL;

  if (size) {
    data = (faithcar_msgs__srv__Kinemarics_Request *)allocator.zero_allocate(size, sizeof(faithcar_msgs__srv__Kinemarics_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = faithcar_msgs__srv__Kinemarics_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        faithcar_msgs__srv__Kinemarics_Request__fini(&data[i - 1]);
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
faithcar_msgs__srv__Kinemarics_Request__Sequence__fini(faithcar_msgs__srv__Kinemarics_Request__Sequence * array)
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
      faithcar_msgs__srv__Kinemarics_Request__fini(&array->data[i]);
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

faithcar_msgs__srv__Kinemarics_Request__Sequence *
faithcar_msgs__srv__Kinemarics_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  faithcar_msgs__srv__Kinemarics_Request__Sequence * array = (faithcar_msgs__srv__Kinemarics_Request__Sequence *)allocator.allocate(sizeof(faithcar_msgs__srv__Kinemarics_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = faithcar_msgs__srv__Kinemarics_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
faithcar_msgs__srv__Kinemarics_Request__Sequence__destroy(faithcar_msgs__srv__Kinemarics_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    faithcar_msgs__srv__Kinemarics_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
faithcar_msgs__srv__Kinemarics_Request__Sequence__are_equal(const faithcar_msgs__srv__Kinemarics_Request__Sequence * lhs, const faithcar_msgs__srv__Kinemarics_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!faithcar_msgs__srv__Kinemarics_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
faithcar_msgs__srv__Kinemarics_Request__Sequence__copy(
  const faithcar_msgs__srv__Kinemarics_Request__Sequence * input,
  faithcar_msgs__srv__Kinemarics_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(faithcar_msgs__srv__Kinemarics_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    faithcar_msgs__srv__Kinemarics_Request * data =
      (faithcar_msgs__srv__Kinemarics_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!faithcar_msgs__srv__Kinemarics_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          faithcar_msgs__srv__Kinemarics_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!faithcar_msgs__srv__Kinemarics_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `target_joints`
// Member `target_pos`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
faithcar_msgs__srv__Kinemarics_Response__init(faithcar_msgs__srv__Kinemarics_Response * msg)
{
  if (!msg) {
    return false;
  }
  // target_joints
  if (!rosidl_runtime_c__double__Sequence__init(&msg->target_joints, 0)) {
    faithcar_msgs__srv__Kinemarics_Response__fini(msg);
    return false;
  }
  // target_pos
  if (!rosidl_runtime_c__double__Sequence__init(&msg->target_pos, 0)) {
    faithcar_msgs__srv__Kinemarics_Response__fini(msg);
    return false;
  }
  return true;
}

void
faithcar_msgs__srv__Kinemarics_Response__fini(faithcar_msgs__srv__Kinemarics_Response * msg)
{
  if (!msg) {
    return;
  }
  // target_joints
  rosidl_runtime_c__double__Sequence__fini(&msg->target_joints);
  // target_pos
  rosidl_runtime_c__double__Sequence__fini(&msg->target_pos);
}

bool
faithcar_msgs__srv__Kinemarics_Response__are_equal(const faithcar_msgs__srv__Kinemarics_Response * lhs, const faithcar_msgs__srv__Kinemarics_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_joints
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->target_joints), &(rhs->target_joints)))
  {
    return false;
  }
  // target_pos
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->target_pos), &(rhs->target_pos)))
  {
    return false;
  }
  return true;
}

bool
faithcar_msgs__srv__Kinemarics_Response__copy(
  const faithcar_msgs__srv__Kinemarics_Response * input,
  faithcar_msgs__srv__Kinemarics_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // target_joints
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->target_joints), &(output->target_joints)))
  {
    return false;
  }
  // target_pos
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->target_pos), &(output->target_pos)))
  {
    return false;
  }
  return true;
}

faithcar_msgs__srv__Kinemarics_Response *
faithcar_msgs__srv__Kinemarics_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  faithcar_msgs__srv__Kinemarics_Response * msg = (faithcar_msgs__srv__Kinemarics_Response *)allocator.allocate(sizeof(faithcar_msgs__srv__Kinemarics_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(faithcar_msgs__srv__Kinemarics_Response));
  bool success = faithcar_msgs__srv__Kinemarics_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
faithcar_msgs__srv__Kinemarics_Response__destroy(faithcar_msgs__srv__Kinemarics_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    faithcar_msgs__srv__Kinemarics_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
faithcar_msgs__srv__Kinemarics_Response__Sequence__init(faithcar_msgs__srv__Kinemarics_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  faithcar_msgs__srv__Kinemarics_Response * data = NULL;

  if (size) {
    data = (faithcar_msgs__srv__Kinemarics_Response *)allocator.zero_allocate(size, sizeof(faithcar_msgs__srv__Kinemarics_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = faithcar_msgs__srv__Kinemarics_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        faithcar_msgs__srv__Kinemarics_Response__fini(&data[i - 1]);
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
faithcar_msgs__srv__Kinemarics_Response__Sequence__fini(faithcar_msgs__srv__Kinemarics_Response__Sequence * array)
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
      faithcar_msgs__srv__Kinemarics_Response__fini(&array->data[i]);
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

faithcar_msgs__srv__Kinemarics_Response__Sequence *
faithcar_msgs__srv__Kinemarics_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  faithcar_msgs__srv__Kinemarics_Response__Sequence * array = (faithcar_msgs__srv__Kinemarics_Response__Sequence *)allocator.allocate(sizeof(faithcar_msgs__srv__Kinemarics_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = faithcar_msgs__srv__Kinemarics_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
faithcar_msgs__srv__Kinemarics_Response__Sequence__destroy(faithcar_msgs__srv__Kinemarics_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    faithcar_msgs__srv__Kinemarics_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
faithcar_msgs__srv__Kinemarics_Response__Sequence__are_equal(const faithcar_msgs__srv__Kinemarics_Response__Sequence * lhs, const faithcar_msgs__srv__Kinemarics_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!faithcar_msgs__srv__Kinemarics_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
faithcar_msgs__srv__Kinemarics_Response__Sequence__copy(
  const faithcar_msgs__srv__Kinemarics_Response__Sequence * input,
  faithcar_msgs__srv__Kinemarics_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(faithcar_msgs__srv__Kinemarics_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    faithcar_msgs__srv__Kinemarics_Response * data =
      (faithcar_msgs__srv__Kinemarics_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!faithcar_msgs__srv__Kinemarics_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          faithcar_msgs__srv__Kinemarics_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!faithcar_msgs__srv__Kinemarics_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
