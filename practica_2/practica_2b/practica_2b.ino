int pulsadorderecho = 0;
int pulsadorizquierdo = 0;

void setup(){
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  Serial.begin(9600);
}

void loop(){
pulsadorderecho = digitalRead(7);
pulsadorizquierdo = digitalRead(8);
  if (pulsadorderecho == HIGH && pulsadorizquierdo == LOW) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  else if (pulsadorderecho == LOW && pulsadorizquierdo == HIGH) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
  }
  else if (pulsadorderecho == HIGH && pulsadorizquierdo == HIGH) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    delay(250);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    delay(250);
  }
  else {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
}
