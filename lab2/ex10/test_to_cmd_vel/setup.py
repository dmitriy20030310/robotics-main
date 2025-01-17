from setuptools import find_packages, setup

package_name = 'test_to_cmd_vel'

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
    maintainer='dmitriy',
    maintainer_email='dmitriykil20030310@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    entry_points={
        'console_scripts': [
            'text_to_cmd_vel = text_to_cmd_vel.text_to_cmd_vel:main',
        ],
    },
)
