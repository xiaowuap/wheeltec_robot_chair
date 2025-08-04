# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wheeltec_mic_msg:srv/GetOfflineResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetOfflineResult_Request(type):
    """Metaclass of message 'GetOfflineResult_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('wheeltec_mic_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'wheeltec_mic_msg.srv.GetOfflineResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_offline_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_offline_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_offline_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_offline_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_offline_result__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetOfflineResult_Request(metaclass=Metaclass_GetOfflineResult_Request):
    """Message class 'GetOfflineResult_Request'."""

    __slots__ = [
        '_offline_recognise_start',
        '_confidence_threshold',
        '_time_per_order',
    ]

    _fields_and_field_types = {
        'offline_recognise_start': 'int8',
        'confidence_threshold': 'int8',
        'time_per_order': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.offline_recognise_start = kwargs.get('offline_recognise_start', int())
        self.confidence_threshold = kwargs.get('confidence_threshold', int())
        self.time_per_order = kwargs.get('time_per_order', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.offline_recognise_start != other.offline_recognise_start:
            return False
        if self.confidence_threshold != other.confidence_threshold:
            return False
        if self.time_per_order != other.time_per_order:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def offline_recognise_start(self):
        """Message field 'offline_recognise_start'."""
        return self._offline_recognise_start

    @offline_recognise_start.setter
    def offline_recognise_start(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'offline_recognise_start' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'offline_recognise_start' field must be an integer in [-128, 127]"
        self._offline_recognise_start = value

    @builtins.property
    def confidence_threshold(self):
        """Message field 'confidence_threshold'."""
        return self._confidence_threshold

    @confidence_threshold.setter
    def confidence_threshold(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'confidence_threshold' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'confidence_threshold' field must be an integer in [-128, 127]"
        self._confidence_threshold = value

    @builtins.property
    def time_per_order(self):
        """Message field 'time_per_order'."""
        return self._time_per_order

    @time_per_order.setter
    def time_per_order(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_per_order' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'time_per_order' field must be an integer in [-128, 127]"
        self._time_per_order = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetOfflineResult_Response(type):
    """Metaclass of message 'GetOfflineResult_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('wheeltec_mic_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'wheeltec_mic_msg.srv.GetOfflineResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_offline_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_offline_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_offline_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_offline_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_offline_result__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetOfflineResult_Response(metaclass=Metaclass_GetOfflineResult_Response):
    """Message class 'GetOfflineResult_Response'."""

    __slots__ = [
        '_result',
        '_fail_reason',
        '_text',
    ]

    _fields_and_field_types = {
        'result': 'string',
        'fail_reason': 'string',
        'text': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', str())
        self.fail_reason = kwargs.get('fail_reason', str())
        self.text = kwargs.get('text', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.result != other.result:
            return False
        if self.fail_reason != other.fail_reason:
            return False
        if self.text != other.text:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'result' field must be of type 'str'"
        self._result = value

    @builtins.property
    def fail_reason(self):
        """Message field 'fail_reason'."""
        return self._fail_reason

    @fail_reason.setter
    def fail_reason(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'fail_reason' field must be of type 'str'"
        self._fail_reason = value

    @builtins.property
    def text(self):
        """Message field 'text'."""
        return self._text

    @text.setter
    def text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'text' field must be of type 'str'"
        self._text = value


class Metaclass_GetOfflineResult(type):
    """Metaclass of service 'GetOfflineResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('wheeltec_mic_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'wheeltec_mic_msg.srv.GetOfflineResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_offline_result

            from wheeltec_mic_msg.srv import _get_offline_result
            if _get_offline_result.Metaclass_GetOfflineResult_Request._TYPE_SUPPORT is None:
                _get_offline_result.Metaclass_GetOfflineResult_Request.__import_type_support__()
            if _get_offline_result.Metaclass_GetOfflineResult_Response._TYPE_SUPPORT is None:
                _get_offline_result.Metaclass_GetOfflineResult_Response.__import_type_support__()


class GetOfflineResult(metaclass=Metaclass_GetOfflineResult):
    from wheeltec_mic_msg.srv._get_offline_result import GetOfflineResult_Request as Request
    from wheeltec_mic_msg.srv._get_offline_result import GetOfflineResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
