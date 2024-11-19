#! /bin/bash

### BEGIN INIT

gnome-terminal -- bash -c "source /opt/ros/noetic/setup.bash;source /home/wheeltec/wheeltec_robot/devel/setup.bash;roslaunch turn_on_wheeltec_robot pure3d_navigation.launch"

wait
exit 0


