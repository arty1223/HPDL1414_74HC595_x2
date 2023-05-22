#include <Arduino.h>
#include "HPDL1414_74HC595_x2.h"
HPDL1414::HPDL1414(uint8_t data, uint8_t latch, uint8_t clock, uint8_t write){ 
  datapin = data;
  latchpin = latch;
  clockpin = clock;
  writepin = write;
  pinMode(clockpin, OUTPUT);
  pinMode(datapin, OUTPUT);
  pinMode(latchpin, OUTPUT);
  pinMode(writepin,OUTPUT);
}
void HPDL1414::update(byte digit, byte sprite){ //вывод на регистр
  digitalWrite(latchpin, LOW);   
  shiftOut(datapin, clockpin, MSBFIRST, digit);  
  shiftOut(datapin, clockpin, MSBFIRST, sprite); 
  digitalWrite(latchpin, HIGH);
  digitalWrite(writepin, LOW);
  delayMicroseconds(1);
  digitalWrite(writepin, HIGH);
}
void HPDL1414::string(char str[]){  
  update(3,str[0]);
  update(2,str[1]);
  update(1,str[2]);
  update(0,str[3]);
}
void HPDL1414::num(int numb){  
  update(3, numb / 1000 + 48);
  update(2, numb % 1000 / 100 + 48);
  update(1, numb % 1000 % 100 / 10 + 48);  
  update(0, numb % 1000 % 100 % 10 + 48);
}