// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from faithcar_msgs:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef FAITHCAR_MSGS__MSG__DETAIL__POSITION__STRUCT_H_
#define FAITHCAR_MSGS__MSG__DETAIL__POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Position in the package faithcar_msgs.
typedef struct faithcar_msgs__msg__Position
{
  float anglex;
  float angley;
  float distance;
} faithcar_msgs__msg__Position;

// Struct for a sequence of faithcar_msgs__msg__Position.
typedef struct faithcar_msgs__msg__Position__Sequence
{
  faithcar_msgs__msg__Position * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} faithcar_msgs__msg__Position__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FAITHCAR_MSGS__MSG__DETAIL__POSITION__STRUCT_H_
