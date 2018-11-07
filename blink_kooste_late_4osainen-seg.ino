#define SegOne 5
#define SegTwo 4
#define LED1 13
#define LED2 12
#define LED3 11
#define LED4 10
#define LEDON HIGH
#define LEDOFF LOW
#define SegThree 3
#define SegFour 2
#define segNumFour 1
#define segNumTwo 0
const int viive = 1;

int segState = segNumFour;

unsigned long previousMillis = 0;        
const long interval = 1000;

void setup() {
  // put your setup code here, to run once:
pinMode(SegThree, OUTPUT);
pinMode(SegFour, OUTPUT);
pinMode(SegOne, OUTPUT);
pinMode(SegTwo, OUTPUT);
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
segTimer();
SegDisplays();
}

void segTimer() {
   unsigned long currentMillis = millis();

   if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    if (segState == segNumFour) {
      segState = segNumTwo;
    } else {
      segState = segNumFour;
    }
} 
}

void SegDisplays() {
   
    if (segState == segNumFour) {
     showNum4_2(); 
    }
    if (segState == segNumTwo){
     showNum2_4(); 
    }
}

void showNum4_2() {
  seg1Num4();
  digitalWrite(SegOne, LOW);
  seg2Num2();
  digitalWrite(SegTwo, LOW);
  seg3Num4();
  digitalWrite(SegThree, LOW);
  seg4Num2();
  digitalWrite(SegFour, LOW);
  }

   void seg1Num4() {
  digitalWrite(SegOne, HIGH);
  showNum(4);
  delay(viive);
  }
 
 void seg2Num2() {
  digitalWrite(SegTwo, HIGH);
  showNum(2);
  delay(viive);
  }

void showNum2_4() {
  seg1Num2();
  digitalWrite(SegOne, LOW);
 
  seg2Num4();
  digitalWrite(SegTwo, LOW);
 
  seg3Num2();
  digitalWrite(SegThree, LOW);
 
  seg4Num4();
  digitalWrite(SegFour, LOW);
 
  }

   void seg1Num2() {
  digitalWrite(SegOne, HIGH);
  showNum(2);
  delay(viive);
  }

  void seg3Num2() {
  digitalWrite(SegThree, HIGH);
  showNum(2);
  delay(viive);
  }

  void seg4Num2() {
  digitalWrite(SegFour, HIGH);
  showNum(2);
  delay(viive);
  }

  void seg3Num4() {
  digitalWrite(SegThree, HIGH);
  showNum(4);
  delay(viive);
  }

  void seg4Num4() {
  digitalWrite(SegFour, HIGH);
  showNum(4);
  delay(viive);
  }
 
 void seg2Num4() {
  digitalWrite(SegTwo, HIGH);
  showNum(4);
  delay(viive);
  }

void showNum(int number) {

if      (number == 0) { binNum0(); } //show number 0 
else if (number == 1) { binNum1(); } //show number 1 
else if (number == 2) { binNum2(); } //show number 2 
else if (number == 3) { binNum3(); } //show number 3 
else if (number == 4) { binNum4(); } //show number 4 
else if (number == 5) { binNum5(); } //show number 5 
else if (number == 6) { binNum6(); } //show number 6 
else if (number == 7) { binNum7(); } //show number 7 
else if (number == 8) { binNum8(); } //show number 8 
else if (number == 9) { binNum9(); } //show number 9 
}


void binNum0() {
digitalWrite(LED1, LEDOFF);
digitalWrite(LED2, LEDOFF);
digitalWrite(LED3, LEDOFF);
digitalWrite(LED4, LEDOFF);
  }

void binNum1() {
digitalWrite(LED1, LEDON);
digitalWrite(LED2, LEDOFF);
digitalWrite(LED3, LEDOFF);
digitalWrite(LED4, LEDOFF);
  }

void binNum2() {
digitalWrite(LED1, LEDOFF);
digitalWrite(LED2, LEDON);
digitalWrite(LED3, LEDOFF);
digitalWrite(LED4, LEDOFF);
  }

void binNum3() {
digitalWrite(LED1, LEDON);
digitalWrite(LED2, LEDON);
digitalWrite(LED3, LEDOFF);
digitalWrite(LED4, LEDOFF);
  }

void binNum4() {
digitalWrite(LED1, LEDOFF);
digitalWrite(LED2, LEDOFF);
digitalWrite(LED3, LEDON);
digitalWrite(LED4, LEDOFF);
  }

void binNum5() {
digitalWrite(LED1, LEDON);
digitalWrite(LED2, LEDOFF);
digitalWrite(LED3, LEDON);
digitalWrite(LED4, LEDOFF);
  }

void binNum6() {
digitalWrite(LED1, LEDOFF);
digitalWrite(LED2, LEDON);
digitalWrite(LED3, LEDON);
digitalWrite(LED4, LEDOFF);
  }

void binNum7() {
digitalWrite(LED1, LEDON);
digitalWrite(LED2, LEDON);
digitalWrite(LED3, LEDON);
digitalWrite(LED4, LEDOFF);
  }

void binNum8() {
digitalWrite(LED1, LEDOFF);
digitalWrite(LED2, LEDOFF);
digitalWrite(LED3, LEDOFF);
digitalWrite(LED4, LEDON);
  }

void binNum9() {
digitalWrite(LED1, LEDON);
digitalWrite(LED2, LEDOFF);
digitalWrite(LED3, LEDOFF);
digitalWrite(LED4, LEDON);
  }
