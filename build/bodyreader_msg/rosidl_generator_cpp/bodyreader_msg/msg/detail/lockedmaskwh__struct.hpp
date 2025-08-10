// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyreader_msg:msg/Lockedmaskwh.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__LOCKEDMASKWH__STRUCT_HPP_
#define BODYREADER_MSG__MSG__DETAIL__LOCKEDMASKWH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bodyreader_msg__msg__Lockedmaskwh __attribute__((deprecated))
#else
# define DEPRECATED__bodyreader_msg__msg__Lockedmaskwh __declspec(deprecated)
#endif

namespace bodyreader_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Lockedmaskwh_
{
  using Type = Lockedmaskwh_<ContainerAllocator>;

  explicit Lockedmaskwh_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width_l = 0l;
      this->width_r = 0l;
      this->height_t = 0l;
      this->height_b = 0l;
    }
  }

  explicit Lockedmaskwh_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width_l = 0l;
      this->width_r = 0l;
      this->height_t = 0l;
      this->height_b = 0l;
    }
  }

  // field types and members
  using _width_l_type =
    int32_t;
  _width_l_type width_l;
  using _width_r_type =
    int32_t;
  _width_r_type width_r;
  using _height_t_type =
    int32_t;
  _height_t_type height_t;
  using _height_b_type =
    int32_t;
  _height_b_type height_b;

  // setters for named parameter idiom
  Type & set__width_l(
    const int32_t & _arg)
  {
    this->width_l = _arg;
    return *this;
  }
  Type & set__width_r(
    const int32_t & _arg)
  {
    this->width_r = _arg;
    return *this;
  }
  Type & set__height_t(
    const int32_t & _arg)
  {
    this->height_t = _arg;
    return *this;
  }
  Type & set__height_b(
    const int32_t & _arg)
  {
    this->height_b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyreader_msg::msg::Lockedmaskwh_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyreader_msg::msg::Lockedmaskwh_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyreader_msg::msg::Lockedmaskwh_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyreader_msg::msg::Lockedmaskwh_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyreader_msg::msg::Lockedmaskwh_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyreader_msg::msg::Lockedmaskwh_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyreader_msg::msg::Lockedmaskwh_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyreader_msg::msg::Lockedmaskwh_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyreader_msg::msg::Lockedmaskwh_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyreader_msg::msg::Lockedmaskwh_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyreader_msg__msg__Lockedmaskwh
    std::shared_ptr<bodyreader_msg::msg::Lockedmaskwh_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyreader_msg__msg__Lockedmaskwh
    std::shared_ptr<bodyreader_msg::msg::Lockedmaskwh_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Lockedmaskwh_ & other) const
  {
    if (this->width_l != other.width_l) {
      return false;
    }
    if (this->width_r != other.width_r) {
      return false;
    }
    if (this->height_t != other.height_t) {
      return false;
    }
    if (this->height_b != other.height_b) {
      return false;
    }
    return true;
  }
  bool operator!=(const Lockedmaskwh_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Lockedmaskwh_

// alias to use template instance with default allocator
using Lockedmaskwh =
  bodyreader_msg::msg::Lockedmaskwh_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyreader_msg

#endif  // BODYREADER_MSG__MSG__DETAIL__LOCKEDMASKWH__STRUCT_HPP_
