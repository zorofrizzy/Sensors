/*
Pin information.

•  State - The State pin goes HIGH when you are connected to a device (for Bluetooth communication). This pin stays LOW even if a device is paired, therefore unless connected the pin stays LOW.
• RXD – This is the pin connected to the Arduino TX pin for communication. It works as a receiver.
• TXD – This pin is connected to the Arduino RX pin communication. Works as a transfer pin.
• GND – Ground pin 
• VCC – Power pin, one can supply 5V here.
• EN/KEY – This pin is used to enter the AT mode for communication.

*/

#include<SoftwareSerial.h>

//Create object named bt of the class SoftwareSerial 
SoftwareSerial bt(0,1);     // (Rx,Tx) pins defined  

void setup() {
  bt.begin(9600);    // Define baud rate for software serial communication 
  Serial.begin(9600);     // Define baud rate for serial communication 

}




void loop() {
  //char input[10]; //Using char is recommended because String defines a char of random size sometimes
  String input;
    if (bt.available())  // Remove if statement in case of errors/ no result
      { 
      input=bt.readString();
    
    Serial.println(input);       //Print character received on to the serial monitor
    }
}
