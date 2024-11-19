#! /bin/bash

### BEGIN INIT

gnome-terminal -- bash -c "source /opt/ros/noetic/setup.bash;source /home/wheeltec/wheeltec_robot/devel/setup.bash;roslaunch usb_cam usb_cam-test.launch"

gnome-terminal -- bash -c "source /opt/ros/noetic/setup.bash;source /home/wheeltec/wheeltec_robot/devel/setup.bash;rosrun web_video_server web_video_server"

wait
exit 0


