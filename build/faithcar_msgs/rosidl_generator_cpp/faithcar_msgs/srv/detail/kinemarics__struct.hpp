// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from faithcar_msgs:srv/Kinemarics.idl
// generated code does not contain a copyright notice

#ifndef FAITHCAR_MSGS__SRV__DETAIL__KINEMARICS__STRUCT_HPP_
#define FAITHCAR_MSGS__SRV__DETAIL__KINEMARICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__faithcar_msgs__srv__Kinemarics_Request __attribute__((deprecated))
#else
# define DEPRECATED__faithcar_msgs__srv__Kinemarics_Request __declspec(deprecated)
#endif

namespace faithcar_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Kinemarics_Request_
{
  using Type = Kinemarics_Request_<ContainerAllocator>;

  explicit Kinemarics_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kin_name = "";
    }
  }

  explicit Kinemarics_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : kin_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kin_name = "";
    }
  }

  // field types and members
  using _kin_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _kin_name_type kin_name;
  using _src_pos_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _src_pos_type src_pos;
  using _src_joints_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _src_joints_type src_joints;

  // setters for named parameter idiom
  Type & set__kin_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->kin_name = _arg;
    return *this;
  }
  Type & set__src_pos(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->src_pos = _arg;
    return *this;
  }
  Type & set__src_joints(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->src_joints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    faithcar_msgs::srv::Kinemarics_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const faithcar_msgs::srv::Kinemarics_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<faithcar_msgs::srv::Kinemarics_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<faithcar_msgs::srv::Kinemarics_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      faithcar_msgs::srv::Kinemarics_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<faithcar_msgs::srv::Kinemarics_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      faithcar_msgs::srv::Kinemarics_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<faithcar_msgs::srv::Kinemarics_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<faithcar_msgs::srv::Kinemarics_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<faithcar_msgs::srv::Kinemarics_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__faithcar_msgs__srv__Kinemarics_Request
    std::shared_ptr<faithcar_msgs::srv::Kinemarics_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__faithcar_msgs__srv__Kinemarics_Request
    std::shared_ptr<faithcar_msgs::srv::Kinemarics_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Kinemarics_Request_ & other) const
  {
    if (this->kin_name != other.kin_name) {
      return false;
    }
    if (this->src_pos != other.src_pos) {
      return false;
    }
    if (this->src_joints != other.src_joints) {
      return false;
    }
    return true;
  }
  bool operator!=(const Kinemarics_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Kinemarics_Request_

// alias to use template instance with default allocator
using Kinemarics_Request =
  faithcar_msgs::srv::Kinemarics_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace faithcar_msgs


#ifndef _WIN32
# define DEPRECATED__faithcar_msgs__srv__Kinemarics_Response __attribute__((deprecated))
#else
# define DEPRECATED__faithcar_msgs__srv__Kinemarics_Response __declspec(deprecated)
#endif

namespace faithcar_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Kinemarics_Response_
{
  using Type = Kinemarics_Response_<ContainerAllocator>;

  explicit Kinemarics_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Kinemarics_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _target_joints_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _target_joints_type target_joints;
  using _target_pos_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _target_pos_type target_pos;

  // setters for named parameter idiom
  Type & set__target_joints(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->target_joints = _arg;
    return *this;
  }
  Type & set__target_pos(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->target_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    faithcar_msgs::srv::Kinemarics_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const faithcar_msgs::srv::Kinemarics_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<faithcar_msgs::srv::Kinemarics_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<faithcar_msgs::srv::Kinemarics_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      faithcar_msgs::srv::Kinemarics_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<faithcar_msgs::srv::Kinemarics_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      faithcar_msgs::srv::Kinemarics_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<faithcar_msgs::srv::Kinemarics_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<faithcar_msgs::srv::Kinemarics_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<faithcar_msgs::srv::Kinemarics_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__faithcar_msgs__srv__Kinemarics_Response
    std::shared_ptr<faithcar_msgs::srv::Kinemarics_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__faithcar_msgs__srv__Kinemarics_Response
    std::shared_ptr<faithcar_msgs::srv::Kinemarics_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Kinemarics_Response_ & other) const
  {
    if (this->target_joints != other.target_joints) {
      return false;
    }
    if (this->target_pos != other.target_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const Kinemarics_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Kinemarics_Response_

// alias to use template instance with default allocator
using Kinemarics_Response =
  faithcar_msgs::srv::Kinemarics_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace faithcar_msgs

namespace faithcar_msgs
{

namespace srv
{

struct Kinemarics
{
  using Request = faithcar_msgs::srv::Kinemarics_Request;
  using Response = faithcar_msgs::srv::Kinemarics_Response;
};

}  // namespace srv

}  // namespace faithcar_msgs

#endif  // FAITHCAR_MSGS__SRV__DETAIL__KINEMARICS__STRUCT_HPP_
