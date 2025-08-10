from setuptools import find_packages
from setuptools import setup

setup(
    name='orb_slam2_ros',
    version='1.1.0',
    packages=find_packages(
        include=('orb_slam2_ros', 'orb_slam2_ros.*')),
)
