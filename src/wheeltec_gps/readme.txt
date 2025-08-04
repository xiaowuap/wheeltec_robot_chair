一、编译相关：

编译功能包需要的依赖：
sudo pip3 install transforms3d
sudo apt install ros-humble-tf-transformations
sudo apt install ros-humble-gps-umd
pip3 install serial
pip3 install pyserial
pip install um982-driver

或一键安装依赖：
rosdep install --from-paths src --ignore-src -r -y
或
rosdepc install --from-paths src --ignore-src -r -y

---------------------------------------------------------------------------------------------

二、运行相关：

运行设备别名规则文件:
sudo sh wheeltec_gnss.sh


使用NMEA协议解析WHEELTEC G60/G70：
ros2 launch wheeltec_gps_driver wheeltec_nmea_driver.launch.py

使用NMEA协议解析WHEELTEC G90：
ros2 launch wheeltec_gps_driver wheeltec_dual_rtk_driver_nmea.launch.py

--gps topic: /gps/fix
--gpgga topic: /gnss/gpgga
--heading topic: /heading
--gps frame_id: navsat_link

在RVIZ中记录经纬度轨迹(WHEELTEC G60/G70)：
ros2 launch wheeltec_gps_driver nmea_gps_path.launch.py

在RVIZ中记录经纬度轨迹(WHEELTEC 90)：
ros2 launch wheeltec_gps_driver nmea_gps_path_dualrtk.launch.py

---------------------------------------------------------------------------------------------

使用UBLOX协议解析WHEELTEC G70模块(仅WHEELTEC G70)：
ros2 launch wheeltec_gps_driver wheeltec_ublox_driver.launch.py
--gps topic: /ublox_gps_node/fix
--gps frame_id: navsat_link

使用UBLOX协议在RVIZ中记录经纬度轨迹(仅WHEELTEC G70)：
ros2 launch wheeltec_gps_driver ublox_gps_path.launch.py

---------------------------------------------------------------------------------------------

使用Unicore协议解析WHEELTEC G90模块(仅WHEELTEC G90)：
ros2 launch wheeltec_gps_driver wheeltec_dual_rtk_driver_unicore.launch.py

使用Unicore协议在RVIZ中记录经纬度轨迹(仅WHEELTEC G90)：
ros2 launch wheeltec_gps_driver wheeltec_dual_rtk_driver_unicore.launch.py

--gps topic: /gps/fix
--gps frame_id: navsat_link
--utm pose topic:/gps/utm_pose
--heading topic:/gps/euler

