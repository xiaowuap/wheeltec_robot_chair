#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/wheeltec/wheeltec_robot/src/wheeltec_gps_driver"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/wheeltec/wheeltec_robot/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/wheeltec/wheeltec_robot/install/lib/python3/dist-packages:/home/wheeltec/wheeltec_robot/build/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/wheeltec/wheeltec_robot/build" \
    "/usr/bin/python3" \
    "/home/wheeltec/wheeltec_robot/src/wheeltec_gps_driver/setup.py" \
     \
    build --build-base "/home/wheeltec/wheeltec_robot/build/wheeltec_gps_driver" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/wheeltec/wheeltec_robot/install" --install-scripts="/home/wheeltec/wheeltec_robot/install/bin"
