# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyreader_msg:msg/Joint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Joint(type):
    """Metaclass of message 'Joint'."""

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
                'bodyreader_msg.msg.Joint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joint

            from bodyreader_msg.msg import Vector2f
            if Vector2f.__class__._TYPE_SUPPORT is None:
                Vector2f.__class__.__import_type_support__()

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


class Joint(metaclass=Metaclass_Joint):
    """Message class 'Joint'."""

    __slots__ = [
        '_type',
        '_depthposition',
        '_worldposition',
    ]

    _fields_and_field_types = {
        'type': 'int8',
        'depthposition': 'bodyreader_msg/Vector2f',
        'worldposition': 'bodyreader_msg/Vector3f',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['bodyreader_msg', 'msg'], 'Vector2f'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['bodyreader_msg', 'msg'], 'Vector3f'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        from bodyreader_msg.msg import Vector2f
        self.depthposition = kwargs.get('depthposition', Vector2f())
        from bodyreader_msg.msg import Vector3f
        self.worldposition = kwargs.get('worldposition', Vector3f())

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
        if self.type != other.type:
            return False
        if self.depthposition != other.depthposition:
            return False
        if self.worldposition != other.worldposition:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'type' field must be an integer in [-128, 127]"
        self._type = value

    @builtins.property
    def depthposition(self):
        """Message field 'depthposition'."""
        return self._depthposition

    @depthposition.setter
    def depthposition(self, value):
        if __debug__:
            from bodyreader_msg.msg import Vector2f
            assert \
                isinstance(value, Vector2f), \
                "The 'depthposition' field must be a sub message of type 'Vector2f'"
        self._depthposition = value

    @builtins.property
    def worldposition(self):
        """Message field 'worldposition'."""
        return self._worldposition

    @worldposition.setter
    def worldposition(self, value):
        if __debug__:
            from bodyreader_msg.msg import Vector3f
            assert \
                isinstance(value, Vector3f), \
                "The 'worldposition' field must be a sub message of type 'Vector3f'"
        self._worldposition = value
