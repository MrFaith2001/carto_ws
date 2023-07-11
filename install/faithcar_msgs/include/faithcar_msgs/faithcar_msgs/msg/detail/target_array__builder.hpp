// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from faithcar_msgs:msg/TargetArray.idl
// generated code does not contain a copyright notice

#ifndef FAITHCAR_MSGS__MSG__DETAIL__TARGET_ARRAY__BUILDER_HPP_
#define FAITHCAR_MSGS__MSG__DETAIL__TARGET_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "faithcar_msgs/msg/detail/target_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace faithcar_msgs
{

namespace msg
{

namespace builder
{

class Init_TargetArray_data
{
public:
  Init_TargetArray_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::faithcar_msgs::msg::TargetArray data(::faithcar_msgs::msg::TargetArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::faithcar_msgs::msg::TargetArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::faithcar_msgs::msg::TargetArray>()
{
  return faithcar_msgs::msg::builder::Init_TargetArray_data();
}

}  // namespace faithcar_msgs

#endif  // FAITHCAR_MSGS__MSG__DETAIL__TARGET_ARRAY__BUILDER_HPP_
