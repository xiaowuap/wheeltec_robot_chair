from setuptools import find_packages
from setuptools import setup

setup(
    name='nmea_msgs',
    version='2.0.0',
    packages=find_packages(
        include=('nmea_msgs', 'nmea_msgs.*')),
)
