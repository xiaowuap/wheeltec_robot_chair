// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yesense_interface:msg/EulerOnly.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__EULER_ONLY__STRUCT_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__EULER_ONLY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'tid'
#include "yesense_interface/msg/detail/tid__struct.hpp"
// Member 'euler'
#include "yesense_interface/msg/detail/euler_angle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__yesense_interface__msg__EulerOnly __attribute__((deprecated))
#else
# define DEPRECATED__yesense_interface__msg__EulerOnly __declspec(deprecated)
#endif

namespace yesense_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EulerOnly_
{
  using Type = EulerOnly_<ContainerAllocator>;

  explicit EulerOnly_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tid(_init),
    euler(_init)
  {
    (void)_init;
  }

  explicit EulerOnly_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tid(_alloc, _init),
    euler(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _tid_type =
    yesense_interface::msg::Tid_<ContainerAllocator>;
  _tid_type tid;
  using _euler_type =
    yesense_interface::msg::EulerAngle_<ContainerAllocator>;
  _euler_type euler;

  // setters for named parameter idiom
  Type & set__tid(
    const yesense_interface::msg::Tid_<ContainerAllocator> & _arg)
  {
    this->tid = _arg;
    return *this;
  }
  Type & set__euler(
    const yesense_interface::msg::EulerAngle_<ContainerAllocator> & _arg)
  {
    this->euler = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yesense_interface::msg::EulerOnly_<ContainerAllocator> *;
  using ConstRawPtr =
    const yesense_interface::msg::EulerOnly_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yesense_interface::msg::EulerOnly_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yesense_interface::msg::EulerOnly_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::EulerOnly_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::EulerOnly_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::EulerOnly_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::EulerOnly_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yesense_interface::msg::EulerOnly_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yesense_interface::msg::EulerOnly_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yesense_interface__msg__EulerOnly
    std::shared_ptr<yesense_interface::msg::EulerOnly_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yesense_interface__msg__EulerOnly
    std::shared_ptr<yesense_interface::msg::EulerOnly_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EulerOnly_ & other) const
  {
    if (this->tid != other.tid) {
      return false;
    }
    if (this->euler != other.euler) {
      return false;
    }
    return true;
  }
  bool operator!=(const EulerOnly_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EulerOnly_

// alias to use template instance with default allocator
using EulerOnly =
  yesense_interface::msg::EulerOnly_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__EULER_ONLY__STRUCT_HPP_
