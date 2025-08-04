// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyreader_msg:msg/Joint.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__JOINT__STRUCT_HPP_
#define BODYREADER_MSG__MSG__DETAIL__JOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'depthposition'
#include "bodyreader_msg/msg/detail/vector2f__struct.hpp"
// Member 'worldposition'
#include "bodyreader_msg/msg/detail/vector3f__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bodyreader_msg__msg__Joint __attribute__((deprecated))
#else
# define DEPRECATED__bodyreader_msg__msg__Joint __declspec(deprecated)
#endif

namespace bodyreader_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Joint_
{
  using Type = Joint_<ContainerAllocator>;

  explicit Joint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : depthposition(_init),
    worldposition(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  explicit Joint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : depthposition(_alloc, _init),
    worldposition(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  // field types and members
  using _type_type =
    int8_t;
  _type_type type;
  using _depthposition_type =
    bodyreader_msg::msg::Vector2f_<ContainerAllocator>;
  _depthposition_type depthposition;
  using _worldposition_type =
    bodyreader_msg::msg::Vector3f_<ContainerAllocator>;
  _worldposition_type worldposition;

  // setters for named parameter idiom
  Type & set__type(
    const int8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__depthposition(
    const bodyreader_msg::msg::Vector2f_<ContainerAllocator> & _arg)
  {
    this->depthposition = _arg;
    return *this;
  }
  Type & set__worldposition(
    const bodyreader_msg::msg::Vector3f_<ContainerAllocator> & _arg)
  {
    this->worldposition = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyreader_msg::msg::Joint_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyreader_msg::msg::Joint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyreader_msg::msg::Joint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyreader_msg::msg::Joint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyreader_msg::msg::Joint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyreader_msg::msg::Joint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyreader_msg::msg::Joint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyreader_msg::msg::Joint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyreader_msg::msg::Joint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyreader_msg::msg::Joint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyreader_msg__msg__Joint
    std::shared_ptr<bodyreader_msg::msg::Joint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyreader_msg__msg__Joint
    std::shared_ptr<bodyreader_msg::msg::Joint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Joint_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->depthposition != other.depthposition) {
      return false;
    }
    if (this->worldposition != other.worldposition) {
      return false;
    }
    return true;
  }
  bool operator!=(const Joint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Joint_

// alias to use template instance with default allocator
using Joint =
  bodyreader_msg::msg::Joint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyreader_msg

#endif  // BODYREADER_MSG__MSG__DETAIL__JOINT__STRUCT_HPP_
