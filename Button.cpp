#include "Arduino.h"
#include "Button.h"

/*
Konstruktori - Funktio joka luo uuden ilmentymän Button-luokasta. 
Täällä alustetaan kaikki painkeen toiminnot
*/

Button::Button(int pin)
{
  //Tuttuun tapaan määritetään pinni lähdöksi
  pinMode(pin, INPUT_PULLUP);
  //Tallennetaan omaksi tiedoksi mihin pinnin liityttiin
  _pin=pin;
  //Luetaan painikkeen tila ensimmäistä vertailua varten
  _prevState=digitalRead(pin);
}

/*
Funktio joka kertoo on painallus havaittu. bool paluuarvo voi olla 
tosi tai epätosi. buttonPressed() funktiolle ei tarvitse kertoa mitä
pinniä tutkaillaan koska se tieto saatiin jo konstruktorilla.
*/
bool Button::pressed(){
  bool ret=0;
  int x=digitalRead(_pin);
  if(x!=_prevState && x==BUTTONPRESSED){
    ret=1;
    delay(BOUNCE);
  }
  _prevState=x;
  return ret;
} 
