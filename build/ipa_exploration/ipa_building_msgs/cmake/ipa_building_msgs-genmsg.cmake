# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "ipa_building_msgs: 23 messages, 2 services")

set(MSG_I_FLAGS "-Iipa_building_msgs:/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg;-Iipa_building_msgs:/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg;-Iactionlib_msgs:/opt/ros/noetic/share/actionlib_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/noetic/share/geometry_msgs/cmake/../msg;-Isensor_msgs:/opt/ros/noetic/share/sensor_msgs/cmake/../msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(ipa_building_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationAction.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationAction.msg" "std_msgs/Header:sensor_msgs/Image:ipa_building_msgs/MapSegmentationActionResult:ipa_building_msgs/MapSegmentationGoal:geometry_msgs/Quaternion:ipa_building_msgs/MapSegmentationActionGoal:ipa_building_msgs/MapSegmentationResult:actionlib_msgs/GoalID:actionlib_msgs/GoalStatus:ipa_building_msgs/RoomInformation:geometry_msgs/Pose:geometry_msgs/Point:geometry_msgs/Point32:geometry_msgs/Polygon:ipa_building_msgs/MapSegmentationActionFeedback:ipa_building_msgs/MapSegmentationFeedback"
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionGoal.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionGoal.msg" "std_msgs/Header:sensor_msgs/Image:ipa_building_msgs/MapSegmentationGoal:geometry_msgs/Quaternion:actionlib_msgs/GoalID:geometry_msgs/Pose:geometry_msgs/Point"
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionResult.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionResult.msg" "std_msgs/Header:sensor_msgs/Image:geometry_msgs/Quaternion:ipa_building_msgs/MapSegmentationResult:actionlib_msgs/GoalID:actionlib_msgs/GoalStatus:ipa_building_msgs/RoomInformation:geometry_msgs/Pose:geometry_msgs/Point:geometry_msgs/Point32:geometry_msgs/Polygon"
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionFeedback.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionFeedback.msg" "std_msgs/Header:actionlib_msgs/GoalID:ipa_building_msgs/MapSegmentationFeedback:actionlib_msgs/GoalStatus"
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg" "std_msgs/Header:sensor_msgs/Image:geometry_msgs/Quaternion:geometry_msgs/Pose:geometry_msgs/Point"
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg" "std_msgs/Header:sensor_msgs/Image:geometry_msgs/Quaternion:ipa_building_msgs/RoomInformation:geometry_msgs/Point32:geometry_msgs/Pose:geometry_msgs/Point:geometry_msgs/Polygon"
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg" ""
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsAction.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsAction.msg" "std_msgs/Header:ipa_building_msgs/FindRoomSequenceWithCheckpointsActionFeedback:sensor_msgs/Image:ipa_building_msgs/RoomSequence:geometry_msgs/Quaternion:actionlib_msgs/GoalID:ipa_building_msgs/RoomInformation:geometry_msgs/Point32:geometry_msgs/Pose:geometry_msgs/Point:actionlib_msgs/GoalStatus:ipa_building_msgs/FindRoomSequenceWithCheckpointsActionGoal:ipa_building_msgs/FindRoomSequenceWithCheckpointsGoal:geometry_msgs/Polygon:ipa_building_msgs/FindRoomSequenceWithCheckpointsActionResult:ipa_building_msgs/FindRoomSequenceWithCheckpointsResult:ipa_building_msgs/FindRoomSequenceWithCheckpointsFeedback"
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionGoal.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionGoal.msg" "std_msgs/Header:sensor_msgs/Image:geometry_msgs/Quaternion:actionlib_msgs/GoalID:ipa_building_msgs/RoomInformation:geometry_msgs/Point32:geometry_msgs/Pose:geometry_msgs/Point:ipa_building_msgs/FindRoomSequenceWithCheckpointsGoal:geometry_msgs/Polygon"
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionResult.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionResult.msg" "std_msgs/Header:ipa_building_msgs/RoomSequence:sensor_msgs/Image:actionlib_msgs/GoalID:actionlib_msgs/GoalStatus:geometry_msgs/Point32:ipa_building_msgs/FindRoomSequenceWithCheckpointsResult"
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionFeedback.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionFeedback.msg" "std_msgs/Header:actionlib_msgs/GoalID:actionlib_msgs/GoalStatus:ipa_building_msgs/FindRoomSequenceWithCheckpointsFeedback"
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg" "std_msgs/Header:sensor_msgs/Image:geometry_msgs/Quaternion:ipa_building_msgs/RoomInformation:geometry_msgs/Point32:geometry_msgs/Pose:geometry_msgs/Point:geometry_msgs/Polygon"
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg" "geometry_msgs/Point32:std_msgs/Header:ipa_building_msgs/RoomSequence:sensor_msgs/Image"
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg" ""
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationAction.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationAction.msg" "std_msgs/Header:sensor_msgs/Image:geometry_msgs/Pose2D:ipa_building_msgs/RoomExplorationActionFeedback:geometry_msgs/Quaternion:ipa_building_msgs/RoomExplorationFeedback:ipa_building_msgs/RoomExplorationResult:actionlib_msgs/GoalID:ipa_building_msgs/RoomExplorationActionResult:geometry_msgs/Point32:geometry_msgs/Pose:geometry_msgs/Point:actionlib_msgs/GoalStatus:ipa_building_msgs/RoomExplorationGoal:ipa_building_msgs/RoomExplorationActionGoal:geometry_msgs/PoseStamped"
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionGoal.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionGoal.msg" "std_msgs/Header:sensor_msgs/Image:geometry_msgs/Pose2D:geometry_msgs/Quaternion:actionlib_msgs/GoalID:geometry_msgs/Point32:geometry_msgs/Pose:geometry_msgs/Point:ipa_building_msgs/RoomExplorationGoal"
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionResult.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionResult.msg" "std_msgs/Header:geometry_msgs/Pose2D:geometry_msgs/Quaternion:ipa_building_msgs/RoomExplorationResult:actionlib_msgs/GoalID:actionlib_msgs/GoalStatus:geometry_msgs/Pose:geometry_msgs/Point:geometry_msgs/PoseStamped"
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionFeedback.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionFeedback.msg" "std_msgs/Header:actionlib_msgs/GoalID:actionlib_msgs/GoalStatus:ipa_building_msgs/RoomExplorationFeedback"
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg" "std_msgs/Header:sensor_msgs/Image:geometry_msgs/Pose2D:geometry_msgs/Quaternion:geometry_msgs/Point32:geometry_msgs/Pose:geometry_msgs/Point"
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg" "std_msgs/Header:geometry_msgs/Pose2D:geometry_msgs/Quaternion:geometry_msgs/Pose:geometry_msgs/Point:geometry_msgs/PoseStamped"
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg" ""
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg" "geometry_msgs/Point32:geometry_msgs/Polygon"
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg" "geometry_msgs/Point32"
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/CheckCoverage.srv" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/CheckCoverage.srv" "std_msgs/Header:sensor_msgs/Image:geometry_msgs/Pose2D:geometry_msgs/Quaternion:geometry_msgs/Point32:geometry_msgs/Pose:geometry_msgs/Point"
)

get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/ExtractAreaMapFromLabeledMap.srv" NAME_WE)
add_custom_target(_ipa_building_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "ipa_building_msgs" "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/ExtractAreaMapFromLabeledMap.srv" "std_msgs/Header:sensor_msgs/Image"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationAction.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionResult.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionGoal.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionFeedback.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsAction.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionFeedback.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionGoal.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionResult.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationAction.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionFeedback.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionResult.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)

### Generating Services
_generate_srv_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/CheckCoverage.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)
_generate_srv_cpp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/ExtractAreaMapFromLabeledMap.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
)

### Generating Module File
_generate_module_cpp(ipa_building_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(ipa_building_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(ipa_building_msgs_generate_messages ipa_building_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationAction.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsAction.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationAction.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/CheckCoverage.srv" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/ExtractAreaMapFromLabeledMap.srv" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_cpp _ipa_building_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(ipa_building_msgs_gencpp)
add_dependencies(ipa_building_msgs_gencpp ipa_building_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS ipa_building_msgs_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationAction.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionResult.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionGoal.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionFeedback.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsAction.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionFeedback.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionGoal.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionResult.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationAction.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionFeedback.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionResult.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)

### Generating Services
_generate_srv_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/CheckCoverage.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)
_generate_srv_eus(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/ExtractAreaMapFromLabeledMap.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
)

### Generating Module File
_generate_module_eus(ipa_building_msgs
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(ipa_building_msgs_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(ipa_building_msgs_generate_messages ipa_building_msgs_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationAction.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsAction.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationAction.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/CheckCoverage.srv" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/ExtractAreaMapFromLabeledMap.srv" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_eus _ipa_building_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(ipa_building_msgs_geneus)
add_dependencies(ipa_building_msgs_geneus ipa_building_msgs_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS ipa_building_msgs_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationAction.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionResult.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionGoal.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionFeedback.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsAction.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionFeedback.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionGoal.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionResult.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationAction.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionFeedback.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionResult.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)

### Generating Services
_generate_srv_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/CheckCoverage.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)
_generate_srv_lisp(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/ExtractAreaMapFromLabeledMap.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
)

### Generating Module File
_generate_module_lisp(ipa_building_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(ipa_building_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(ipa_building_msgs_generate_messages ipa_building_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationAction.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsAction.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationAction.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/CheckCoverage.srv" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/ExtractAreaMapFromLabeledMap.srv" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_lisp _ipa_building_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(ipa_building_msgs_genlisp)
add_dependencies(ipa_building_msgs_genlisp ipa_building_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS ipa_building_msgs_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationAction.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionResult.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionGoal.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionFeedback.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsAction.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionFeedback.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionGoal.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionResult.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationAction.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionFeedback.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionResult.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)

### Generating Services
_generate_srv_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/CheckCoverage.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)
_generate_srv_nodejs(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/ExtractAreaMapFromLabeledMap.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
)

### Generating Module File
_generate_module_nodejs(ipa_building_msgs
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(ipa_building_msgs_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(ipa_building_msgs_generate_messages ipa_building_msgs_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationAction.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsAction.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationAction.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/CheckCoverage.srv" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/ExtractAreaMapFromLabeledMap.srv" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_nodejs _ipa_building_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(ipa_building_msgs_gennodejs)
add_dependencies(ipa_building_msgs_gennodejs ipa_building_msgs_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS ipa_building_msgs_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationAction.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionResult.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionGoal.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionFeedback.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsAction.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionFeedback.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionGoal.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionResult.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationAction.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionFeedback.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionResult.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionGoal.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/noetic/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_msg_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)

### Generating Services
_generate_srv_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/CheckCoverage.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose2D.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)
_generate_srv_py(ipa_building_msgs
  "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/ExtractAreaMapFromLabeledMap.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/sensor_msgs/cmake/../msg/Image.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
)

### Generating Module File
_generate_module_py(ipa_building_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(ipa_building_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(ipa_building_msgs_generate_messages ipa_building_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationAction.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationActionFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/MapSegmentationFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsAction.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsActionFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/FindRoomSequenceWithCheckpointsFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationAction.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationActionFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationGoal.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationResult.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/devel/share/ipa_building_msgs/msg/RoomExplorationFeedback.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomInformation.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/msg/RoomSequence.msg" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/CheckCoverage.srv" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wheeltec/wheeltec_robot/src/ipa_exploration/ipa_building_msgs/srv/ExtractAreaMapFromLabeledMap.srv" NAME_WE)
add_dependencies(ipa_building_msgs_generate_messages_py _ipa_building_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(ipa_building_msgs_genpy)
add_dependencies(ipa_building_msgs_genpy ipa_building_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS ipa_building_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/ipa_building_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET actionlib_msgs_generate_messages_cpp)
  add_dependencies(ipa_building_msgs_generate_messages_cpp actionlib_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(ipa_building_msgs_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET sensor_msgs_generate_messages_cpp)
  add_dependencies(ipa_building_msgs_generate_messages_cpp sensor_msgs_generate_messages_cpp)
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(ipa_building_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/ipa_building_msgs
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET actionlib_msgs_generate_messages_eus)
  add_dependencies(ipa_building_msgs_generate_messages_eus actionlib_msgs_generate_messages_eus)
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(ipa_building_msgs_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()
if(TARGET sensor_msgs_generate_messages_eus)
  add_dependencies(ipa_building_msgs_generate_messages_eus sensor_msgs_generate_messages_eus)
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(ipa_building_msgs_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/ipa_building_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET actionlib_msgs_generate_messages_lisp)
  add_dependencies(ipa_building_msgs_generate_messages_lisp actionlib_msgs_generate_messages_lisp)
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(ipa_building_msgs_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()
if(TARGET sensor_msgs_generate_messages_lisp)
  add_dependencies(ipa_building_msgs_generate_messages_lisp sensor_msgs_generate_messages_lisp)
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(ipa_building_msgs_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/ipa_building_msgs
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET actionlib_msgs_generate_messages_nodejs)
  add_dependencies(ipa_building_msgs_generate_messages_nodejs actionlib_msgs_generate_messages_nodejs)
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(ipa_building_msgs_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()
if(TARGET sensor_msgs_generate_messages_nodejs)
  add_dependencies(ipa_building_msgs_generate_messages_nodejs sensor_msgs_generate_messages_nodejs)
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(ipa_building_msgs_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/ipa_building_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET actionlib_msgs_generate_messages_py)
  add_dependencies(ipa_building_msgs_generate_messages_py actionlib_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(ipa_building_msgs_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET sensor_msgs_generate_messages_py)
  add_dependencies(ipa_building_msgs_generate_messages_py sensor_msgs_generate_messages_py)
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(ipa_building_msgs_generate_messages_py std_msgs_generate_messages_py)
endif()
