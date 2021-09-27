## Python Serial Monitor

import serial

comPort = serial.Serial('/dev/ttyUSB0')
comPort.baudrate = 115200
comPort.timeout = 3

while(True):
    data = comPort.readline()
    data = data.decode('ascii')
    print(data)

