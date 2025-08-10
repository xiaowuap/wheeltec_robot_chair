// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wheeltec_mic_msg:srv/SetMajorMic.idl
// generated code does not contain a copyright notice

#ifndef WHEELTEC_MIC_MSG__SRV__DETAIL__SET_MAJOR_MIC__STRUCT_HPP_
#define WHEELTEC_MIC_MSG__SRV__DETAIL__SET_MAJOR_MIC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wheeltec_mic_msg__srv__SetMajorMic_Request __attribute__((deprecated))
#else
# define DEPRECATED__wheeltec_mic_msg__srv__SetMajorMic_Request __declspec(deprecated)
#endif

namespace wheeltec_mic_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMajorMic_Request_
{
  using Type = SetMajorMic_Request_<ContainerAllocator>;

  explicit SetMajorMic_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mic_id = 0;
    }
  }

  explicit SetMajorMic_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mic_id = 0;
    }
  }

  // field types and members
  using _mic_id_type =
    int8_t;
  _mic_id_type mic_id;

  // setters for named parameter idiom
  Type & set__mic_id(
    const int8_t & _arg)
  {
    this->mic_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wheeltec_mic_msg::srv::SetMajorMic_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const wheeltec_mic_msg::srv::SetMajorMic_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wheeltec_mic_msg::srv::SetMajorMic_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wheeltec_mic_msg::srv::SetMajorMic_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wheeltec_mic_msg::srv::SetMajorMic_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wheeltec_mic_msg::srv::SetMajorMic_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wheeltec_mic_msg::srv::SetMajorMic_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wheeltec_mic_msg::srv::SetMajorMic_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wheeltec_mic_msg::srv::SetMajorMic_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wheeltec_mic_msg::srv::SetMajorMic_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wheeltec_mic_msg__srv__SetMajorMic_Request
    std::shared_ptr<wheeltec_mic_msg::srv::SetMajorMic_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wheeltec_mic_msg__srv__SetMajorMic_Request
    std::shared_ptr<wheeltec_mic_msg::srv::SetMajorMic_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMajorMic_Request_ & other) const
  {
    if (this->mic_id != other.mic_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMajorMic_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMajorMic_Request_

// alias to use template instance with default allocator
using SetMajorMic_Request =
  wheeltec_mic_msg::srv::SetMajorMic_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace wheeltec_mic_msg


#ifndef _WIN32
# define DEPRECATED__wheeltec_mic_msg__srv__SetMajorMic_Response __attribute__((deprecated))
#else
# define DEPRECATED__wheeltec_mic_msg__srv__SetMajorMic_Response __declspec(deprecated)
#endif

namespace wheeltec_mic_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMajorMic_Response_
{
  using Type = SetMajorMic_Response_<ContainerAllocator>;

  explicit SetMajorMic_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
      this->fail_reason = "";
    }
  }

  explicit SetMajorMic_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc),
    fail_reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
      this->fail_reason = "";
    }
  }

  // field types and members
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_type result;
  using _fail_reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fail_reason_type fail_reason;

  // setters for named parameter idiom
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__fail_reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fail_reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wheeltec_mic_msg::srv::SetMajorMic_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const wheeltec_mic_msg::srv::SetMajorMic_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wheeltec_mic_msg::srv::SetMajorMic_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wheeltec_mic_msg::srv::SetMajorMic_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wheeltec_mic_msg::srv::SetMajorMic_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wheeltec_mic_msg::srv::SetMajorMic_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wheeltec_mic_msg::srv::SetMajorMic_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wheeltec_mic_msg::srv::SetMajorMic_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wheeltec_mic_msg::srv::SetMajorMic_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wheeltec_mic_msg::srv::SetMajorMic_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wheeltec_mic_msg__srv__SetMajorMic_Response
    std::shared_ptr<wheeltec_mic_msg::srv::SetMajorMic_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wheeltec_mic_msg__srv__SetMajorMic_Response
    std::shared_ptr<wheeltec_mic_msg::srv::SetMajorMic_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMajorMic_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->fail_reason != other.fail_reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMajorMic_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMajorMic_Response_

// alias to use template instance with default allocator
using SetMajorMic_Response =
  wheeltec_mic_msg::srv::SetMajorMic_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace wheeltec_mic_msg

namespace wheeltec_mic_msg
{

namespace srv
{

struct SetMajorMic
{
  using Request = wheeltec_mic_msg::srv::SetMajorMic_Request;
  using Response = wheeltec_mic_msg::srv::SetMajorMic_Response;
};

}  // namespace srv

}  // namespace wheeltec_mic_msg

#endif  // WHEELTEC_MIC_MSG__SRV__DETAIL__SET_MAJOR_MIC__STRUCT_HPP_
