//pin defination
const int trigPin = 9;
const int echoPin = 10;

// defines variables
long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT);        // Sets the trigPin as an Output
pinMode(echoPin, INPUT);       // Sets the echoPin as an Input
Serial.begin(9600);         // Starts the serial communication
}
void loop() {
// Clears the trigPin

digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor

Serial.print("Distance: ");
Serial.println(distance);
}

/*
Note: PULSEIN() Reads a pulse (either HIGH or LOW) on a pin. For example,
if value is HIGH, pulseIn() waits for the pin to go from LOW to HIGH, 
starts timing, then waits for the pin to go LOW and stops timing.
Returns the length of the pulse in microseconds or gives up and returns 0
if no complete pulse was received within the timeout.

Pulse length finding is basically important communication type signals
and sonar type signals where the operations are duration based.

*/
