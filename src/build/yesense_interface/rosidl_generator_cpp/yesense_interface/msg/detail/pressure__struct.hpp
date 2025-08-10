// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yesense_interface:msg/Pressure.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__PRESSURE__STRUCT_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__PRESSURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yesense_interface__msg__Pressure __attribute__((deprecated))
#else
# define DEPRECATED__yesense_interface__msg__Pressure __declspec(deprecated)
#endif

namespace yesense_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pressure_
{
  using Type = Pressure_<ContainerAllocator>;

  explicit Pressure_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->val = 0.0f;
    }
  }

  explicit Pressure_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->val = 0.0f;
    }
  }

  // field types and members
  using _val_type =
    float;
  _val_type val;

  // setters for named parameter idiom
  Type & set__val(
    const float & _arg)
  {
    this->val = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yesense_interface::msg::Pressure_<ContainerAllocator> *;
  using ConstRawPtr =
    const yesense_interface::msg::Pressure_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yesense_interface::msg::Pressure_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yesense_interface::msg::Pressure_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::Pressure_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::Pressure_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::Pressure_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::Pressure_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yesense_interface::msg::Pressure_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yesense_interface::msg::Pressure_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yesense_interface__msg__Pressure
    std::shared_ptr<yesense_interface::msg::Pressure_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yesense_interface__msg__Pressure
    std::shared_ptr<yesense_interface::msg::Pressure_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pressure_ & other) const
  {
    if (this->val != other.val) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pressure_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pressure_

// alias to use template instance with default allocator
using Pressure =
  yesense_interface::msg::Pressure_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__PRESSURE__STRUCT_HPP_
