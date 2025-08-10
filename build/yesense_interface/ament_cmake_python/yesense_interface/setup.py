from setuptools import find_packages
from setuptools import setup

setup(
    name='yesense_interface',
    version='1.0.0',
    packages=find_packages(
        include=('yesense_interface', 'yesense_interface.*')),
)
