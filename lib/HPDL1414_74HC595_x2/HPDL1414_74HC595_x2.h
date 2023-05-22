#ifndef HPDL1414_h
#define HPDL1414_h
#include <Arduino.h>
class HPDL1414
{
public:
    HPDL1414(uint8_t data, uint8_t latch, uint8_t clock, uint8_t write);
    // void update(int num = 0);
    void update(byte digit, byte sprite);
    void string(char str[]);
    void num(int num);
private:    
    uint8_t datapin;
    uint8_t latchpin;
    uint8_t clockpin;
    uint8_t writepin;
};
#endif