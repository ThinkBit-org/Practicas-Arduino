#include <SevSeg.h>

SevSeg sevseg;
unsigned long timer;
int CentSec=0;

void setup(){
  sevseg.Begin(1,2,3,4,5,6,7,8,9,10,11,12,13);
  sevseg.Brightness(90);
  timer = millis();
}

void loop() {
  sevseg.PrintOutput();
  unsigned long mils = millis();
  if (mils-timer == 10) {
    timer = mils;
    CentSec++;
    if (CentSec == 10000) {
      CentSec = 0;
    }
    sevseg.NewNum(CentSec,(byte) 2);
  }
}
