// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyreader_msg:msg/Joint.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__JOINT__BUILDER_HPP_
#define BODYREADER_MSG__MSG__DETAIL__JOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyreader_msg/msg/detail/joint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyreader_msg
{

namespace msg
{

namespace builder
{

class Init_Joint_worldposition
{
public:
  explicit Init_Joint_worldposition(::bodyreader_msg::msg::Joint & msg)
  : msg_(msg)
  {}
  ::bodyreader_msg::msg::Joint worldposition(::bodyreader_msg::msg::Joint::_worldposition_type arg)
  {
    msg_.worldposition = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyreader_msg::msg::Joint msg_;
};

class Init_Joint_depthposition
{
public:
  explicit Init_Joint_depthposition(::bodyreader_msg::msg::Joint & msg)
  : msg_(msg)
  {}
  Init_Joint_worldposition depthposition(::bodyreader_msg::msg::Joint::_depthposition_type arg)
  {
    msg_.depthposition = std::move(arg);
    return Init_Joint_worldposition(msg_);
  }

private:
  ::bodyreader_msg::msg::Joint msg_;
};

class Init_Joint_type
{
public:
  Init_Joint_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Joint_depthposition type(::bodyreader_msg::msg::Joint::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Joint_depthposition(msg_);
  }

private:
  ::bodyreader_msg::msg::Joint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyreader_msg::msg::Joint>()
{
  return bodyreader_msg::msg::builder::Init_Joint_type();
}

}  // namespace bodyreader_msg

#endif  // BODYREADER_MSG__MSG__DETAIL__JOINT__BUILDER_HPP_
