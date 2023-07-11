// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from faithcar_msgs:srv/Kinemarics.idl
// generated code does not contain a copyright notice
#include "faithcar_msgs/srv/detail/kinemarics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "faithcar_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "faithcar_msgs/srv/detail/kinemarics__struct.h"
#include "faithcar_msgs/srv/detail/kinemarics__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // src_joints, src_pos
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // src_joints, src_pos
#include "rosidl_runtime_c/string.h"  // kin_name
#include "rosidl_runtime_c/string_functions.h"  // kin_name

// forward declare type support functions


using _Kinemarics_Request__ros_msg_type = faithcar_msgs__srv__Kinemarics_Request;

static bool _Kinemarics_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Kinemarics_Request__ros_msg_type * ros_message = static_cast<const _Kinemarics_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: kin_name
  {
    const rosidl_runtime_c__String * str = &ros_message->kin_name;
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

  // Field name: src_pos
  {
    size_t size = ros_message->src_pos.size;
    auto array_ptr = ros_message->src_pos.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: src_joints
  {
    size_t size = ros_message->src_joints.size;
    auto array_ptr = ros_message->src_joints.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Kinemarics_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Kinemarics_Request__ros_msg_type * ros_message = static_cast<_Kinemarics_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: kin_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->kin_name.data) {
      rosidl_runtime_c__String__init(&ros_message->kin_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->kin_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'kin_name'\n");
      return false;
    }
  }

  // Field name: src_pos
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->src_pos.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->src_pos);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->src_pos, size)) {
      fprintf(stderr, "failed to create array for field 'src_pos'");
      return false;
    }
    auto array_ptr = ros_message->src_pos.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: src_joints
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->src_joints.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->src_joints);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->src_joints, size)) {
      fprintf(stderr, "failed to create array for field 'src_joints'");
      return false;
    }
    auto array_ptr = ros_message->src_joints.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_faithcar_msgs
size_t get_serialized_size_faithcar_msgs__srv__Kinemarics_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Kinemarics_Request__ros_msg_type * ros_message = static_cast<const _Kinemarics_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name kin_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->kin_name.size + 1);
  // field.name src_pos
  {
    size_t array_size = ros_message->src_pos.size;
    auto array_ptr = ros_message->src_pos.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name src_joints
  {
    size_t array_size = ros_message->src_joints.size;
    auto array_ptr = ros_message->src_joints.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Kinemarics_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_faithcar_msgs__srv__Kinemarics_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_faithcar_msgs
size_t max_serialized_size_faithcar_msgs__srv__Kinemarics_Request(
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

  // member: kin_name
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
  // member: src_pos
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: src_joints
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

static size_t _Kinemarics_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_faithcar_msgs__srv__Kinemarics_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Kinemarics_Request = {
  "faithcar_msgs::srv",
  "Kinemarics_Request",
  _Kinemarics_Request__cdr_serialize,
  _Kinemarics_Request__cdr_deserialize,
  _Kinemarics_Request__get_serialized_size,
  _Kinemarics_Request__max_serialized_size
};

static rosidl_message_type_support_t _Kinemarics_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Kinemarics_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, faithcar_msgs, srv, Kinemarics_Request)() {
  return &_Kinemarics_Request__type_support;
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
// #include "faithcar_msgs/srv/detail/kinemarics__struct.h"
// already included above
// #include "faithcar_msgs/srv/detail/kinemarics__functions.h"
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

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"  // target_joints, target_pos
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"  // target_joints, target_pos

// forward declare type support functions


using _Kinemarics_Response__ros_msg_type = faithcar_msgs__srv__Kinemarics_Response;

static bool _Kinemarics_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Kinemarics_Response__ros_msg_type * ros_message = static_cast<const _Kinemarics_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: target_joints
  {
    size_t size = ros_message->target_joints.size;
    auto array_ptr = ros_message->target_joints.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: target_pos
  {
    size_t size = ros_message->target_pos.size;
    auto array_ptr = ros_message->target_pos.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Kinemarics_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Kinemarics_Response__ros_msg_type * ros_message = static_cast<_Kinemarics_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: target_joints
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->target_joints.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->target_joints);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->target_joints, size)) {
      fprintf(stderr, "failed to create array for field 'target_joints'");
      return false;
    }
    auto array_ptr = ros_message->target_joints.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: target_pos
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->target_pos.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->target_pos);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->target_pos, size)) {
      fprintf(stderr, "failed to create array for field 'target_pos'");
      return false;
    }
    auto array_ptr = ros_message->target_pos.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_faithcar_msgs
size_t get_serialized_size_faithcar_msgs__srv__Kinemarics_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Kinemarics_Response__ros_msg_type * ros_message = static_cast<const _Kinemarics_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name target_joints
  {
    size_t array_size = ros_message->target_joints.size;
    auto array_ptr = ros_message->target_joints.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_pos
  {
    size_t array_size = ros_message->target_pos.size;
    auto array_ptr = ros_message->target_pos.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Kinemarics_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_faithcar_msgs__srv__Kinemarics_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_faithcar_msgs
size_t max_serialized_size_faithcar_msgs__srv__Kinemarics_Response(
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

  // member: target_joints
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: target_pos
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

static size_t _Kinemarics_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_faithcar_msgs__srv__Kinemarics_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Kinemarics_Response = {
  "faithcar_msgs::srv",
  "Kinemarics_Response",
  _Kinemarics_Response__cdr_serialize,
  _Kinemarics_Response__cdr_deserialize,
  _Kinemarics_Response__get_serialized_size,
  _Kinemarics_Response__max_serialized_size
};

static rosidl_message_type_support_t _Kinemarics_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Kinemarics_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, faithcar_msgs, srv, Kinemarics_Response)() {
  return &_Kinemarics_Response__type_support;
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
#include "faithcar_msgs/srv/kinemarics.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Kinemarics__callbacks = {
  "faithcar_msgs::srv",
  "Kinemarics",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, faithcar_msgs, srv, Kinemarics_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, faithcar_msgs, srv, Kinemarics_Response)(),
};

static rosidl_service_type_support_t Kinemarics__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Kinemarics__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, faithcar_msgs, srv, Kinemarics)() {
  return &Kinemarics__handle;
}

#if defined(__cplusplus)
}
#endif
