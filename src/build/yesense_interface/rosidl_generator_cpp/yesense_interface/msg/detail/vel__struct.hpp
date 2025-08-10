// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yesense_interface:msg/Vel.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__VEL__STRUCT_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__VEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yesense_interface__msg__Vel __attribute__((deprecated))
#else
# define DEPRECATED__yesense_interface__msg__Vel __declspec(deprecated)
#endif

namespace yesense_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Vel_
{
  using Type = Vel_<ContainerAllocator>;

  explicit Vel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel_e = 0.0f;
      this->vel_n = 0.0f;
      this->vel_u = 0.0f;
    }
  }

  explicit Vel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel_e = 0.0f;
      this->vel_n = 0.0f;
      this->vel_u = 0.0f;
    }
  }

  // field types and members
  using _vel_e_type =
    float;
  _vel_e_type vel_e;
  using _vel_n_type =
    float;
  _vel_n_type vel_n;
  using _vel_u_type =
    float;
  _vel_u_type vel_u;

  // setters for named parameter idiom
  Type & set__vel_e(
    const float & _arg)
  {
    this->vel_e = _arg;
    return *this;
  }
  Type & set__vel_n(
    const float & _arg)
  {
    this->vel_n = _arg;
    return *this;
  }
  Type & set__vel_u(
    const float & _arg)
  {
    this->vel_u = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yesense_interface::msg::Vel_<ContainerAllocator> *;
  using ConstRawPtr =
    const yesense_interface::msg::Vel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yesense_interface::msg::Vel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yesense_interface::msg::Vel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::Vel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::Vel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::Vel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::Vel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yesense_interface::msg::Vel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yesense_interface::msg::Vel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yesense_interface__msg__Vel
    std::shared_ptr<yesense_interface::msg::Vel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yesense_interface__msg__Vel
    std::shared_ptr<yesense_interface::msg::Vel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Vel_ & other) const
  {
    if (this->vel_e != other.vel_e) {
      return false;
    }
    if (this->vel_n != other.vel_n) {
      return false;
    }
    if (this->vel_u != other.vel_u) {
      return false;
    }
    return true;
  }
  bool operator!=(const Vel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Vel_

// alias to use template instance with default allocator
using Vel =
  yesense_interface::msg::Vel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__VEL__STRUCT_HPP_
