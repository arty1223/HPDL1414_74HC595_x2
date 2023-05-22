//outputs every symbol from HPDL1414's table, works via ascii
#include <HPDL1414_74HC595_x2.h>
//HPDL1414 display(datapin, latchpin, clockpin, writepin);
HPDL1414 disp(PB2,PB1,PB0,PB3);
void setup() {
  
}
void loop(){
  for (byte i = 0; i < 64; i++){
    disp.update(0,32+i);
    disp.update(1,32+i);
    disp.update(2,32+i);
    disp.update(3,32+i);
    delay(200);
  }
}