#! /bin/bash

### BEGIN INIT

gnome-terminal -- bash -c "source /opt/ros/noetic/setup.bash;source /home/wheeltec/wheeltec_robot/devel/setup.bash;roscore"

sleep 5

gnome-terminal -- bash -c "source /opt/ros/noetic/setup.bash;source /home/wheeltec/wheeltec_robot/devel/setup.bash;source /home/wheeltec/wheeltec_lidar/devel/setup.bash;rosrun qt_ros_test qt_ros_test"

wait
exit 0


