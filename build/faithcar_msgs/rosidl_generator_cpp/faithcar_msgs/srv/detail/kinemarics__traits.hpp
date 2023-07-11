// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from faithcar_msgs:srv/Kinemarics.idl
// generated code does not contain a copyright notice

#ifndef FAITHCAR_MSGS__SRV__DETAIL__KINEMARICS__TRAITS_HPP_
#define FAITHCAR_MSGS__SRV__DETAIL__KINEMARICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "faithcar_msgs/srv/detail/kinemarics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace faithcar_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Kinemarics_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: kin_name
  {
    out << "kin_name: ";
    rosidl_generator_traits::value_to_yaml(msg.kin_name, out);
    out << ", ";
  }

  // member: src_pos
  {
    if (msg.src_pos.size() == 0) {
      out << "src_pos: []";
    } else {
      out << "src_pos: [";
      size_t pending_items = msg.src_pos.size();
      for (auto item : msg.src_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: src_joints
  {
    if (msg.src_joints.size() == 0) {
      out << "src_joints: []";
    } else {
      out << "src_joints: [";
      size_t pending_items = msg.src_joints.size();
      for (auto item : msg.src_joints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Kinemarics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kin_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kin_name: ";
    rosidl_generator_traits::value_to_yaml(msg.kin_name, out);
    out << "\n";
  }

  // member: src_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.src_pos.size() == 0) {
      out << "src_pos: []\n";
    } else {
      out << "src_pos:\n";
      for (auto item : msg.src_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: src_joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.src_joints.size() == 0) {
      out << "src_joints: []\n";
    } else {
      out << "src_joints:\n";
      for (auto item : msg.src_joints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Kinemarics_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace faithcar_msgs

namespace rosidl_generator_traits
{

[[deprecated("use faithcar_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const faithcar_msgs::srv::Kinemarics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  faithcar_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use faithcar_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const faithcar_msgs::srv::Kinemarics_Request & msg)
{
  return faithcar_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<faithcar_msgs::srv::Kinemarics_Request>()
{
  return "faithcar_msgs::srv::Kinemarics_Request";
}

template<>
inline const char * name<faithcar_msgs::srv::Kinemarics_Request>()
{
  return "faithcar_msgs/srv/Kinemarics_Request";
}

template<>
struct has_fixed_size<faithcar_msgs::srv::Kinemarics_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<faithcar_msgs::srv::Kinemarics_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<faithcar_msgs::srv::Kinemarics_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace faithcar_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Kinemarics_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_joints
  {
    if (msg.target_joints.size() == 0) {
      out << "target_joints: []";
    } else {
      out << "target_joints: [";
      size_t pending_items = msg.target_joints.size();
      for (auto item : msg.target_joints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: target_pos
  {
    if (msg.target_pos.size() == 0) {
      out << "target_pos: []";
    } else {
      out << "target_pos: [";
      size_t pending_items = msg.target_pos.size();
      for (auto item : msg.target_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Kinemarics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_joints.size() == 0) {
      out << "target_joints: []\n";
    } else {
      out << "target_joints:\n";
      for (auto item : msg.target_joints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: target_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_pos.size() == 0) {
      out << "target_pos: []\n";
    } else {
      out << "target_pos:\n";
      for (auto item : msg.target_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Kinemarics_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace faithcar_msgs

namespace rosidl_generator_traits
{

[[deprecated("use faithcar_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const faithcar_msgs::srv::Kinemarics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  faithcar_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use faithcar_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const faithcar_msgs::srv::Kinemarics_Response & msg)
{
  return faithcar_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<faithcar_msgs::srv::Kinemarics_Response>()
{
  return "faithcar_msgs::srv::Kinemarics_Response";
}

template<>
inline const char * name<faithcar_msgs::srv::Kinemarics_Response>()
{
  return "faithcar_msgs/srv/Kinemarics_Response";
}

template<>
struct has_fixed_size<faithcar_msgs::srv::Kinemarics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<faithcar_msgs::srv::Kinemarics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<faithcar_msgs::srv::Kinemarics_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<faithcar_msgs::srv::Kinemarics>()
{
  return "faithcar_msgs::srv::Kinemarics";
}

template<>
inline const char * name<faithcar_msgs::srv::Kinemarics>()
{
  return "faithcar_msgs/srv/Kinemarics";
}

template<>
struct has_fixed_size<faithcar_msgs::srv::Kinemarics>
  : std::integral_constant<
    bool,
    has_fixed_size<faithcar_msgs::srv::Kinemarics_Request>::value &&
    has_fixed_size<faithcar_msgs::srv::Kinemarics_Response>::value
  >
{
};

template<>
struct has_bounded_size<faithcar_msgs::srv::Kinemarics>
  : std::integral_constant<
    bool,
    has_bounded_size<faithcar_msgs::srv::Kinemarics_Request>::value &&
    has_bounded_size<faithcar_msgs::srv::Kinemarics_Response>::value
  >
{
};

template<>
struct is_service<faithcar_msgs::srv::Kinemarics>
  : std::true_type
{
};

template<>
struct is_service_request<faithcar_msgs::srv::Kinemarics_Request>
  : std::true_type
{
};

template<>
struct is_service_response<faithcar_msgs::srv::Kinemarics_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FAITHCAR_MSGS__SRV__DETAIL__KINEMARICS__TRAITS_HPP_
