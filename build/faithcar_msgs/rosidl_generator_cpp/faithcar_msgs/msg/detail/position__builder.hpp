// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from faithcar_msgs:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef FAITHCAR_MSGS__MSG__DETAIL__POSITION__BUILDER_HPP_
#define FAITHCAR_MSGS__MSG__DETAIL__POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "faithcar_msgs/msg/detail/position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace faithcar_msgs
{

namespace msg
{

namespace builder
{

class Init_Position_distance
{
public:
  explicit Init_Position_distance(::faithcar_msgs::msg::Position & msg)
  : msg_(msg)
  {}
  ::faithcar_msgs::msg::Position distance(::faithcar_msgs::msg::Position::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::faithcar_msgs::msg::Position msg_;
};

class Init_Position_angley
{
public:
  explicit Init_Position_angley(::faithcar_msgs::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_distance angley(::faithcar_msgs::msg::Position::_angley_type arg)
  {
    msg_.angley = std::move(arg);
    return Init_Position_distance(msg_);
  }

private:
  ::faithcar_msgs::msg::Position msg_;
};

class Init_Position_anglex
{
public:
  Init_Position_anglex()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Position_angley anglex(::faithcar_msgs::msg::Position::_anglex_type arg)
  {
    msg_.anglex = std::move(arg);
    return Init_Position_angley(msg_);
  }

private:
  ::faithcar_msgs::msg::Position msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::faithcar_msgs::msg::Position>()
{
  return faithcar_msgs::msg::builder::Init_Position_anglex();
}

}  // namespace faithcar_msgs

#endif  // FAITHCAR_MSGS__MSG__DETAIL__POSITION__BUILDER_HPP_
