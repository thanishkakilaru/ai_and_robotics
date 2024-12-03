const int echoPin = 9; // Echo pin connected to pin 9
const int trigPin = 8; // Trigger pin connected to pin 8

void setup() {
  // Initialize serial communication:
  Serial.begin(9600);

  // Set echoPin as input and trigPin as output:
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
}

void loop() {
  // Send a 10 microsecond pulse to the trigger pin:
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the time it takes for the echo to be received:
  float time = pulseIn(echoPin, HIGH);

  // Calculate the distance:
  // Speed of sound in air is approximately 343 meters per second (34300 cm/s)
  // distance = (speed * time) / 2
  // time is in microseconds, so we need to convert speed to cm/us: 34300 cm/s = 0.0343 cm/us
  float distance = (time * 0.0343) / 2;

  // Print the distance to the serial monitor:
  Serial.println(distance);

  // Small delay before the next measurement:
  delay(100);
}
