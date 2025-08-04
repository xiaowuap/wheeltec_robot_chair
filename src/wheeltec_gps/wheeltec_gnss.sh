echo  'KERNEL=="ttyACM*", ATTRS{idVendor}=="1546", ATTRS{idProduct}=="01a9", MODE:="0777", GROUP:="dialout", SYMLINK+="wheeltec_gnss"' >/etc/udev/rules.d/wheeltec_gnss.rules
echo  'KERNEL=="ttyUSB*", ATTRS{idVendor}=="10c4", ATTRS{idProduct}=="ea60",ATTRS{serial}=="0005", MODE:="0777", GROUP:="dialout", SYMLINK+="wheeltec_gnss"' >/etc/udev/rules.d/wheeltec_gps.rules
echo  'KERNEL=="ttyCH343USB*", ATTRS{idVendor}=="1a86", ATTRS{idProduct}=="55d4", ATTRS{serial}=="0005", MODE:="0777", GROUP:="dialout", SYMLINK+="wheeltec_gnss"' >/etc/udev/rules.d/wheeltec_gnss_343.rules
#CH9102，同时系统没有安装对应驱动 串口号0005
echo  'KERNEL=="ttyACM*", ATTRS{idVendor}=="1a86", ATTRS{idProduct}=="55d4",ATTRS{serial}=="0005", MODE:="0777", GROUP:="dialout", SYMLINK+="wheeltec_gnss"' >>/etc/udev/rules.d/wheeltec_gnss_343.rules

service udev reload
sleep 2
service udev restart


