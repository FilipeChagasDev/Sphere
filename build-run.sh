./makeall clean
./makeall
qemu-system-aarch64 -machine raspi3 -kernel kernel8.img
./makeall clean
