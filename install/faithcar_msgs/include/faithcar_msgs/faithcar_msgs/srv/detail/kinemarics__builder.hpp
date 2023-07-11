// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from faithcar_msgs:srv/Kinemarics.idl
// generated code does not contain a copyright notice

#ifndef FAITHCAR_MSGS__SRV__DETAIL__KINEMARICS__BUILDER_HPP_
#define FAITHCAR_MSGS__SRV__DETAIL__KINEMARICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "faithcar_msgs/srv/detail/kinemarics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace faithcar_msgs
{

namespace srv
{

namespace builder
{

class Init_Kinemarics_Request_src_joints
{
public:
  explicit Init_Kinemarics_Request_src_joints(::faithcar_msgs::srv::Kinemarics_Request & msg)
  : msg_(msg)
  {}
  ::faithcar_msgs::srv::Kinemarics_Request src_joints(::faithcar_msgs::srv::Kinemarics_Request::_src_joints_type arg)
  {
    msg_.src_joints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::faithcar_msgs::srv::Kinemarics_Request msg_;
};

class Init_Kinemarics_Request_src_pos
{
public:
  explicit Init_Kinemarics_Request_src_pos(::faithcar_msgs::srv::Kinemarics_Request & msg)
  : msg_(msg)
  {}
  Init_Kinemarics_Request_src_joints src_pos(::faithcar_msgs::srv::Kinemarics_Request::_src_pos_type arg)
  {
    msg_.src_pos = std::move(arg);
    return Init_Kinemarics_Request_src_joints(msg_);
  }

private:
  ::faithcar_msgs::srv::Kinemarics_Request msg_;
};

class Init_Kinemarics_Request_kin_name
{
public:
  Init_Kinemarics_Request_kin_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Kinemarics_Request_src_pos kin_name(::faithcar_msgs::srv::Kinemarics_Request::_kin_name_type arg)
  {
    msg_.kin_name = std::move(arg);
    return Init_Kinemarics_Request_src_pos(msg_);
  }

private:
  ::faithcar_msgs::srv::Kinemarics_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::faithcar_msgs::srv::Kinemarics_Request>()
{
  return faithcar_msgs::srv::builder::Init_Kinemarics_Request_kin_name();
}

}  // namespace faithcar_msgs


namespace faithcar_msgs
{

namespace srv
{

namespace builder
{

class Init_Kinemarics_Response_target_pos
{
public:
  explicit Init_Kinemarics_Response_target_pos(::faithcar_msgs::srv::Kinemarics_Response & msg)
  : msg_(msg)
  {}
  ::faithcar_msgs::srv::Kinemarics_Response target_pos(::faithcar_msgs::srv::Kinemarics_Response::_target_pos_type arg)
  {
    msg_.target_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::faithcar_msgs::srv::Kinemarics_Response msg_;
};

class Init_Kinemarics_Response_target_joints
{
public:
  Init_Kinemarics_Response_target_joints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Kinemarics_Response_target_pos target_joints(::faithcar_msgs::srv::Kinemarics_Response::_target_joints_type arg)
  {
    msg_.target_joints = std::move(arg);
    return Init_Kinemarics_Response_target_pos(msg_);
  }

private:
  ::faithcar_msgs::srv::Kinemarics_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::faithcar_msgs::srv::Kinemarics_Response>()
{
  return faithcar_msgs::srv::builder::Init_Kinemarics_Response_target_joints();
}

}  // namespace faithcar_msgs

#endif  // FAITHCAR_MSGS__SRV__DETAIL__KINEMARICS__BUILDER_HPP_
