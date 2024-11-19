#! /bin/bash

### BEGIN INIT

gnome-terminal -- bash -c "source /opt/ros/noetic/setup.bash;source /home/wheeltec/wheeltec_robot/devel/setup.bash;roslaunch xf_mic_asr_offline_circle base.launch"

sleep 5

gnome-terminal -- bash -c "source /opt/ros/noetic/setup.bash;source /home/wheeltec/wheeltec_robot/devel/setup.bash;roslaunch xf_mic_asr_offline_circle mic_init.launch"

wait
exit 0


