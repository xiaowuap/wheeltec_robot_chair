// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yesense_interface:msg/EulerAngle.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__EULER_ANGLE__STRUCT_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__EULER_ANGLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yesense_interface__msg__EulerAngle __attribute__((deprecated))
#else
# define DEPRECATED__yesense_interface__msg__EulerAngle __declspec(deprecated)
#endif

namespace yesense_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EulerAngle_
{
  using Type = EulerAngle_<ContainerAllocator>;

  explicit EulerAngle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pitch = 0.0f;
      this->roll = 0.0f;
      this->yaw = 0.0f;
    }
  }

  explicit EulerAngle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pitch = 0.0f;
      this->roll = 0.0f;
      this->yaw = 0.0f;
    }
  }

  // field types and members
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _roll_type =
    float;
  _roll_type roll;
  using _yaw_type =
    float;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yesense_interface::msg::EulerAngle_<ContainerAllocator> *;
  using ConstRawPtr =
    const yesense_interface::msg::EulerAngle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yesense_interface::msg::EulerAngle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yesense_interface::msg::EulerAngle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::EulerAngle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::EulerAngle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::EulerAngle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::EulerAngle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yesense_interface::msg::EulerAngle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yesense_interface::msg::EulerAngle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yesense_interface__msg__EulerAngle
    std::shared_ptr<yesense_interface::msg::EulerAngle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yesense_interface__msg__EulerAngle
    std::shared_ptr<yesense_interface::msg::EulerAngle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EulerAngle_ & other) const
  {
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const EulerAngle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EulerAngle_

// alias to use template instance with default allocator
using EulerAngle =
  yesense_interface::msg::EulerAngle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__EULER_ANGLE__STRUCT_HPP_
