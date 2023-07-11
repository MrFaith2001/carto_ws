// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from faithcar_msgs:srv/RobotArmArray.idl
// generated code does not contain a copyright notice

#ifndef FAITHCAR_MSGS__SRV__DETAIL__ROBOT_ARM_ARRAY__STRUCT_H_
#define FAITHCAR_MSGS__SRV__DETAIL__ROBOT_ARM_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'apply'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RobotArmArray in the package faithcar_msgs.
typedef struct faithcar_msgs__srv__RobotArmArray_Request
{
  rosidl_runtime_c__String apply;
} faithcar_msgs__srv__RobotArmArray_Request;

// Struct for a sequence of faithcar_msgs__srv__RobotArmArray_Request.
typedef struct faithcar_msgs__srv__RobotArmArray_Request__Sequence
{
  faithcar_msgs__srv__RobotArmArray_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} faithcar_msgs__srv__RobotArmArray_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'angles'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/RobotArmArray in the package faithcar_msgs.
typedef struct faithcar_msgs__srv__RobotArmArray_Response
{
  rosidl_runtime_c__double__Sequence angles;
} faithcar_msgs__srv__RobotArmArray_Response;

// Struct for a sequence of faithcar_msgs__srv__RobotArmArray_Response.
typedef struct faithcar_msgs__srv__RobotArmArray_Response__Sequence
{
  faithcar_msgs__srv__RobotArmArray_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} faithcar_msgs__srv__RobotArmArray_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FAITHCAR_MSGS__SRV__DETAIL__ROBOT_ARM_ARRAY__STRUCT_H_
