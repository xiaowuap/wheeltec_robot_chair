# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyreader_msg:msg/Body.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Body(type):
    """Metaclass of message 'Body'."""

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
            module = import_type_support('bodyreader_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'bodyreader_msg.msg.Body')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__body
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__body
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__body
            cls._TYPE_SUPPORT = module.type_support_msg__msg__body
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__body

            from bodyreader_msg.msg import Joint
            if Joint.__class__._TYPE_SUPPORT is None:
                Joint.__class__.__import_type_support__()

            from bodyreader_msg.msg import Vector3f
            if Vector3f.__class__._TYPE_SUPPORT is None:
                Vector3f.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Body(metaclass=Metaclass_Body):
    """Message class 'Body'."""

    __slots__ = [
        '_bodyid',
        '_centerofmass',
        '_joints',
    ]

    _fields_and_field_types = {
        'bodyid': 'int16',
        'centerofmass': 'bodyreader_msg/Vector3f',
        'joints': 'bodyreader_msg/Joint[19]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['bodyreader_msg', 'msg'], 'Vector3f'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['bodyreader_msg', 'msg'], 'Joint'), 19),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bodyid = kwargs.get('bodyid', int())
        from bodyreader_msg.msg import Vector3f
        self.centerofmass = kwargs.get('centerofmass', Vector3f())
        from bodyreader_msg.msg import Joint
        self.joints = kwargs.get(
            'joints',
            [Joint() for x in range(19)]
        )

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
        if self.bodyid != other.bodyid:
            return False
        if self.centerofmass != other.centerofmass:
            return False
        if self.joints != other.joints:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bodyid(self):
        """Message field 'bodyid'."""
        return self._bodyid

    @bodyid.setter
    def bodyid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bodyid' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'bodyid' field must be an integer in [-32768, 32767]"
        self._bodyid = value

    @builtins.property
    def centerofmass(self):
        """Message field 'centerofmass'."""
        return self._centerofmass

    @centerofmass.setter
    def centerofmass(self, value):
        if __debug__:
            from bodyreader_msg.msg import Vector3f
            assert \
                isinstance(value, Vector3f), \
                "The 'centerofmass' field must be a sub message of type 'Vector3f'"
        self._centerofmass = value

    @builtins.property
    def joints(self):
        """Message field 'joints'."""
        return self._joints

    @joints.setter
    def joints(self, value):
        if __debug__:
            from bodyreader_msg.msg import Joint
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 19 and
                 all(isinstance(v, Joint) for v in value) and
                 True), \
                "The 'joints' field must be a set or sequence with length 19 and each value of type 'Joint'"
        self._joints = value
