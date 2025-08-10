// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wheeltec_mic_msg:msg/MotionControl.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__MSG__DETAIL__MOTION_CONTROL__STRUCT_HPP_
#define WHEELTEC_MIC_MSG__MSG__DETAIL__MOTION_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wheeltec_mic_msg__msg__MotionControl __attribute__((deprecated))
#else
# define DEPRECATED__wheeltec_mic_msg__msg__MotionControl __declspec(deprecated)
#endif

namespace wheeltec_mic_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionControl_
{
  using Type = MotionControl_<ContainerAllocator>;

  explicit MotionControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_x = 0.0f;
      this->linear_y = 0.0f;
      this->angular_z = 0.0f;
      this->cmd_vel_flag = 0;
      this->follow_flag = 0;
      this->goal_reached_flag = 0;
    }
  }

  explicit MotionControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_x = 0.0f;
      this->linear_y = 0.0f;
      this->angular_z = 0.0f;
      this->cmd_vel_flag = 0;
      this->follow_flag = 0;
      this->goal_reached_flag = 0;
    }
  }

  // field types and members
  using _linear_x_type =
    float;
  _linear_x_type linear_x;
  using _linear_y_type =
    float;
  _linear_y_type linear_y;
  using _angular_z_type =
    float;
  _angular_z_type angular_z;
  using _cmd_vel_flag_type =
    int8_t;
  _cmd_vel_flag_type cmd_vel_flag;
  using _follow_flag_type =
    int8_t;
  _follow_flag_type follow_flag;
  using _goal_reached_flag_type =
    int8_t;
  _goal_reached_flag_type goal_reached_flag;

  // setters for named parameter idiom
  Type & set__linear_x(
    const float & _arg)
  {
    this->linear_x = _arg;
    return *this;
  }
  Type & set__linear_y(
    const float & _arg)
  {
    this->linear_y = _arg;
    return *this;
  }
  Type & set__angular_z(
    const float & _arg)
  {
    this->angular_z = _arg;
    return *this;
  }
  Type & set__cmd_vel_flag(
    const int8_t & _arg)
  {
    this->cmd_vel_flag = _arg;
    return *this;
  }
  Type & set__follow_flag(
    const int8_t & _arg)
  {
    this->follow_flag = _arg;
    return *this;
  }
  Type & set__goal_reached_flag(
    const int8_t & _arg)
  {
    this->goal_reached_flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wheeltec_mic_msg::msg::MotionControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const wheeltec_mic_msg::msg::MotionControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wheeltec_mic_msg::msg::MotionControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wheeltec_mic_msg::msg::MotionControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wheeltec_mic_msg::msg::MotionControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wheeltec_mic_msg::msg::MotionControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wheeltec_mic_msg::msg::MotionControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wheeltec_mic_msg::msg::MotionControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wheeltec_mic_msg::msg::MotionControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wheeltec_mic_msg::msg::MotionControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wheeltec_mic_msg__msg__MotionControl
    std::shared_ptr<wheeltec_mic_msg::msg::MotionControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wheeltec_mic_msg__msg__MotionControl
    std::shared_ptr<wheeltec_mic_msg::msg::MotionControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionControl_ & other) const
  {
    if (this->linear_x != other.linear_x) {
      return false;
    }
    if (this->linear_y != other.linear_y) {
      return false;
    }
    if (this->angular_z != other.angular_z) {
      return false;
    }
    if (this->cmd_vel_flag != other.cmd_vel_flag) {
      return false;
    }
    if (this->follow_flag != other.follow_flag) {
      return false;
    }
    if (this->goal_reached_flag != other.goal_reached_flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionControl_

// alias to use template instance with default allocator
using MotionControl =
  wheeltec_mic_msg::msg::MotionControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wheeltec_mic_msg

#endif  // WHEELTEC_MIC_MSG__MSG__DETAIL__MOTION_CONTROL__STRUCT_HPP_
