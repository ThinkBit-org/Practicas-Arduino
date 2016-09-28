int led = 7;
int led2 = 8;
int tiempo = 500;

void setup() { 
  pinMode(led, OUTPUT); 
  pinMode(led2, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  digitalWrite(led2, LOW);
  delay(tiempo); 
  digitalWrite(led, LOW); 
  digitalWrite(led2, HIGH);
  delay(tiempo); 
}
