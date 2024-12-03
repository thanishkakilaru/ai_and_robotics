const int irSensorPin = 10; // Pin connected to the IR sensor
const int ledPin = 13;      // Pin connected to the LED

void setup() {
  // Initialize the serial communication:
  Serial.begin(9600);
q
  // Set the IR sensor pin as input:
  pinMode(irSensorPin, INPUT);

  // Set the LED pin as output:
  pinMode(ledPin, OUTPUT);


}

void loop() {
  // Read the value from the IR sensor:
  int sensorValue = digitalRead(irSensorPin);
  Serial.println(sensorValue);

  // Check if the sensor detects a signal:
  if (sensorValue == 0) { // Assuming LOW means signal received
    Serial.println(0);       // Print 0 to the serial monitor
    digitalWrite(ledPin, HIGH); // Turn on the LED
  } else {
    digitalWrite(ledPin, LOW);  // Turn off the LED
  }

  // Small delay to avoid flooding the serial output:
  delay(100);
}






