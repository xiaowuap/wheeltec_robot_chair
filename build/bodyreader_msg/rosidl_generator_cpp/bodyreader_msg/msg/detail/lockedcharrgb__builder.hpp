// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyreader_msg:msg/Lockedcharrgb.idl
// generated code does not contain a copyright notice

#ifndef BODYREADER_MSG__MSG__DETAIL__LOCKEDCHARRGB__BUILDER_HPP_
#define BODYREADER_MSG__MSG__DETAIL__LOCKEDCHARRGB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyreader_msg/msg/detail/lockedcharrgb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyreader_msg
{

namespace msg
{

namespace builder
{

class Init_Lockedcharrgb_b
{
public:
  explicit Init_Lockedcharrgb_b(::bodyreader_msg::msg::Lockedcharrgb & msg)
  : msg_(msg)
  {}
  ::bodyreader_msg::msg::Lockedcharrgb b(::bodyreader_msg::msg::Lockedcharrgb::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyreader_msg::msg::Lockedcharrgb msg_;
};

class Init_Lockedcharrgb_g
{
public:
  explicit Init_Lockedcharrgb_g(::bodyreader_msg::msg::Lockedcharrgb & msg)
  : msg_(msg)
  {}
  Init_Lockedcharrgb_b g(::bodyreader_msg::msg::Lockedcharrgb::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_Lockedcharrgb_b(msg_);
  }

private:
  ::bodyreader_msg::msg::Lockedcharrgb msg_;
};

class Init_Lockedcharrgb_r
{
public:
  Init_Lockedcharrgb_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Lockedcharrgb_g r(::bodyreader_msg::msg::Lockedcharrgb::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_Lockedcharrgb_g(msg_);
  }

private:
  ::bodyreader_msg::msg::Lockedcharrgb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyreader_msg::msg::Lockedcharrgb>()
{
  return bodyreader_msg::msg::builder::Init_Lockedcharrgb_r();
}

}  // namespace bodyreader_msg

#endif  // BODYREADER_MSG__MSG__DETAIL__LOCKEDCHARRGB__BUILDER_HPP_
