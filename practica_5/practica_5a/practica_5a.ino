int pinRojo = 9;
int pinVerde = 10;
int pinAzul = 11;

void setup(){
  pinMode(pinRojo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAzul, OUTPUT); 
}

void loop(){
  setColor(0, 255, 255); // rojo
  delay(500);
  setColor(255, 0, 255); // verde
  delay(500);
  setColor(255, 255, 0); // azul
  delay(500);
  setColor(0, 0 , 255); // amarillo
  delay(500); 
  setColor(0, 255, 0); // morado
  delay(500);
  setColor(255, 0, 150); // aqua
  delay(500);
  setColor(0, 0, 0); //blanco
  delay(500);
}

void setColor(int red, int green, int blue){
  analogWrite(pinRojo, red);
  analogWrite(pinVerde, green);
  analogWrite(pinAzul, blue); 
}
