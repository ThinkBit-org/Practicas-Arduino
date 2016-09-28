int potenciometro = A0;
int led = 8;
int lectura = 0;

void setup(){
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  lectura = analogRead(potenciometro);
  Serial.println(lectura); 

  digitalWrite(led, HIGH);
  delay(lectura);
  digitalWrite(led, LOW);
  delay(lectura);
}
