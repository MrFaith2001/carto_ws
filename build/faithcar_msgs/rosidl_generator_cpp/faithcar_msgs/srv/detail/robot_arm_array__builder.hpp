// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from faithcar_msgs:srv/RobotArmArray.idl
// generated code does not contain a copyright notice

#ifndef FAITHCAR_MSGS__SRV__DETAIL__ROBOT_ARM_ARRAY__BUILDER_HPP_
#define FAITHCAR_MSGS__SRV__DETAIL__ROBOT_ARM_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "faithcar_msgs/srv/detail/robot_arm_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace faithcar_msgs
{

namespace srv
{

namespace builder
{

class Init_RobotArmArray_Request_apply
{
public:
  Init_RobotArmArray_Request_apply()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::faithcar_msgs::srv::RobotArmArray_Request apply(::faithcar_msgs::srv::RobotArmArray_Request::_apply_type arg)
  {
    msg_.apply = std::move(arg);
    return std::move(msg_);
  }

private:
  ::faithcar_msgs::srv::RobotArmArray_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::faithcar_msgs::srv::RobotArmArray_Request>()
{
  return faithcar_msgs::srv::builder::Init_RobotArmArray_Request_apply();
}

}  // namespace faithcar_msgs


namespace faithcar_msgs
{

namespace srv
{

namespace builder
{

class Init_RobotArmArray_Response_angles
{
public:
  Init_RobotArmArray_Response_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::faithcar_msgs::srv::RobotArmArray_Response angles(::faithcar_msgs::srv::RobotArmArray_Response::_angles_type arg)
  {
    msg_.angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::faithcar_msgs::srv::RobotArmArray_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::faithcar_msgs::srv::RobotArmArray_Response>()
{
  return faithcar_msgs::srv::builder::Init_RobotArmArray_Response_angles();
}

}  // namespace faithcar_msgs

#endif  // FAITHCAR_MSGS__SRV__DETAIL__ROBOT_ARM_ARRAY__BUILDER_HPP_
