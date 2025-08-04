// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wheeltec_robot_msg:msg/Supersonic.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_ROBOT_MSG__MSG__DETAIL__SUPERSONIC__STRUCT_HPP_
#define WHEELTEC_ROBOT_MSG__MSG__DETAIL__SUPERSONIC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wheeltec_robot_msg__msg__Supersonic __attribute__((deprecated))
#else
# define DEPRECATED__wheeltec_robot_msg__msg__Supersonic __declspec(deprecated)
#endif

namespace wheeltec_robot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Supersonic_
{
  using Type = Supersonic_<ContainerAllocator>;

  explicit Supersonic_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_a = 0.0f;
      this->distance_b = 0.0f;
      this->distance_c = 0.0f;
      this->distance_d = 0.0f;
      this->distance_e = 0.0f;
      this->distance_f = 0.0f;
      this->distance_g = 0.0f;
      this->distance_h = 0.0f;
    }
  }

  explicit Supersonic_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_a = 0.0f;
      this->distance_b = 0.0f;
      this->distance_c = 0.0f;
      this->distance_d = 0.0f;
      this->distance_e = 0.0f;
      this->distance_f = 0.0f;
      this->distance_g = 0.0f;
      this->distance_h = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _distance_a_type =
    float;
  _distance_a_type distance_a;
  using _distance_b_type =
    float;
  _distance_b_type distance_b;
  using _distance_c_type =
    float;
  _distance_c_type distance_c;
  using _distance_d_type =
    float;
  _distance_d_type distance_d;
  using _distance_e_type =
    float;
  _distance_e_type distance_e;
  using _distance_f_type =
    float;
  _distance_f_type distance_f;
  using _distance_g_type =
    float;
  _distance_g_type distance_g;
  using _distance_h_type =
    float;
  _distance_h_type distance_h;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__distance_a(
    const float & _arg)
  {
    this->distance_a = _arg;
    return *this;
  }
  Type & set__distance_b(
    const float & _arg)
  {
    this->distance_b = _arg;
    return *this;
  }
  Type & set__distance_c(
    const float & _arg)
  {
    this->distance_c = _arg;
    return *this;
  }
  Type & set__distance_d(
    const float & _arg)
  {
    this->distance_d = _arg;
    return *this;
  }
  Type & set__distance_e(
    const float & _arg)
  {
    this->distance_e = _arg;
    return *this;
  }
  Type & set__distance_f(
    const float & _arg)
  {
    this->distance_f = _arg;
    return *this;
  }
  Type & set__distance_g(
    const float & _arg)
  {
    this->distance_g = _arg;
    return *this;
  }
  Type & set__distance_h(
    const float & _arg)
  {
    this->distance_h = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wheeltec_robot_msg::msg::Supersonic_<ContainerAllocator> *;
  using ConstRawPtr =
    const wheeltec_robot_msg::msg::Supersonic_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wheeltec_robot_msg::msg::Supersonic_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wheeltec_robot_msg::msg::Supersonic_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wheeltec_robot_msg::msg::Supersonic_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wheeltec_robot_msg::msg::Supersonic_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wheeltec_robot_msg::msg::Supersonic_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wheeltec_robot_msg::msg::Supersonic_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wheeltec_robot_msg::msg::Supersonic_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wheeltec_robot_msg::msg::Supersonic_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wheeltec_robot_msg__msg__Supersonic
    std::shared_ptr<wheeltec_robot_msg::msg::Supersonic_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wheeltec_robot_msg__msg__Supersonic
    std::shared_ptr<wheeltec_robot_msg::msg::Supersonic_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Supersonic_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->distance_a != other.distance_a) {
      return false;
    }
    if (this->distance_b != other.distance_b) {
      return false;
    }
    if (this->distance_c != other.distance_c) {
      return false;
    }
    if (this->distance_d != other.distance_d) {
      return false;
    }
    if (this->distance_e != other.distance_e) {
      return false;
    }
    if (this->distance_f != other.distance_f) {
      return false;
    }
    if (this->distance_g != other.distance_g) {
      return false;
    }
    if (this->distance_h != other.distance_h) {
      return false;
    }
    return true;
  }
  bool operator!=(const Supersonic_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Supersonic_

// alias to use template instance with default allocator
using Supersonic =
  wheeltec_robot_msg::msg::Supersonic_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wheeltec_robot_msg

#endif  // WHEELTEC_ROBOT_MSG__MSG__DETAIL__SUPERSONIC__STRUCT_HPP_
