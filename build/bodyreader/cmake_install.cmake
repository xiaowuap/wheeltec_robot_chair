# Install script for directory: /home/wheeltec/wheeltec_robot/src/bodyreader

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/wheeltec/wheeltec_robot/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/bodyreader/msg" TYPE FILE FILES
    "/home/wheeltec/wheeltec_robot/src/bodyreader/msg/bodyposture.msg"
    "/home/wheeltec/wheeltec_robot/src/bodyreader/msg/vector2f.msg"
    "/home/wheeltec/wheeltec_robot/src/bodyreader/msg/vector3f.msg"
    "/home/wheeltec/wheeltec_robot/src/bodyreader/msg/joint.msg"
    "/home/wheeltec/wheeltec_robot/src/bodyreader/msg/body.msg"
    "/home/wheeltec/wheeltec_robot/src/bodyreader/msg/bodyList.msg"
    "/home/wheeltec/wheeltec_robot/src/bodyreader/msg/maskdata.msg"
    "/home/wheeltec/wheeltec_robot/src/bodyreader/msg/lockedmask_w_h.msg"
    "/home/wheeltec/wheeltec_robot/src/bodyreader/msg/locked_char_rgb.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/bodyreader/cmake" TYPE FILE FILES "/home/wheeltec/wheeltec_robot/build/bodyreader/catkin_generated/installspace/bodyreader-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/wheeltec/wheeltec_robot/devel/include/bodyreader")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/wheeltec/wheeltec_robot/devel/share/roseus/ros/bodyreader")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/wheeltec/wheeltec_robot/devel/share/common-lisp/ros/bodyreader")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/wheeltec/wheeltec_robot/devel/share/gennodejs/ros/bodyreader")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/wheeltec/wheeltec_robot/devel/lib/python3/dist-packages/bodyreader")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/wheeltec/wheeltec_robot/devel/lib/python3/dist-packages/bodyreader")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/wheeltec/wheeltec_robot/build/bodyreader/catkin_generated/installspace/bodyreader.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/bodyreader/cmake" TYPE FILE FILES "/home/wheeltec/wheeltec_robot/build/bodyreader/catkin_generated/installspace/bodyreader-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/bodyreader/cmake" TYPE FILE FILES
    "/home/wheeltec/wheeltec_robot/build/bodyreader/catkin_generated/installspace/bodyreaderConfig.cmake"
    "/home/wheeltec/wheeltec_robot/build/bodyreader/catkin_generated/installspace/bodyreaderConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/bodyreader" TYPE FILE FILES "/home/wheeltec/wheeltec_robot/src/bodyreader/package.xml")
endif()

