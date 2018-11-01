
const int LED = 8;
const int NAPPI = 2;
const int BUTTONPRESSED = LOW;

const int VILKKUU = 0;
const int EIVILKU = 1;

int ledState = LOW;     
int butOldState;

int x = EIVILKU;




unsigned long previousMillis = 0;        // will store last time LED was updated
const long interval = 1000;           // interval at which to blink (milliseconds)

void setup() {
  
  pinMode(LED, OUTPUT);
  pinMode(NAPPI, INPUT_PULLUP);
  butOldState = digitalRead(NAPPI);
  
  Serial.begin(9600);
}

void loop() {
  button();
  if( x == VILKKUU ){
    vilkkuu(); 
  }else{
    ledState=HIGH;
    digitalWrite(LED, ledState);
  }
}

void button() {

  int butNewState = digitalRead(NAPPI);
  if(butNewState != butOldState){
    if(butNewState == BUTTONPRESSED){
      if(x == EIVILKU){
        x = VILKKUU;
      }else{
        x = EIVILKU;
      }
    } 
    delay(20);
  } 
  //Päivitetään tilamuuttujan arvo seuraavaa kierrosta varten
  butOldState=butNewState;
}
    

void vilkkuu() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
    digitalWrite(LED, ledState);
  } 
}

