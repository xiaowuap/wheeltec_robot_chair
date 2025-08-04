// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyreader_msg:msg/Maskdata.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__MASKDATA__STRUCT_HPP_
#define BODYREADER_MSG__MSG__DETAIL__MASKDATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bodyreader_msg__msg__Maskdata __attribute__((deprecated))
#else
# define DEPRECATED__bodyreader_msg__msg__Maskdata __declspec(deprecated)
#endif

namespace bodyreader_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Maskdata_
{
  using Type = Maskdata_<ContainerAllocator>;

  explicit Maskdata_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 76800>::iterator, int32_t>(this->data.begin(), this->data.end(), 0l);
    }
  }

  explicit Maskdata_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 76800>::iterator, int32_t>(this->data.begin(), this->data.end(), 0l);
    }
  }

  // field types and members
  using _data_type =
    std::array<int32_t, 76800>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::array<int32_t, 76800> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyreader_msg::msg::Maskdata_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyreader_msg::msg::Maskdata_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyreader_msg::msg::Maskdata_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyreader_msg::msg::Maskdata_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyreader_msg::msg::Maskdata_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyreader_msg::msg::Maskdata_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyreader_msg::msg::Maskdata_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyreader_msg::msg::Maskdata_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyreader_msg::msg::Maskdata_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyreader_msg::msg::Maskdata_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyreader_msg__msg__Maskdata
    std::shared_ptr<bodyreader_msg::msg::Maskdata_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyreader_msg__msg__Maskdata
    std::shared_ptr<bodyreader_msg::msg::Maskdata_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Maskdata_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Maskdata_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Maskdata_

// alias to use template instance with default allocator
using Maskdata =
  bodyreader_msg::msg::Maskdata_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyreader_msg

#endif  // BODYREADER_MSG__MSG__DETAIL__MASKDATA__STRUCT_HPP_
