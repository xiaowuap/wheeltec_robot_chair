// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yesense_interface:msg/NavMinUtc.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__NAV_MIN_UTC__STRUCT_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__NAV_MIN_UTC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'nav_basic'
#include "yesense_interface/msg/detail/nav_min__struct.hpp"
// Member 'utc'
#include "yesense_interface/msg/detail/utc__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__yesense_interface__msg__NavMinUtc __attribute__((deprecated))
#else
# define DEPRECATED__yesense_interface__msg__NavMinUtc __declspec(deprecated)
#endif

namespace yesense_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavMinUtc_
{
  using Type = NavMinUtc_<ContainerAllocator>;

  explicit NavMinUtc_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nav_basic(_init),
    utc(_init)
  {
    (void)_init;
  }

  explicit NavMinUtc_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nav_basic(_alloc, _init),
    utc(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _nav_basic_type =
    yesense_interface::msg::NavMin_<ContainerAllocator>;
  _nav_basic_type nav_basic;
  using _utc_type =
    yesense_interface::msg::Utc_<ContainerAllocator>;
  _utc_type utc;

  // setters for named parameter idiom
  Type & set__nav_basic(
    const yesense_interface::msg::NavMin_<ContainerAllocator> & _arg)
  {
    this->nav_basic = _arg;
    return *this;
  }
  Type & set__utc(
    const yesense_interface::msg::Utc_<ContainerAllocator> & _arg)
  {
    this->utc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yesense_interface::msg::NavMinUtc_<ContainerAllocator> *;
  using ConstRawPtr =
    const yesense_interface::msg::NavMinUtc_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yesense_interface::msg::NavMinUtc_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yesense_interface::msg::NavMinUtc_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::NavMinUtc_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::NavMinUtc_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yesense_interface::msg::NavMinUtc_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yesense_interface::msg::NavMinUtc_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yesense_interface::msg::NavMinUtc_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yesense_interface::msg::NavMinUtc_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yesense_interface__msg__NavMinUtc
    std::shared_ptr<yesense_interface::msg::NavMinUtc_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yesense_interface__msg__NavMinUtc
    std::shared_ptr<yesense_interface::msg::NavMinUtc_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavMinUtc_ & other) const
  {
    if (this->nav_basic != other.nav_basic) {
      return false;
    }
    if (this->utc != other.utc) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavMinUtc_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavMinUtc_

// alias to use template instance with default allocator
using NavMinUtc =
  yesense_interface::msg::NavMinUtc_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__NAV_MIN_UTC__STRUCT_HPP_
