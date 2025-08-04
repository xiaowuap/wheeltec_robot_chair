// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyreader_msg:msg/Body.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__BODY__BUILDER_HPP_
#define BODYREADER_MSG__MSG__DETAIL__BODY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyreader_msg/msg/detail/body__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyreader_msg
{

namespace msg
{

namespace builder
{

class Init_Body_joints
{
public:
  explicit Init_Body_joints(::bodyreader_msg::msg::Body & msg)
  : msg_(msg)
  {}
  ::bodyreader_msg::msg::Body joints(::bodyreader_msg::msg::Body::_joints_type arg)
  {
    msg_.joints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyreader_msg::msg::Body msg_;
};

class Init_Body_centerofmass
{
public:
  explicit Init_Body_centerofmass(::bodyreader_msg::msg::Body & msg)
  : msg_(msg)
  {}
  Init_Body_joints centerofmass(::bodyreader_msg::msg::Body::_centerofmass_type arg)
  {
    msg_.centerofmass = std::move(arg);
    return Init_Body_joints(msg_);
  }

private:
  ::bodyreader_msg::msg::Body msg_;
};

class Init_Body_bodyid
{
public:
  Init_Body_bodyid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Body_centerofmass bodyid(::bodyreader_msg::msg::Body::_bodyid_type arg)
  {
    msg_.bodyid = std::move(arg);
    return Init_Body_centerofmass(msg_);
  }

private:
  ::bodyreader_msg::msg::Body msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyreader_msg::msg::Body>()
{
  return bodyreader_msg::msg::builder::Init_Body_bodyid();
}

}  // namespace bodyreader_msg

#endif  // BODYREADER_MSG__MSG__DETAIL__BODY__BUILDER_HPP_
