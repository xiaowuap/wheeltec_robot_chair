# generated from rosidl_generator_py/resource/_idl.py.em
# with input from yesense_interface:msg/RobotLord.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotLord(type):
    """Metaclass of message 'RobotLord'."""

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
                'yesense_interface.msg.RobotLord')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_lord
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_lord
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_lord
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_lord
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_lord

            from yesense_interface.msg import Quat
            if Quat.__class__._TYPE_SUPPORT is None:
                Quat.__class__.__import_type_support__()

            from yesense_interface.msg import ThreeAxis
            if ThreeAxis.__class__._TYPE_SUPPORT is None:
                ThreeAxis.__class__.__import_type_support__()

            from yesense_interface.msg import Tid
            if Tid.__class__._TYPE_SUPPORT is None:
                Tid.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotLord(metaclass=Metaclass_RobotLord):
    """Message class 'RobotLord'."""

    __slots__ = [
        '_tid',
        '_acc',
        '_gyro',
        '_quat',
    ]

    _fields_and_field_types = {
        'tid': 'yesense_interface/Tid',
        'acc': 'yesense_interface/ThreeAxis',
        'gyro': 'yesense_interface/ThreeAxis',
        'quat': 'yesense_interface/Quat',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['yesense_interface', 'msg'], 'Tid'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yesense_interface', 'msg'], 'ThreeAxis'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yesense_interface', 'msg'], 'ThreeAxis'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yesense_interface', 'msg'], 'Quat'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from yesense_interface.msg import Tid
        self.tid = kwargs.get('tid', Tid())
        from yesense_interface.msg import ThreeAxis
        self.acc = kwargs.get('acc', ThreeAxis())
        from yesense_interface.msg import ThreeAxis
        self.gyro = kwargs.get('gyro', ThreeAxis())
        from yesense_interface.msg import Quat
        self.quat = kwargs.get('quat', Quat())

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
        if self.tid != other.tid:
            return False
        if self.acc != other.acc:
            return False
        if self.gyro != other.gyro:
            return False
        if self.quat != other.quat:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def tid(self):
        """Message field 'tid'."""
        return self._tid

    @tid.setter
    def tid(self, value):
        if __debug__:
            from yesense_interface.msg import Tid
            assert \
                isinstance(value, Tid), \
                "The 'tid' field must be a sub message of type 'Tid'"
        self._tid = value

    @builtins.property
    def acc(self):
        """Message field 'acc'."""
        return self._acc

    @acc.setter
    def acc(self, value):
        if __debug__:
            from yesense_interface.msg import ThreeAxis
            assert \
                isinstance(value, ThreeAxis), \
                "The 'acc' field must be a sub message of type 'ThreeAxis'"
        self._acc = value

    @builtins.property
    def gyro(self):
        """Message field 'gyro'."""
        return self._gyro

    @gyro.setter
    def gyro(self, value):
        if __debug__:
            from yesense_interface.msg import ThreeAxis
            assert \
                isinstance(value, ThreeAxis), \
                "The 'gyro' field must be a sub message of type 'ThreeAxis'"
        self._gyro = value

    @builtins.property
    def quat(self):
        """Message field 'quat'."""
        return self._quat

    @quat.setter
    def quat(self, value):
        if __debug__:
            from yesense_interface.msg import Quat
            assert \
                isinstance(value, Quat), \
                "The 'quat' field must be a sub message of type 'Quat'"
        self._quat = value
