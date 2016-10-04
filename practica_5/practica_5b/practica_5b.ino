int pinRojo = 9;
int pinVerde = 10;
int pinAzul = 11;
int contador =0;

void setup(){
  pinMode(pinRojo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAzul, OUTPUT); 
}

void loop(){
  int valor=analogRead(A0);
  valor=map(valor,0,1023,1,10);
  if(contador==0){
    for(int r=255; r=0; r--){
      setColor(r, 255,255);
      delay(valor);
    }
    contador++;
  }
  else if(contador==1){
    for(int g=255; g=0 ; g--){
      setColor(255, g,255);
      delay(valor);
    }
    contador++;
  }
  else{
    for(int b=255; b=0 ; b--){
      setColor(255, 255,b);
      delay(valor);
    }
    contador=0;
  }
}

void setColor(int red, int green, int blue){
  analogWrite(pinRojo, red);
  analogWrite(pinVerde, green);
  analogWrite(pinAzul, blue); 
}
