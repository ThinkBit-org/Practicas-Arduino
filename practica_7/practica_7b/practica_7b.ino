#include <SevSeg.h>

SevSeg sevseg;
int boton = 0;
int contador = 0;

void setup(){
  sevseg.Begin(1,2,3,4,5,6,7,8,9,10,11,12,13);
  sevseg.Brightness(90);
}

void loop() {
  boton = digitalRead(A1);
  if (boton == HIGH) {
    contador++;
    delay(200);
    if (contador == 10000){
      contador=0;
    }
  }
  sevseg.PrintOutput();
  sevseg.NewNum(contador,(byte) 0);
}
