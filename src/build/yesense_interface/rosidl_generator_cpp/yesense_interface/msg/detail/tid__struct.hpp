// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yesense_interface:msg/Tid.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__TID__STRUCT_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__TID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yesense_interface__msg__Tid __attribute__((deprecated))
#else
# define DEPRECATED__yesense_interface__msg__Tid __declspec(deprecated)
#endif

namespace yesense_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Tid_
{
  using Type = Tid_<ContainerAllocator>;

  explicit Tid_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tid = 0;
    }
  }

  explicit Tid_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tid = 0;
    }
  }

  // field types and members
  using _tid_type =
    uint16_t;
  _tid_type tid;

  // setters for named parameter idiom
  Type & set__tid(
    const uint16_t & _arg)
  {
    this->tid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yesense_interface::msg::Tid_<ContainerAllocator> *;
  using ConstRawPtr =
    const yesense_interface::msg::Tid_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yesense_interface::msg::Tid_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yesense_interface::msg::Tid_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::Tid_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::Tid_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::Tid_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::Tid_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yesense_interface::msg::Tid_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yesense_interface::msg::Tid_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yesense_interface__msg__Tid
    std::shared_ptr<yesense_interface::msg::Tid_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yesense_interface__msg__Tid
    std::shared_ptr<yesense_interface::msg::Tid_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tid_ & other) const
  {
    if (this->tid != other.tid) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tid_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tid_

// alias to use template instance with default allocator
using Tid =
  yesense_interface::msg::Tid_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__TID__STRUCT_HPP_
