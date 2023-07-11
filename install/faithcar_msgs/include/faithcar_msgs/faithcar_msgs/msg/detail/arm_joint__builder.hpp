// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from faithcar_msgs:msg/ArmJoint.idl
// generated code does not contain a copyright notice

#ifndef FAITHCAR_MSGS__MSG__DETAIL__ARM_JOINT__BUILDER_HPP_
#define FAITHCAR_MSGS__MSG__DETAIL__ARM_JOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "faithcar_msgs/msg/detail/arm_joint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace faithcar_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmJoint_joints
{
public:
  explicit Init_ArmJoint_joints(::faithcar_msgs::msg::ArmJoint & msg)
  : msg_(msg)
  {}
  ::faithcar_msgs::msg::ArmJoint joints(::faithcar_msgs::msg::ArmJoint::_joints_type arg)
  {
    msg_.joints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::faithcar_msgs::msg::ArmJoint msg_;
};

class Init_ArmJoint_angle
{
public:
  explicit Init_ArmJoint_angle(::faithcar_msgs::msg::ArmJoint & msg)
  : msg_(msg)
  {}
  Init_ArmJoint_joints angle(::faithcar_msgs::msg::ArmJoint::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_ArmJoint_joints(msg_);
  }

private:
  ::faithcar_msgs::msg::ArmJoint msg_;
};

class Init_ArmJoint_run_time
{
public:
  explicit Init_ArmJoint_run_time(::faithcar_msgs::msg::ArmJoint & msg)
  : msg_(msg)
  {}
  Init_ArmJoint_angle run_time(::faithcar_msgs::msg::ArmJoint::_run_time_type arg)
  {
    msg_.run_time = std::move(arg);
    return Init_ArmJoint_angle(msg_);
  }

private:
  ::faithcar_msgs::msg::ArmJoint msg_;
};

class Init_ArmJoint_id
{
public:
  Init_ArmJoint_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmJoint_run_time id(::faithcar_msgs::msg::ArmJoint::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ArmJoint_run_time(msg_);
  }

private:
  ::faithcar_msgs::msg::ArmJoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::faithcar_msgs::msg::ArmJoint>()
{
  return faithcar_msgs::msg::builder::Init_ArmJoint_id();
}

}  // namespace faithcar_msgs

#endif  // FAITHCAR_MSGS__MSG__DETAIL__ARM_JOINT__BUILDER_HPP_
