// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from faithcar_msgs:srv/Kinemarics.idl
// generated code does not contain a copyright notice

#ifndef FAITHCAR_MSGS__SRV__DETAIL__KINEMARICS__STRUCT_H_
#define FAITHCAR_MSGS__SRV__DETAIL__KINEMARICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'kin_name'
#include "rosidl_runtime_c/string.h"
// Member 'src_pos'
// Member 'src_joints'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/Kinemarics in the package faithcar_msgs.
typedef struct faithcar_msgs__srv__Kinemarics_Request
{
  rosidl_runtime_c__String kin_name;
  rosidl_runtime_c__double__Sequence src_pos;
  rosidl_runtime_c__double__Sequence src_joints;
} faithcar_msgs__srv__Kinemarics_Request;

// Struct for a sequence of faithcar_msgs__srv__Kinemarics_Request.
typedef struct faithcar_msgs__srv__Kinemarics_Request__Sequence
{
  faithcar_msgs__srv__Kinemarics_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} faithcar_msgs__srv__Kinemarics_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'target_joints'
// Member 'target_pos'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/Kinemarics in the package faithcar_msgs.
typedef struct faithcar_msgs__srv__Kinemarics_Response
{
  rosidl_runtime_c__double__Sequence target_joints;
  rosidl_runtime_c__double__Sequence target_pos;
} faithcar_msgs__srv__Kinemarics_Response;

// Struct for a sequence of faithcar_msgs__srv__Kinemarics_Response.
typedef struct faithcar_msgs__srv__Kinemarics_Response__Sequence
{
  faithcar_msgs__srv__Kinemarics_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} faithcar_msgs__srv__Kinemarics_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FAITHCAR_MSGS__SRV__DETAIL__KINEMARICS__STRUCT_H_
