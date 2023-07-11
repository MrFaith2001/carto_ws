// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from faithcar_msgs:srv/Kinemarics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "faithcar_msgs/srv/detail/kinemarics__rosidl_typesupport_introspection_c.h"
#include "faithcar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "faithcar_msgs/srv/detail/kinemarics__functions.h"
#include "faithcar_msgs/srv/detail/kinemarics__struct.h"


// Include directives for member types
// Member `kin_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `src_pos`
// Member `src_joints`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__Kinemarics_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  faithcar_msgs__srv__Kinemarics_Request__init(message_memory);
}

void faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__Kinemarics_Request_fini_function(void * message_memory)
{
  faithcar_msgs__srv__Kinemarics_Request__fini(message_memory);
}

size_t faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__size_function__Kinemarics_Request__src_pos(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__get_const_function__Kinemarics_Request__src_pos(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__get_function__Kinemarics_Request__src_pos(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__fetch_function__Kinemarics_Request__src_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__get_const_function__Kinemarics_Request__src_pos(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__assign_function__Kinemarics_Request__src_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__get_function__Kinemarics_Request__src_pos(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__resize_function__Kinemarics_Request__src_pos(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__size_function__Kinemarics_Request__src_joints(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__get_const_function__Kinemarics_Request__src_joints(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__get_function__Kinemarics_Request__src_joints(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__fetch_function__Kinemarics_Request__src_joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__get_const_function__Kinemarics_Request__src_joints(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__assign_function__Kinemarics_Request__src_joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__get_function__Kinemarics_Request__src_joints(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__resize_function__Kinemarics_Request__src_joints(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__Kinemarics_Request_message_member_array[3] = {
  {
    "kin_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(faithcar_msgs__srv__Kinemarics_Request, kin_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "src_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(faithcar_msgs__srv__Kinemarics_Request, src_pos),  // bytes offset in struct
    NULL,  // default value
    faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__size_function__Kinemarics_Request__src_pos,  // size() function pointer
    faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__get_const_function__Kinemarics_Request__src_pos,  // get_const(index) function pointer
    faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__get_function__Kinemarics_Request__src_pos,  // get(index) function pointer
    faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__fetch_function__Kinemarics_Request__src_pos,  // fetch(index, &value) function pointer
    faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__assign_function__Kinemarics_Request__src_pos,  // assign(index, value) function pointer
    faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__resize_function__Kinemarics_Request__src_pos  // resize(index) function pointer
  },
  {
    "src_joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(faithcar_msgs__srv__Kinemarics_Request, src_joints),  // bytes offset in struct
    NULL,  // default value
    faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__size_function__Kinemarics_Request__src_joints,  // size() function pointer
    faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__get_const_function__Kinemarics_Request__src_joints,  // get_const(index) function pointer
    faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__get_function__Kinemarics_Request__src_joints,  // get(index) function pointer
    faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__fetch_function__Kinemarics_Request__src_joints,  // fetch(index, &value) function pointer
    faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__assign_function__Kinemarics_Request__src_joints,  // assign(index, value) function pointer
    faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__resize_function__Kinemarics_Request__src_joints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__Kinemarics_Request_message_members = {
  "faithcar_msgs__srv",  // message namespace
  "Kinemarics_Request",  // message name
  3,  // number of fields
  sizeof(faithcar_msgs__srv__Kinemarics_Request),
  faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__Kinemarics_Request_message_member_array,  // message members
  faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__Kinemarics_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__Kinemarics_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__Kinemarics_Request_message_type_support_handle = {
  0,
  &faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__Kinemarics_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_faithcar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, faithcar_msgs, srv, Kinemarics_Request)() {
  if (!faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__Kinemarics_Request_message_type_support_handle.typesupport_identifier) {
    faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__Kinemarics_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &faithcar_msgs__srv__Kinemarics_Request__rosidl_typesupport_introspection_c__Kinemarics_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "faithcar_msgs/srv/detail/kinemarics__rosidl_typesupport_introspection_c.h"
// already included above
// #include "faithcar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "faithcar_msgs/srv/detail/kinemarics__functions.h"
// already included above
// #include "faithcar_msgs/srv/detail/kinemarics__struct.h"


// Include directives for member types
// Member `target_joints`
// Member `target_pos`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__Kinemarics_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  faithcar_msgs__srv__Kinemarics_Response__init(message_memory);
}

void faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__Kinemarics_Response_fini_function(void * message_memory)
{
  faithcar_msgs__srv__Kinemarics_Response__fini(message_memory);
}

size_t faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__size_function__Kinemarics_Response__target_joints(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__get_const_function__Kinemarics_Response__target_joints(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__get_function__Kinemarics_Response__target_joints(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__fetch_function__Kinemarics_Response__target_joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__get_const_function__Kinemarics_Response__target_joints(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__assign_function__Kinemarics_Response__target_joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__get_function__Kinemarics_Response__target_joints(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__resize_function__Kinemarics_Response__target_joints(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__size_function__Kinemarics_Response__target_pos(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__get_const_function__Kinemarics_Response__target_pos(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__get_function__Kinemarics_Response__target_pos(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__fetch_function__Kinemarics_Response__target_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__get_const_function__Kinemarics_Response__target_pos(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__assign_function__Kinemarics_Response__target_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__get_function__Kinemarics_Response__target_pos(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__resize_function__Kinemarics_Response__target_pos(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__Kinemarics_Response_message_member_array[2] = {
  {
    "target_joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(faithcar_msgs__srv__Kinemarics_Response, target_joints),  // bytes offset in struct
    NULL,  // default value
    faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__size_function__Kinemarics_Response__target_joints,  // size() function pointer
    faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__get_const_function__Kinemarics_Response__target_joints,  // get_const(index) function pointer
    faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__get_function__Kinemarics_Response__target_joints,  // get(index) function pointer
    faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__fetch_function__Kinemarics_Response__target_joints,  // fetch(index, &value) function pointer
    faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__assign_function__Kinemarics_Response__target_joints,  // assign(index, value) function pointer
    faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__resize_function__Kinemarics_Response__target_joints  // resize(index) function pointer
  },
  {
    "target_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(faithcar_msgs__srv__Kinemarics_Response, target_pos),  // bytes offset in struct
    NULL,  // default value
    faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__size_function__Kinemarics_Response__target_pos,  // size() function pointer
    faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__get_const_function__Kinemarics_Response__target_pos,  // get_const(index) function pointer
    faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__get_function__Kinemarics_Response__target_pos,  // get(index) function pointer
    faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__fetch_function__Kinemarics_Response__target_pos,  // fetch(index, &value) function pointer
    faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__assign_function__Kinemarics_Response__target_pos,  // assign(index, value) function pointer
    faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__resize_function__Kinemarics_Response__target_pos  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__Kinemarics_Response_message_members = {
  "faithcar_msgs__srv",  // message namespace
  "Kinemarics_Response",  // message name
  2,  // number of fields
  sizeof(faithcar_msgs__srv__Kinemarics_Response),
  faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__Kinemarics_Response_message_member_array,  // message members
  faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__Kinemarics_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__Kinemarics_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__Kinemarics_Response_message_type_support_handle = {
  0,
  &faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__Kinemarics_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_faithcar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, faithcar_msgs, srv, Kinemarics_Response)() {
  if (!faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__Kinemarics_Response_message_type_support_handle.typesupport_identifier) {
    faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__Kinemarics_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &faithcar_msgs__srv__Kinemarics_Response__rosidl_typesupport_introspection_c__Kinemarics_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "faithcar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "faithcar_msgs/srv/detail/kinemarics__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers faithcar_msgs__srv__detail__kinemarics__rosidl_typesupport_introspection_c__Kinemarics_service_members = {
  "faithcar_msgs__srv",  // service namespace
  "Kinemarics",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // faithcar_msgs__srv__detail__kinemarics__rosidl_typesupport_introspection_c__Kinemarics_Request_message_type_support_handle,
  NULL  // response message
  // faithcar_msgs__srv__detail__kinemarics__rosidl_typesupport_introspection_c__Kinemarics_Response_message_type_support_handle
};

static rosidl_service_type_support_t faithcar_msgs__srv__detail__kinemarics__rosidl_typesupport_introspection_c__Kinemarics_service_type_support_handle = {
  0,
  &faithcar_msgs__srv__detail__kinemarics__rosidl_typesupport_introspection_c__Kinemarics_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, faithcar_msgs, srv, Kinemarics_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, faithcar_msgs, srv, Kinemarics_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_faithcar_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, faithcar_msgs, srv, Kinemarics)() {
  if (!faithcar_msgs__srv__detail__kinemarics__rosidl_typesupport_introspection_c__Kinemarics_service_type_support_handle.typesupport_identifier) {
    faithcar_msgs__srv__detail__kinemarics__rosidl_typesupport_introspection_c__Kinemarics_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)faithcar_msgs__srv__detail__kinemarics__rosidl_typesupport_introspection_c__Kinemarics_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, faithcar_msgs, srv, Kinemarics_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, faithcar_msgs, srv, Kinemarics_Response)()->data;
  }

  return &faithcar_msgs__srv__detail__kinemarics__rosidl_typesupport_introspection_c__Kinemarics_service_type_support_handle;
}
