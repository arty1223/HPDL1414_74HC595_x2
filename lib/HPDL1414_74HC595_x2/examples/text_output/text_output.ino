//text output example
#include <HPDL1414_74HC595_x2.h>
//HPDL1414 display(datapin, latchpin, clockpin, writepin);
HPDL1414 disp(PB2,PB1,PB0,PB3);
void setup() {
  
}
void loop(){
  disp.string("TEXT");
  delay(500);
  disp.string("TEST");
  delay(500);
  disp.string("HELO");
  delay(500);
  disp.string("WRLD");
  delay(500);
  disp.string("1234");
  delay(500);
  disp.string("5678");
  delay(500);
  disp.string("90#&");
  delay(500);
}