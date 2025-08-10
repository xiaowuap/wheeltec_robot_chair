# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ollama_ros_msgs:srv/Chat.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Chat_Request(type):
    """Metaclass of message 'Chat_Request'."""

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
            module = import_type_support('ollama_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ollama_ros_msgs.srv.Chat_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__chat__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__chat__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__chat__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__chat__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__chat__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Chat_Request(metaclass=Metaclass_Chat_Request):
    """Message class 'Chat_Request'."""

    __slots__ = [
        '_content',
    ]

    _fields_and_field_types = {
        'content': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.content = kwargs.get('content', str())

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
        if self.content != other.content:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def content(self):
        """Message field 'content'."""
        return self._content

    @content.setter
    def content(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'content' field must be of type 'str'"
        self._content = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Chat_Response(type):
    """Metaclass of message 'Chat_Response'."""

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
            module = import_type_support('ollama_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ollama_ros_msgs.srv.Chat_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__chat__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__chat__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__chat__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__chat__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__chat__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Chat_Response(metaclass=Metaclass_Chat_Response):
    """Message class 'Chat_Response'."""

    __slots__ = [
        '_content',
        '_model',
        '_is_done',
    ]

    _fields_and_field_types = {
        'content': 'string',
        'model': 'string',
        'is_done': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.content = kwargs.get('content', str())
        self.model = kwargs.get('model', str())
        self.is_done = kwargs.get('is_done', bool())

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
        if self.content != other.content:
            return False
        if self.model != other.model:
            return False
        if self.is_done != other.is_done:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def content(self):
        """Message field 'content'."""
        return self._content

    @content.setter
    def content(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'content' field must be of type 'str'"
        self._content = value

    @builtins.property
    def model(self):
        """Message field 'model'."""
        return self._model

    @model.setter
    def model(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'model' field must be of type 'str'"
        self._model = value

    @builtins.property
    def is_done(self):
        """Message field 'is_done'."""
        return self._is_done

    @is_done.setter
    def is_done(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_done' field must be of type 'bool'"
        self._is_done = value


class Metaclass_Chat(type):
    """Metaclass of service 'Chat'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ollama_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ollama_ros_msgs.srv.Chat')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__chat

            from ollama_ros_msgs.srv import _chat
            if _chat.Metaclass_Chat_Request._TYPE_SUPPORT is None:
                _chat.Metaclass_Chat_Request.__import_type_support__()
            if _chat.Metaclass_Chat_Response._TYPE_SUPPORT is None:
                _chat.Metaclass_Chat_Response.__import_type_support__()


class Chat(metaclass=Metaclass_Chat):
    from ollama_ros_msgs.srv._chat import Chat_Request as Request
    from ollama_ros_msgs.srv._chat import Chat_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
