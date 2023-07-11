// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from faithcar_msgs:msg/TargetArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "faithcar_msgs/msg/detail/target_array__rosidl_typesupport_introspection_c.h"
#include "faithcar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "faithcar_msgs/msg/detail/target_array__functions.h"
#include "faithcar_msgs/msg/detail/target_array__struct.h"


// Include directives for member types
// Member `data`
#include "faithcar_msgs/msg/target.h"
// Member `data`
#include "faithcar_msgs/msg/detail/target__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  faithcar_msgs__msg__TargetArray__init(message_memory);
}

void faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_fini_function(void * message_memory)
{
  faithcar_msgs__msg__TargetArray__fini(message_memory);
}

size_t faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__size_function__TargetArray__data(
  const void * untyped_member)
{
  const faithcar_msgs__msg__Target__Sequence * member =
    (const faithcar_msgs__msg__Target__Sequence *)(untyped_member);
  return member->size;
}

const void * faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__get_const_function__TargetArray__data(
  const void * untyped_member, size_t index)
{
  const faithcar_msgs__msg__Target__Sequence * member =
    (const faithcar_msgs__msg__Target__Sequence *)(untyped_member);
  return &member->data[index];
}

void * faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__get_function__TargetArray__data(
  void * untyped_member, size_t index)
{
  faithcar_msgs__msg__Target__Sequence * member =
    (faithcar_msgs__msg__Target__Sequence *)(untyped_member);
  return &member->data[index];
}

void faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__fetch_function__TargetArray__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const faithcar_msgs__msg__Target * item =
    ((const faithcar_msgs__msg__Target *)
    faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__get_const_function__TargetArray__data(untyped_member, index));
  faithcar_msgs__msg__Target * value =
    (faithcar_msgs__msg__Target *)(untyped_value);
  *value = *item;
}

void faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__assign_function__TargetArray__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  faithcar_msgs__msg__Target * item =
    ((faithcar_msgs__msg__Target *)
    faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__get_function__TargetArray__data(untyped_member, index));
  const faithcar_msgs__msg__Target * value =
    (const faithcar_msgs__msg__Target *)(untyped_value);
  *item = *value;
}

bool faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__resize_function__TargetArray__data(
  void * untyped_member, size_t size)
{
  faithcar_msgs__msg__Target__Sequence * member =
    (faithcar_msgs__msg__Target__Sequence *)(untyped_member);
  faithcar_msgs__msg__Target__Sequence__fini(member);
  return faithcar_msgs__msg__Target__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(faithcar_msgs__msg__TargetArray, data),  // bytes offset in struct
    NULL,  // default value
    faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__size_function__TargetArray__data,  // size() function pointer
    faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__get_const_function__TargetArray__data,  // get_const(index) function pointer
    faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__get_function__TargetArray__data,  // get(index) function pointer
    faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__fetch_function__TargetArray__data,  // fetch(index, &value) function pointer
    faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__assign_function__TargetArray__data,  // assign(index, value) function pointer
    faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__resize_function__TargetArray__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_members = {
  "faithcar_msgs__msg",  // message namespace
  "TargetArray",  // message name
  1,  // number of fields
  sizeof(faithcar_msgs__msg__TargetArray),
  faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_member_array,  // message members
  faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_init_function,  // function to initialize message memory (memory has to be allocated)
  faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_type_support_handle = {
  0,
  &faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_faithcar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, faithcar_msgs, msg, TargetArray)() {
  faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, faithcar_msgs, msg, Target)();
  if (!faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_type_support_handle.typesupport_identifier) {
    faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &faithcar_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
