/*
VCC a 5v 
GND a GND
Echo al pin 6 
Trig al pin 7
*/

#include <Servo.h>
#define echoPin 6 
#define trigPin 7 

float maximumRange = 20;
float minimumRange = 0; 
long duration, distance; 
int dec=0;
Servo servo1; 

void setup(){
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  servo1.attach(3);
}

void loop() {
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration/58.2; 
  Serial.println(distance);
  if (distance == maximumRange ){
   Serial.println("maxRange");
  }
 else{
   dec= distance*5;
   servo1.write(dec);
   delay(30);
  }
}
