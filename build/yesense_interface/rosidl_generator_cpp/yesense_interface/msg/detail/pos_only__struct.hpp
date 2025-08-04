// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yesense_interface:msg/PosOnly.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__POS_ONLY__STRUCT_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__POS_ONLY__STRUCT_HPP_

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
// Member 'pos'
#include "yesense_interface/msg/detail/gnss_pos__struct.hpp"
// Member 'status'
#include "yesense_interface/msg/detail/nav_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__yesense_interface__msg__PosOnly __attribute__((deprecated))
#else
# define DEPRECATED__yesense_interface__msg__PosOnly __declspec(deprecated)
#endif

namespace yesense_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PosOnly_
{
  using Type = PosOnly_<ContainerAllocator>;

  explicit PosOnly_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tid(_init),
    pos(_init),
    status(_init)
  {
    (void)_init;
  }

  explicit PosOnly_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tid(_alloc, _init),
    pos(_alloc, _init),
    status(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _tid_type =
    yesense_interface::msg::Tid_<ContainerAllocator>;
  _tid_type tid;
  using _pos_type =
    yesense_interface::msg::GnssPos_<ContainerAllocator>;
  _pos_type pos;
  using _status_type =
    yesense_interface::msg::NavStatus_<ContainerAllocator>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__tid(
    const yesense_interface::msg::Tid_<ContainerAllocator> & _arg)
  {
    this->tid = _arg;
    return *this;
  }
  Type & set__pos(
    const yesense_interface::msg::GnssPos_<ContainerAllocator> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__status(
    const yesense_interface::msg::NavStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yesense_interface::msg::PosOnly_<ContainerAllocator> *;
  using ConstRawPtr =
    const yesense_interface::msg::PosOnly_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yesense_interface::msg::PosOnly_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yesense_interface::msg::PosOnly_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::PosOnly_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::PosOnly_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::PosOnly_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::PosOnly_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yesense_interface::msg::PosOnly_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yesense_interface::msg::PosOnly_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yesense_interface__msg__PosOnly
    std::shared_ptr<yesense_interface::msg::PosOnly_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yesense_interface__msg__PosOnly
    std::shared_ptr<yesense_interface::msg::PosOnly_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PosOnly_ & other) const
  {
    if (this->tid != other.tid) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const PosOnly_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PosOnly_

// alias to use template instance with default allocator
using PosOnly =
  yesense_interface::msg::PosOnly_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__POS_ONLY__STRUCT_HPP_
