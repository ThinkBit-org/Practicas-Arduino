#include <Servo.h>;
long duration, distance, dec;
Servo servo1; 

void setup() {
  Serial.begin (9600);
  servo1.attach(3);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  dec= 2*(sensorValue - 150);
  servo1.write(dec);
  delay(100); 
}
