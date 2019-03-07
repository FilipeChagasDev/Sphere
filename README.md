# Sphere-OS
Sphere is an operating system for raspberry pi 3.
This software is based on the version available in January 2019 of the Circle environment. It does not contain the full Circle source code. Some parts were removed, others modified.
Circle repo. : https://github.com/rsta2/circle

## Build
This project was maded to be builded in a Linux machine.
To compile it, you must have installed the following repositories:

gcc-arm-none-eabi
binutils-arm-none-eabi
gcc-aarch64-linux-gnu
g++-aarch64-linux-gnu

to build the kernel, you need to put the following commands:

```sh
 ./makeall clean
```
```sh
./makeall
```

## Simulate
To simulate the kernel, you need to use a QEMU RASPI3 virtual machine. To get it, you must compile and install the source code from the QEMU repository: https://github.com/qemu/qemu
You can do it easily using the terminal, just putting the following commands:

```sh
git clone https://github.com/qemu/qemu
```

```sh
cd qemu
```
```sh
./configure --target-list=aarch64-softmmu --enable-modules --enable-tcg-interpreter --enable-debug-tcg --python=/usr/bin/python2.7
make -j4
```
```sh
sudo make install
```
The run.sh shell script file contains the required commands to start the QEMU simulation.
The shell script file build-run.sh contains the commands required to build the kernel, start the QEMU simulation, and then clean up all the built files.

