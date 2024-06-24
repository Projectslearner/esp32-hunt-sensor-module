/*
    Project name : ESP32 Hunt sensor module
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-hunt-sensor-module
*/

const int hallSensorPin = 15; // Digital pin connected to the DO pin of the Hall sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(hallSensorPin, INPUT); // Set Hall sensor pin as INPUT
}

void loop() {
  int sensorState = digitalRead(hallSensorPin); // Read the state of the Hall sensor

  // Check if a magnetic field is detected
  if (sensorState == LOW) {
    Serial.println("Magnetic field detected!");
  } else {
    Serial.println("No magnetic field detected.");
  }

  delay(500); // Add a small delay before the next reading
}
