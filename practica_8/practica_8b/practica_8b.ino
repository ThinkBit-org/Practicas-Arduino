#include <dht11.h>;
#include <Servo.h>;

Servo servo1; 
dht11 DHT11;
float humedad,temperatura,aux;

void setup(){
  servo1.attach(3);
  DHT11.attach(2);
  Serial.begin(9600);
}

void loop(){
  Serial.println("\n");
  int chk = DHT11.read();
  Serial.print("Read sensor: ");
  switch (chk) {
    case 0: Serial.println("OK"); break;
    case -1: Serial.println("Checksum error"); break;
    case -2: Serial.println("Time out error"); break;
    default: Serial.println("Unknown error"); break;
  }

  temperatura= DHT11.temperature;
  humedad = DHT11.humidity;

  Serial.print("Humedad (%): ");
  Serial.println(humedad, DEC);
  delay(200);

 //Serial.print("Temperatura (°C): ");
 //Serial.println(temperatura, DEC);

  aux = 2*humedad-20;
  servo1.write(aux);
  delay(200);
}
