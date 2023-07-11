from setuptools import find_packages
from setuptools import setup

setup(
    name='faithcar_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('faithcar_msgs', 'faithcar_msgs.*')),
)
