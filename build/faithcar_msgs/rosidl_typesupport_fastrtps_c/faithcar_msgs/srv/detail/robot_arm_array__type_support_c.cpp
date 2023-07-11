// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from faithcar_msgs:srv/RobotArmArray.idl
// generated code does not contain a copyright notice
#include "faithcar_msgs/srv/detail/robot_arm_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "faithcar_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "faithcar_msgs/srv/detail/robot_arm_array__struct.h"
#include "faithcar_msgs/srv/detail/robot_arm_array__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // apply
#include "rosidl_runtime_c/string_functions.h"  // apply

// forward declare type support functions


using _RobotArmArray_Request__ros_msg_type = faithcar_msgs__srv__RobotArmArray_Request;

static bool _RobotArmArray_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotArmArray_Request__ros_msg_type * ros_message = static_cast<const _RobotArmArray_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: apply
  {
    const rosidl_runtime_c__String * str = &ros_message->apply;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _RobotArmArray_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotArmArray_Request__ros_msg_type * ros_message = static_cast<_RobotArmArray_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: apply
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->apply.data) {
      rosidl_runtime_c__String__init(&ros_message->apply);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->apply,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'apply'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_faithcar_msgs
size_t get_serialized_size_faithcar_msgs__srv__RobotArmArray_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotArmArray_Request__ros_msg_type * ros_message = static_cast<const _RobotArmArray_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name apply
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->apply.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RobotArmArray_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_faithcar_msgs__srv__RobotArmArray_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_faithcar_msgs
size_t max_serialized_size_faithcar_msgs__srv__RobotArmArray_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: apply
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RobotArmArray_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_faithcar_msgs__srv__RobotArmArray_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotArmArray_Request = {
  "faithcar_msgs::srv",
  "RobotArmArray_Request",
  _RobotArmArray_Request__cdr_serialize,
  _RobotArmArray_Request__cdr_deserialize,
  _RobotArmArray_Request__get_serialized_size,
  _RobotArmArray_Request__max_serialized_size
};

static rosidl_message_type_support_t _RobotArmArray_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotArmArray_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, faithcar_msgs, srv, RobotArmArray_Request)() {
  return &_RobotArmArray_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "faithcar_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "faithcar_msgs/srv/detail/robot_arm_array__struct.h"
// already included above
// #include "faithcar_msgs/srv/detail/robot_arm_array__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // angles
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // angles

// forward declare type support functions


using _RobotArmArray_Response__ros_msg_type = faithcar_msgs__srv__RobotArmArray_Response;

static bool _RobotArmArray_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotArmArray_Response__ros_msg_type * ros_message = static_cast<const _RobotArmArray_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: angles
  {
    size_t size = ros_message->angles.size;
    auto array_ptr = ros_message->angles.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _RobotArmArray_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotArmArray_Response__ros_msg_type * ros_message = static_cast<_RobotArmArray_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: angles
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->angles.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->angles);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->angles, size)) {
      fprintf(stderr, "failed to create array for field 'angles'");
      return false;
    }
    auto array_ptr = ros_message->angles.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_faithcar_msgs
size_t get_serialized_size_faithcar_msgs__srv__RobotArmArray_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotArmArray_Response__ros_msg_type * ros_message = static_cast<const _RobotArmArray_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name angles
  {
    size_t array_size = ros_message->angles.size;
    auto array_ptr = ros_message->angles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobotArmArray_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_faithcar_msgs__srv__RobotArmArray_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_faithcar_msgs
size_t max_serialized_size_faithcar_msgs__srv__RobotArmArray_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: angles
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RobotArmArray_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_faithcar_msgs__srv__RobotArmArray_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotArmArray_Response = {
  "faithcar_msgs::srv",
  "RobotArmArray_Response",
  _RobotArmArray_Response__cdr_serialize,
  _RobotArmArray_Response__cdr_deserialize,
  _RobotArmArray_Response__get_serialized_size,
  _RobotArmArray_Response__max_serialized_size
};

static rosidl_message_type_support_t _RobotArmArray_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotArmArray_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, faithcar_msgs, srv, RobotArmArray_Response)() {
  return &_RobotArmArray_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "faithcar_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "faithcar_msgs/srv/robot_arm_array.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RobotArmArray__callbacks = {
  "faithcar_msgs::srv",
  "RobotArmArray",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, faithcar_msgs, srv, RobotArmArray_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, faithcar_msgs, srv, RobotArmArray_Response)(),
};

static rosidl_service_type_support_t RobotArmArray__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RobotArmArray__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, faithcar_msgs, srv, RobotArmArray)() {
  return &RobotArmArray__handle;
}

#if defined(__cplusplus)
}
#endif
