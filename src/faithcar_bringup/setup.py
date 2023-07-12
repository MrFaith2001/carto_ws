from setuptools import setup

package_name = 'faithcar_bringup'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='faith',
    maintainer_email='hanfeichi123@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "faithcar_driver_node=faithcar_bringup.faithcar_driver:main",
            "faithcar_driver_test_node=faithcar_bringup.faithcar_driver_without_driver:main"
        ],
    },
)
