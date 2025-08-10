from setuptools import find_packages
from setuptools import setup

setup(
    name='ollama_ros_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('ollama_ros_msgs', 'ollama_ros_msgs.*')),
)
