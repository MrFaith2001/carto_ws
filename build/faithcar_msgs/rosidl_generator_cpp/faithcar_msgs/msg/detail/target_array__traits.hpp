// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from faithcar_msgs:msg/TargetArray.idl
// generated code does not contain a copyright notice

#ifndef FAITHCAR_MSGS__MSG__DETAIL__TARGET_ARRAY__TRAITS_HPP_
#define FAITHCAR_MSGS__MSG__DETAIL__TARGET_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "faithcar_msgs/msg/detail/target_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "faithcar_msgs/msg/detail/target__traits.hpp"

namespace faithcar_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TargetArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        to_flow_style_yaml(item, out);
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
  const TargetArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetArray & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace faithcar_msgs

namespace rosidl_generator_traits
{

[[deprecated("use faithcar_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const faithcar_msgs::msg::TargetArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  faithcar_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use faithcar_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const faithcar_msgs::msg::TargetArray & msg)
{
  return faithcar_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<faithcar_msgs::msg::TargetArray>()
{
  return "faithcar_msgs::msg::TargetArray";
}

template<>
inline const char * name<faithcar_msgs::msg::TargetArray>()
{
  return "faithcar_msgs/msg/TargetArray";
}

template<>
struct has_fixed_size<faithcar_msgs::msg::TargetArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<faithcar_msgs::msg::TargetArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<faithcar_msgs::msg::TargetArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FAITHCAR_MSGS__MSG__DETAIL__TARGET_ARRAY__TRAITS_HPP_
