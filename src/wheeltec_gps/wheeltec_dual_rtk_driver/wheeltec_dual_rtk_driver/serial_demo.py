# serial_demo.py
# coding=utf-8

from wheeltec_dual_rtk_driver.um982_serial import UM982Serial
import time


def main():
    port = "/dev/wheeltec_gnss"
    baudrate = 115200

    print(f"/dev/wheeltec_gnss opening ...")
    try:
        um = UM982Serial(port, baudrate)
        print(f'serial {port} open successfully! data reading...')

        for i in range(10):
            um.read_frame()
            if um.fix:
                print(f"[{i}] fix: {um.fix}")
            if um.orientation:
                print(f"[{i}] pose: {um.orientation}")
            if um.vel:
                print(f"[{i}] vel: {um.vel}")
            time.sleep(0.5)

        um.stop()
        print("test stop,closed")

    except Exception as e:
        print(f"serial {port} do not open!: {e}")
        
if __name__ == "__main__":
    main()
