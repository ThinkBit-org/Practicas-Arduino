int pulsador = 0;

void setup(){
  pinMode(4,OUTPUT);
  pinMode(12, INPUT);
  Serial.begin(9600);
}

void loop(){
  pulsador = digitalRead(12);
  if (pulsador == HIGH){
    digitalWrite(4,HIGH);
  }else{
    digitalWrite(4,LOW); 
  }
}
