  
const int LED1 = 13;
const int LED2 = 12;
const int LED3 = 11;
const int LED4 = 10;
const int SEG = 5;
const int SEG2 = 4;



void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(SEG, OUTPUT);
  pinMode(SEG2, OUTPUT);

 
  digitalWrite(SEG2, HIGH);

}

void showBin(int bin){
  if (bin == 0){
    bin0();}
    else if (bin == 1){
      bin1();}
      else if (bin == 2){
        bin2();}
        else if (bin == 3){
          bin3();}
          else if (bin == 4){
            bin4();}
            else if (bin == 5){
              bin5();}
               else if(bin == 6 ){ 
               bin6();}
                else if (bin == 7){
                 bin7();}
                  else if (bin == 8){
                   bin8();}
                     else if (bin == 9){
                       bin9();
    }
} 


void loop() {
 seg1();
 digitalWrite(SEG, LOW);
 seg2();
 digitalWrite(SEG2, LOW);
 
}

void seg1() {
  digitalWrite(SEG, HIGH);
    showBin(4);
 delay(10);
  }

void seg2() {
  digitalWrite(SEG2, HIGH);
    showBin(2);
 delay(10);
}



void bin0() {
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
}

void bin1() {
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
}

void bin2() {
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
}

void bin3() {
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
}

void bin4() {
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
}

void bin5() {
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
}

void bin6() {
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
}

void bin7() {
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
}

void bin8() {
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
}

void bin9() {
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
}
