execute_process(COMMAND "/home/wheeltec/wheeltec_robot/build/wheeltec_gps_driver/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/wheeltec/wheeltec_robot/build/wheeltec_gps_driver/catkin_generated/python_distutils_install.sh) returned error code ")
endif()