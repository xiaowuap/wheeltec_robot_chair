// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yesense_interface:msg/Utc.idl
// generated code does not contain a copyright notice

#ifndef YESENSE_INTERFACE__MSG__DETAIL__UTC__BUILDER_HPP_
#define YESENSE_INTERFACE__MSG__DETAIL__UTC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yesense_interface/msg/detail/utc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yesense_interface
{

namespace msg
{

namespace builder
{

class Init_Utc_ms
{
public:
  explicit Init_Utc_ms(::yesense_interface::msg::Utc & msg)
  : msg_(msg)
  {}
  ::yesense_interface::msg::Utc ms(::yesense_interface::msg::Utc::_ms_type arg)
  {
    msg_.ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yesense_interface::msg::Utc msg_;
};

class Init_Utc_sec
{
public:
  explicit Init_Utc_sec(::yesense_interface::msg::Utc & msg)
  : msg_(msg)
  {}
  Init_Utc_ms sec(::yesense_interface::msg::Utc::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_Utc_ms(msg_);
  }

private:
  ::yesense_interface::msg::Utc msg_;
};

class Init_Utc_min
{
public:
  explicit Init_Utc_min(::yesense_interface::msg::Utc & msg)
  : msg_(msg)
  {}
  Init_Utc_sec min(::yesense_interface::msg::Utc::_min_type arg)
  {
    msg_.min = std::move(arg);
    return Init_Utc_sec(msg_);
  }

private:
  ::yesense_interface::msg::Utc msg_;
};

class Init_Utc_hour
{
public:
  explicit Init_Utc_hour(::yesense_interface::msg::Utc & msg)
  : msg_(msg)
  {}
  Init_Utc_min hour(::yesense_interface::msg::Utc::_hour_type arg)
  {
    msg_.hour = std::move(arg);
    return Init_Utc_min(msg_);
  }

private:
  ::yesense_interface::msg::Utc msg_;
};

class Init_Utc_day
{
public:
  explicit Init_Utc_day(::yesense_interface::msg::Utc & msg)
  : msg_(msg)
  {}
  Init_Utc_hour day(::yesense_interface::msg::Utc::_day_type arg)
  {
    msg_.day = std::move(arg);
    return Init_Utc_hour(msg_);
  }

private:
  ::yesense_interface::msg::Utc msg_;
};

class Init_Utc_month
{
public:
  explicit Init_Utc_month(::yesense_interface::msg::Utc & msg)
  : msg_(msg)
  {}
  Init_Utc_day month(::yesense_interface::msg::Utc::_month_type arg)
  {
    msg_.month = std::move(arg);
    return Init_Utc_day(msg_);
  }

private:
  ::yesense_interface::msg::Utc msg_;
};

class Init_Utc_year
{
public:
  Init_Utc_year()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Utc_month year(::yesense_interface::msg::Utc::_year_type arg)
  {
    msg_.year = std::move(arg);
    return Init_Utc_month(msg_);
  }

private:
  ::yesense_interface::msg::Utc msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yesense_interface::msg::Utc>()
{
  return yesense_interface::msg::builder::Init_Utc_year();
}

}  // namespace yesense_interface

#endif  // YESENSE_INTERFACE__MSG__DETAIL__UTC__BUILDER_HPP_
