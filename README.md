# Sensors

I'll keep on adding sensors here
after interfacing them for easy
usage.

These sensors are to be integrated with the Arduino development board units.

# 1.  Ultrasonic 
HS04 sensor. 

4 pins (Vcc Gnd, Trig, Echo)

No PWM required

Range 4 cm to 4mtr

current : 15mA

# 2. Any Resistive Sensor (LDR, Flex, Raindrop, etc)

Always make a voltage divider circuit for 2 pin resistive sensor.
The resistance to be added is the maximum resistance that the 
offers for the best deflection.

# 3. Bluetooth (HC05)

Pin information is given in the code itself.
We generally use just 4 pins (Vcc, Gnd, Rx, Tx). 
Remove Rx Tx pins while uploading the code to avoid errors.
