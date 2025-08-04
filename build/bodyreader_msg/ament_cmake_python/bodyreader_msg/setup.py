from setuptools import find_packages
from setuptools import setup

setup(
    name='bodyreader_msg',
    version='0.0.0',
    packages=find_packages(
        include=('bodyreader_msg', 'bodyreader_msg.*')),
)
