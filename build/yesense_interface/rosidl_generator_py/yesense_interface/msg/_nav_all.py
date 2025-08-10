# generated from rosidl_generator_py/resource/_idl.py.em
# with input from yesense_interface:msg/NavAll.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NavAll(type):
    """Metaclass of message 'NavAll'."""

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
                'yesense_interface.msg.NavAll')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__nav_all
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__nav_all
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__nav_all
            cls._TYPE_SUPPORT = module.type_support_msg__msg__nav_all
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__nav_all

            from yesense_interface.msg import EulerAngle
            if EulerAngle.__class__._TYPE_SUPPORT is None:
                EulerAngle.__class__.__import_type_support__()

            from yesense_interface.msg import GnssPos
            if GnssPos.__class__._TYPE_SUPPORT is None:
                GnssPos.__class__.__import_type_support__()

            from yesense_interface.msg import NavStatus
            if NavStatus.__class__._TYPE_SUPPORT is None:
                NavStatus.__class__.__import_type_support__()

            from yesense_interface.msg import Pressure
            if Pressure.__class__._TYPE_SUPPORT is None:
                Pressure.__class__.__import_type_support__()

            from yesense_interface.msg import Quat
            if Quat.__class__._TYPE_SUPPORT is None:
                Quat.__class__.__import_type_support__()

            from yesense_interface.msg import SensorTemp
            if SensorTemp.__class__._TYPE_SUPPORT is None:
                SensorTemp.__class__.__import_type_support__()

            from yesense_interface.msg import ThreeAxis
            if ThreeAxis.__class__._TYPE_SUPPORT is None:
                ThreeAxis.__class__.__import_type_support__()

            from yesense_interface.msg import Tid
            if Tid.__class__._TYPE_SUPPORT is None:
                Tid.__class__.__import_type_support__()

            from yesense_interface.msg import Utc
            if Utc.__class__._TYPE_SUPPORT is None:
                Utc.__class__.__import_type_support__()

            from yesense_interface.msg import Vel
            if Vel.__class__._TYPE_SUPPORT is None:
                Vel.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavAll(metaclass=Metaclass_NavAll):
    """Message class 'NavAll'."""

    __slots__ = [
        '_tid',
        '_acc',
        '_gyro',
        '_euler',
        '_quat',
        '_temp',
        '_pos',
        '_status',
        '_vel',
        '_utc',
        '_pressure',
    ]

    _fields_and_field_types = {
        'tid': 'yesense_interface/Tid',
        'acc': 'yesense_interface/ThreeAxis',
        'gyro': 'yesense_interface/ThreeAxis',
        'euler': 'yesense_interface/EulerAngle',
        'quat': 'yesense_interface/Quat',
        'temp': 'yesense_interface/SensorTemp',
        'pos': 'yesense_interface/GnssPos',
        'status': 'yesense_interface/NavStatus',
        'vel': 'yesense_interface/Vel',
        'utc': 'yesense_interface/Utc',
        'pressure': 'yesense_interface/Pressure',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['yesense_interface', 'msg'], 'Tid'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yesense_interface', 'msg'], 'ThreeAxis'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yesense_interface', 'msg'], 'ThreeAxis'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yesense_interface', 'msg'], 'EulerAngle'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yesense_interface', 'msg'], 'Quat'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yesense_interface', 'msg'], 'SensorTemp'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yesense_interface', 'msg'], 'GnssPos'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yesense_interface', 'msg'], 'NavStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yesense_interface', 'msg'], 'Vel'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yesense_interface', 'msg'], 'Utc'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yesense_interface', 'msg'], 'Pressure'),  # noqa: E501
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
        from yesense_interface.msg import EulerAngle
        self.euler = kwargs.get('euler', EulerAngle())
        from yesense_interface.msg import Quat
        self.quat = kwargs.get('quat', Quat())
        from yesense_interface.msg import SensorTemp
        self.temp = kwargs.get('temp', SensorTemp())
        from yesense_interface.msg import GnssPos
        self.pos = kwargs.get('pos', GnssPos())
        from yesense_interface.msg import NavStatus
        self.status = kwargs.get('status', NavStatus())
        from yesense_interface.msg import Vel
        self.vel = kwargs.get('vel', Vel())
        from yesense_interface.msg import Utc
        self.utc = kwargs.get('utc', Utc())
        from yesense_interface.msg import Pressure
        self.pressure = kwargs.get('pressure', Pressure())

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
        if self.euler != other.euler:
            return False
        if self.quat != other.quat:
            return False
        if self.temp != other.temp:
            return False
        if self.pos != other.pos:
            return False
        if self.status != other.status:
            return False
        if self.vel != other.vel:
            return False
        if self.utc != other.utc:
            return False
        if self.pressure != other.pressure:
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
    def euler(self):
        """Message field 'euler'."""
        return self._euler

    @euler.setter
    def euler(self, value):
        if __debug__:
            from yesense_interface.msg import EulerAngle
            assert \
                isinstance(value, EulerAngle), \
                "The 'euler' field must be a sub message of type 'EulerAngle'"
        self._euler = value

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

    @builtins.property
    def temp(self):
        """Message field 'temp'."""
        return self._temp

    @temp.setter
    def temp(self, value):
        if __debug__:
            from yesense_interface.msg import SensorTemp
            assert \
                isinstance(value, SensorTemp), \
                "The 'temp' field must be a sub message of type 'SensorTemp'"
        self._temp = value

    @builtins.property
    def pos(self):
        """Message field 'pos'."""
        return self._pos

    @pos.setter
    def pos(self, value):
        if __debug__:
            from yesense_interface.msg import GnssPos
            assert \
                isinstance(value, GnssPos), \
                "The 'pos' field must be a sub message of type 'GnssPos'"
        self._pos = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from yesense_interface.msg import NavStatus
            assert \
                isinstance(value, NavStatus), \
                "The 'status' field must be a sub message of type 'NavStatus'"
        self._status = value

    @builtins.property
    def vel(self):
        """Message field 'vel'."""
        return self._vel

    @vel.setter
    def vel(self, value):
        if __debug__:
            from yesense_interface.msg import Vel
            assert \
                isinstance(value, Vel), \
                "The 'vel' field must be a sub message of type 'Vel'"
        self._vel = value

    @builtins.property
    def utc(self):
        """Message field 'utc'."""
        return self._utc

    @utc.setter
    def utc(self, value):
        if __debug__:
            from yesense_interface.msg import Utc
            assert \
                isinstance(value, Utc), \
                "The 'utc' field must be a sub message of type 'Utc'"
        self._utc = value

    @builtins.property
    def pressure(self):
        """Message field 'pressure'."""
        return self._pressure

    @pressure.setter
    def pressure(self, value):
        if __debug__:
            from yesense_interface.msg import Pressure
            assert \
                isinstance(value, Pressure), \
                "The 'pressure' field must be a sub message of type 'Pressure'"
        self._pressure = value
