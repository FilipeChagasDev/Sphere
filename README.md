# Sphere-OS
Sphere is an operating system for raspberry pi 3.
This software is based in the Circle bare-metal environment.
Circle repo. : https://github.com/rsta2/circle

## Build
This project was maded to be builded in a Linux machine.
To compile and simulate it with QEMU, you must have installed the following repositories:

binutils-aarch64-linux-gnu
g++-aarch64-linux-gnu 
build-essential 
zlib1g-dev 
pkg-config 
libglib2.0-dev 
binutils-dev 
libboost-all-dev 
autoconf 
libtool 
libssl-dev 
libpixman-1-dev 
libpython-dev 
python-pip 
python-capstone 
virtualenv 
libjpeg62 
libgtk-3-dev

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

