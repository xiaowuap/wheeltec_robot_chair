// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wheeltec_mic_msg:msg/PcmMsg.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__MSG__DETAIL__PCM_MSG__STRUCT_HPP_
#define WHEELTEC_MIC_MSG__MSG__DETAIL__PCM_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wheeltec_mic_msg__msg__PcmMsg __attribute__((deprecated))
#else
# define DEPRECATED__wheeltec_mic_msg__msg__PcmMsg __declspec(deprecated)
#endif

namespace wheeltec_mic_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PcmMsg_
{
  using Type = PcmMsg_<ContainerAllocator>;

  explicit PcmMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0l;
    }
  }

  explicit PcmMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0l;
    }
  }

  // field types and members
  using _length_type =
    int32_t;
  _length_type length;
  using _pcm_buf_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _pcm_buf_type pcm_buf;

  // setters for named parameter idiom
  Type & set__length(
    const int32_t & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__pcm_buf(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->pcm_buf = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wheeltec_mic_msg::msg::PcmMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const wheeltec_mic_msg::msg::PcmMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wheeltec_mic_msg::msg::PcmMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wheeltec_mic_msg::msg::PcmMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wheeltec_mic_msg::msg::PcmMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wheeltec_mic_msg::msg::PcmMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wheeltec_mic_msg::msg::PcmMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wheeltec_mic_msg::msg::PcmMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wheeltec_mic_msg::msg::PcmMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wheeltec_mic_msg::msg::PcmMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wheeltec_mic_msg__msg__PcmMsg
    std::shared_ptr<wheeltec_mic_msg::msg::PcmMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wheeltec_mic_msg__msg__PcmMsg
    std::shared_ptr<wheeltec_mic_msg::msg::PcmMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PcmMsg_ & other) const
  {
    if (this->length != other.length) {
      return false;
    }
    if (this->pcm_buf != other.pcm_buf) {
      return false;
    }
    return true;
  }
  bool operator!=(const PcmMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PcmMsg_

// alias to use template instance with default allocator
using PcmMsg =
  wheeltec_mic_msg::msg::PcmMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wheeltec_mic_msg

#endif  // WHEELTEC_MIC_MSG__MSG__DETAIL__PCM_MSG__STRUCT_HPP_
