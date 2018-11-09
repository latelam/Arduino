#ifndef togglaus_h
#define togglaus_h

#include "Arduino.h"

const int LEDON = LOW;
const int LEDOFF = HIGH;

class togglaus 
{
  public:
    togglaus(int pin);
    void leditila();

  private:
    int LED;
    int _pin;
    int ledState=LEDOFF;
  
  };

#endif
