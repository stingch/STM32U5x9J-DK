# Description
This project is built by STM32 TouchGFX Designer, based on FreeRTOS system to implement the basic UART receive function (no screen display).

After initialization, the microcontroller will send "Ready to receive", then you can send a variable length string from the PC serial port to the microcontroller, and the microcontroller will respond to the string you sent.


### UART Parameter Settings: 
- Baud rate: 115200
- Word length: 8
- Parity: Stop Bit: None
- Stop Bit 1

### result
![image](https://github.com/stingch/STM32U5x9J-DK/blob/main/uart_basic_noScreenDisplay/Serial%20test.png)
