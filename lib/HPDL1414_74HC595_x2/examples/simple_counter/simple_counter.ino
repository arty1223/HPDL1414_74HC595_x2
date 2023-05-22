//simple counter example
#include <HPDL1414_74HC595_x2.h>
//HPDL1414 display(datapin, latchpin, clockpin, writepin);
HPDL1414 disp(PB2,PB1,PB0,PB3);
void setup() {
}
void loop(){
  for (int i = 0; i < 9999; i+=1){
    disp.num(i);
    delay(100);
  }
}