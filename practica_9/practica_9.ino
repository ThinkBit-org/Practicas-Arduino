int PIR = 2;
int LED = 7;

void setup(){
  pinMode(PIR,INPUT);
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  if(digitalRead(PIR) == HIGH){
    Serial.println("MOVIMIENTO DETECTADO");
    digitalWrite(LED,HIGH);
    delay(100);
    digitalWrite(LED,LOW);
  }
}
