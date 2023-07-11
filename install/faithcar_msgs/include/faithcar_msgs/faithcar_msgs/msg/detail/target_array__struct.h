// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from faithcar_msgs:msg/TargetArray.idl
// generated code does not contain a copyright notice

#ifndef FAITHCAR_MSGS__MSG__DETAIL__TARGET_ARRAY__STRUCT_H_
#define FAITHCAR_MSGS__MSG__DETAIL__TARGET_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "faithcar_msgs/msg/detail/target__struct.h"

/// Struct defined in msg/TargetArray in the package faithcar_msgs.
typedef struct faithcar_msgs__msg__TargetArray
{
  faithcar_msgs__msg__Target__Sequence data;
} faithcar_msgs__msg__TargetArray;

// Struct for a sequence of faithcar_msgs__msg__TargetArray.
typedef struct faithcar_msgs__msg__TargetArray__Sequence
{
  faithcar_msgs__msg__TargetArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} faithcar_msgs__msg__TargetArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FAITHCAR_MSGS__MSG__DETAIL__TARGET_ARRAY__STRUCT_H_
