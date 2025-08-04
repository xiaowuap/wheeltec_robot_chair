# generated from rosidl_generator_py/resource/_idl.py.em
# with input from yesense_interface:msg/Quat.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Quat(type):
    """Metaclass of message 'Quat'."""

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
            module = import_type_support('yesense_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'yesense_interface.msg.Quat')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__quat
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__quat
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__quat
            cls._TYPE_SUPPORT = module.type_support_msg__msg__quat
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__quat

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Quat(metaclass=Metaclass_Quat):
    """Message class 'Quat'."""

    __slots__ = [
        '_q0',
        '_q1',
        '_q2',
        '_q3',
    ]

    _fields_and_field_types = {
        'q0': 'double',
        'q1': 'double',
        'q2': 'double',
        'q3': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.q0 = kwargs.get('q0', float())
        self.q1 = kwargs.get('q1', float())
        self.q2 = kwargs.get('q2', float())
        self.q3 = kwargs.get('q3', float())

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
        if self.q0 != other.q0:
            return False
        if self.q1 != other.q1:
            return False
        if self.q2 != other.q2:
            return False
        if self.q3 != other.q3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def q0(self):
        """Message field 'q0'."""
        return self._q0

    @q0.setter
    def q0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'q0' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'q0' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._q0 = value

    @builtins.property
    def q1(self):
        """Message field 'q1'."""
        return self._q1

    @q1.setter
    def q1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'q1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'q1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._q1 = value

    @builtins.property
    def q2(self):
        """Message field 'q2'."""
        return self._q2

    @q2.setter
    def q2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'q2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'q2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._q2 = value

    @builtins.property
    def q3(self):
        """Message field 'q3'."""
        return self._q3

    @q3.setter
    def q3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'q3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'q3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._q3 = value
