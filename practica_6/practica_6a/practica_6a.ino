/*
VCC a 5v 
GND a GND
Echo al pin 6 
Trig al pin 7
*/

#define echoPin 6 
#define trigPin 7 

float maximumRange = 20;
float minimumRange = 0; 
long duration, distance, contador; 
float aux;

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop(){
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration/58.2; 
  Serial.println(distance);
  if (distance > maximumRange){
    Serial.println("OUT_OF_RANGE");
    for (int i = 9; i <= 12; i++){
      digitalWrite(i,HIGH);
    }
    delay(150);
    for (int i = 9; i <= 12; i++){
      digitalWrite(i,LOW);
    }
    delay(150);
  }
  else {
    aux = (1.0/maximumRange)*4.0*distance;
    contador = aux;
    contador = contador + 9;
    for (int i = 9; i <= contador; i++){
      digitalWrite(i,HIGH);
    }
    for (int i = 12; i > contador; i--){
       digitalWrite(i,LOW);
    }
  delay(50);
  }
}
