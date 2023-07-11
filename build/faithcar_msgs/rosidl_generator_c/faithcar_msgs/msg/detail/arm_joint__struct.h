// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from faithcar_msgs:msg/ArmJoint.idl
// generated code does not contain a copyright notice

#ifndef FAITHCAR_MSGS__MSG__DETAIL__ARM_JOINT__STRUCT_H_
#define FAITHCAR_MSGS__MSG__DETAIL__ARM_JOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joints'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ArmJoint in the package faithcar_msgs.
typedef struct faithcar_msgs__msg__ArmJoint
{
  int32_t id;
  int32_t run_time;
  float angle;
  rosidl_runtime_c__float__Sequence joints;
} faithcar_msgs__msg__ArmJoint;

// Struct for a sequence of faithcar_msgs__msg__ArmJoint.
typedef struct faithcar_msgs__msg__ArmJoint__Sequence
{
  faithcar_msgs__msg__ArmJoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} faithcar_msgs__msg__ArmJoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FAITHCAR_MSGS__MSG__DETAIL__ARM_JOINT__STRUCT_H_
