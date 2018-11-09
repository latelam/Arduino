#include "togglaus.h"
#include "Button.h"

togglaus LED(11);
Button S1(12);


void setup() {
  
  Serial.begin(9600);

}

void loop() {
  
  if (S1.pressed()) {
  LED.leditila();

  Serial.println("Moro!!");

  }
}
