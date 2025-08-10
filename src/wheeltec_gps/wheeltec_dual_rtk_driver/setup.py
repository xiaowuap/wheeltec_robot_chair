from setuptools import find_packages, setup

package_name = 'wheeltec_dual_rtk_driver'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['launch/wheeltec_dual_rtk_driver_unicore.launch.py']),
        ('share/' + package_name, ['package.xml']),
        
    ],
    install_requires=['setuptools','launch'],
    zip_safe=True,
    maintainer='wheeltec',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "dual_rtk_driver_node = wheeltec_dual_rtk_driver.wheeltec_dual_rtk_driver:main",
            "serial_demo_node     = wheeltec_dual_rtk_driver.serial_demo:main",
        ],
    },
)
