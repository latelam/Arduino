#include "Arduino.h"
#include "togglaus.h"

togglaus::togglaus(int pin) 
    {
    pinMode(pin, OUTPUT);
    _pin=pin;
    digitalWrite(pin, ledState);
}


void togglaus::leditila() {
      if(ledState==LEDOFF){
        ledState=LEDON;
        }else{
        ledState=LEDOFF;
      }
      
      digitalWrite(_pin, ledState);
    } 
