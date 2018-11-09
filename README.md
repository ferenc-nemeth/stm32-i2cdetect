# stm32-i2cdetect
Finds every I2C device on the bus.

### Table of Contents
- [Introduction](#introduction)
- [How it works](#how-it-works)
- [Porting](#porting)
- [References](#references)

### Introduction
Sometimes when I buy a device that supports I2C, I am confused about the device's address. Many times the manual doesn't show clearly what kind of address is it? 7-bit? 8-bit? Should I shift it left? Right? Or it is good the way it is? This is especially true for (the not so well documented) devices I buy from ebay/aliexpress.<br>
This code scans through the bus and lists every device on it. This software was inspired (as its name shows) by i2cdetect . [[1]](#references)

*Demonstration of the output:*
```
Searching for I2C devices on the bus...
Device found: 0x38
Device found: 0xB0
Device found: 0xD0
Total found devices: 3
```

### How it works
It scans the bus from 0x03 to 0x77 for devices. According to the I2C manual, addresses out of this range are invalid. [[2]](#references) If there is a device, then it prints out its 7-bit address to the Single Wire Output (SWO) interface.<br>
The code is inside Src/i2c_detect.c and Inc/i2c_detect.h. The software is simple, no tricks, nothing. Just a little help to make everyday life easier.


### Porting
I made this with Atollic TrueStudio for STM32 Nucleo-64 board and I generated every driver with CubeMX. I included the *.ioc file, so it can be reused with any STM32 controller.

### References
[1] [Linux - i2cdetect](https://linux.die.net/man/8/i2cdetect)<br>
[2] [I2C - addressing](https://www.i2c-bus.org/addressing/)<br>
