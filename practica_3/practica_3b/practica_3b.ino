int potenciometro = A0;
int led = 8;
int lectura = 0;
float delaymaximo = 400.0;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  lectura = analogRead(potenciometro);
  Serial.println(lectura);
  float lecturatemp = lectura*(delaymaximo/1023.0);
  digitalWrite(led, HIGH);
  delay(lecturatemp);
  digitalWrite(led, LOW);
  delay(lecturatemp);
}
