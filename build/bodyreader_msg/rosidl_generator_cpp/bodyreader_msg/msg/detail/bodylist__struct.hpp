// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyreader_msg:msg/Bodylist.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__BODYLIST__STRUCT_HPP_
#define BODYREADER_MSG__MSG__DETAIL__BODYLIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'bodies'
#include "bodyreader_msg/msg/detail/body__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bodyreader_msg__msg__Bodylist __attribute__((deprecated))
#else
# define DEPRECATED__bodyreader_msg__msg__Bodylist __declspec(deprecated)
#endif

namespace bodyreader_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Bodylist_
{
  using Type = Bodylist_<ContainerAllocator>;

  explicit Bodylist_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0;
      this->bodies.fill(bodyreader_msg::msg::Body_<ContainerAllocator>{_init});
    }
  }

  explicit Bodylist_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bodies(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0;
      this->bodies.fill(bodyreader_msg::msg::Body_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _count_type =
    int8_t;
  _count_type count;
  using _bodies_type =
    std::array<bodyreader_msg::msg::Body_<ContainerAllocator>, 6>;
  _bodies_type bodies;

  // setters for named parameter idiom
  Type & set__count(
    const int8_t & _arg)
  {
    this->count = _arg;
    return *this;
  }
  Type & set__bodies(
    const std::array<bodyreader_msg::msg::Body_<ContainerAllocator>, 6> & _arg)
  {
    this->bodies = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyreader_msg::msg::Bodylist_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyreader_msg::msg::Bodylist_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyreader_msg::msg::Bodylist_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyreader_msg::msg::Bodylist_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyreader_msg::msg::Bodylist_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyreader_msg::msg::Bodylist_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyreader_msg::msg::Bodylist_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyreader_msg::msg::Bodylist_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyreader_msg::msg::Bodylist_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyreader_msg::msg::Bodylist_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyreader_msg__msg__Bodylist
    std::shared_ptr<bodyreader_msg::msg::Bodylist_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyreader_msg__msg__Bodylist
    std::shared_ptr<bodyreader_msg::msg::Bodylist_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Bodylist_ & other) const
  {
    if (this->count != other.count) {
      return false;
    }
    if (this->bodies != other.bodies) {
      return false;
    }
    return true;
  }
  bool operator!=(const Bodylist_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Bodylist_

// alias to use template instance with default allocator
using Bodylist =
  bodyreader_msg::msg::Bodylist_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyreader_msg

#endif  // BODYREADER_MSG__MSG__DETAIL__BODYLIST__STRUCT_HPP_
