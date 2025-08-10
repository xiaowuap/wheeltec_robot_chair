from setuptools import find_packages
from setuptools import setup

setup(
    name='wheeltec_mic_msg',
    version='0.0.0',
    packages=find_packages(
        include=('wheeltec_mic_msg', 'wheeltec_mic_msg.*')),
)
