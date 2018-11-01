#define SEGB 4
#define SEGA 5
#define SEGF 6
#define SEGG 7
#define SEG 8
#define SEGC 9
#define SEGD 10
#define SEGE 11
const int TRIM = A0;
const int NAPPI = 2;
#define PRESSED LOW
#define RELEASED HIGH
int butOldState;




void setup() {
  // put your setup code here, to run once:
  pinMode(SEGB, OUTPUT);
  pinMode(SEGA, OUTPUT);
  pinMode(SEGF, OUTPUT);
  pinMode(SEGG, OUTPUT);
  pinMode(SEG, OUTPUT);
  pinMode(SEGC, OUTPUT);
  pinMode(SEGD, OUTPUT);
  pinMode(SEGE, OUTPUT);
  pinMode(TRIM, INPUT);
  pinMode(NAPPI, INPUT_PULLUP);
  butOldState = digitalRead(NAPPI);

  Serial.begin(9600);
  Serial.println(butOldState);
}

void showNum(int num){
  if (num == 0){
    zero();}
    else if (num == 1){
      one();}
      else if (num == 2){
        two();}
        else if (num == 3){
          three();}
          else if (num == 4){
            four();}
            else if (num == 5){
              five();}
               else if(num == 6 ){ 
               six();}
                else if (num == 7){
                 seven();}
                  else if (num == 8){
                   eight();}
                     else if (num == 9){
                       nine();
    }

}



int getNum() {
  int x = analogRead(TRIM);
  
  if(x < 100){
     x = 0;
  } 
  else if(x < 200){
    x = 1;
  } 
  else if(x < 300){
     x = 2;
  } 
  else if(x < 400){
     x = 3;
  } 
  else if(x < 500){
    x = 4;
  } 
  else if(x < 600){
    x = 5;
  } 
  else if(x < 700){
    x = 6;
  } 
  else if(x < 800){
    x = 7;
  } 
  else if(x < 900){
     x = 8;
  } 
  else{
     x = 9;
  } 
  return x;
}

int buttonPressed()  {
  int butNewState = digitalRead(NAPPI);
  int ret = 0;
  if (butNewState == PRESSED && butOldState == RELEASED){
    ret = 1;
  }
  butOldState = butNewState;
  return ret;

}
      
  
 

  




void loop() {

if(buttonPressed()){
  Serial.println(getNum());
  delay(200);
   showNum(getNum());
}



  
}
  void eight() {
  // put your main code here, to run repeatedly:
 digitalWrite(SEGB, LOW);
 digitalWrite(SEGA, LOW);
 digitalWrite(SEGF, LOW);
 digitalWrite(SEGG, LOW);
 digitalWrite(SEG, HIGH);
 digitalWrite(SEGC, LOW);
 digitalWrite(SEGD, LOW);
 digitalWrite(SEGE, LOW);
 

}

  void zero() {
 digitalWrite(SEGB, LOW);
 digitalWrite(SEGA, LOW);
 digitalWrite(SEGF, LOW);
 digitalWrite(SEGG, HIGH);
 digitalWrite(SEG, HIGH);
 digitalWrite(SEGC, LOW);
 digitalWrite(SEGD, LOW);
 digitalWrite(SEGE, LOW);
 

    
  }

  void one() {
 digitalWrite(SEGB, LOW);
 digitalWrite(SEGA, HIGH);
 digitalWrite(SEGF, HIGH);
 digitalWrite(SEGG, HIGH);
 digitalWrite(SEG, HIGH);
 digitalWrite(SEGC, LOW);
 digitalWrite(SEGD, HIGH);
 digitalWrite(SEGE, HIGH);
 
 }

 void two() {
 digitalWrite(SEGB, LOW);
 digitalWrite(SEGA, LOW);
 digitalWrite(SEGF, HIGH);
 digitalWrite(SEGG, LOW);
 digitalWrite(SEG, HIGH);
 digitalWrite(SEGC, HIGH);
 digitalWrite(SEGD, LOW);
 digitalWrite(SEGE, LOW);
 
  
 }

 void three() {
 digitalWrite(SEGB, LOW);
 digitalWrite(SEGA, LOW);
 digitalWrite(SEGF, HIGH);
 digitalWrite(SEGG, LOW);
 digitalWrite(SEG, HIGH);
 digitalWrite(SEGC, LOW);
 digitalWrite(SEGD, LOW);
 digitalWrite(SEGE, HIGH);
 
 }

 void four() {
 digitalWrite(SEGB, LOW);
 digitalWrite(SEGA, HIGH);
 digitalWrite(SEGF, LOW);
 digitalWrite(SEGG, LOW);
 digitalWrite(SEG, HIGH);
 digitalWrite(SEGC, LOW);
 digitalWrite(SEGD, HIGH);
 digitalWrite(SEGE, HIGH);
 
 }

 void five() {
 digitalWrite(SEGB, HIGH);
 digitalWrite(SEGA, LOW);
 digitalWrite(SEGF, LOW);
 digitalWrite(SEGG, LOW);
 digitalWrite(SEG, HIGH);
 digitalWrite(SEGC, LOW);
 digitalWrite(SEGD, LOW);
 digitalWrite(SEGE, HIGH);
 
 }

 void six() {
 digitalWrite(SEGB, HIGH);
 digitalWrite(SEGA, LOW);
 digitalWrite(SEGF, LOW);
 digitalWrite(SEGG, LOW);
 digitalWrite(SEG, HIGH);
 digitalWrite(SEGC, LOW);
 digitalWrite(SEGD, LOW);
 digitalWrite(SEGE, LOW);

 }

 void seven() {
 digitalWrite(SEGB, LOW);
 digitalWrite(SEGA, LOW);
 digitalWrite(SEGF, HIGH);
 digitalWrite(SEGG, HIGH);
 digitalWrite(SEG, HIGH);
 digitalWrite(SEGC, LOW);
 digitalWrite(SEGD, HIGH);
 digitalWrite(SEGE, HIGH);
 
 }

 void nine() {
 digitalWrite(SEGB, LOW);
 digitalWrite(SEGA, LOW);
 digitalWrite(SEGF, LOW);
 digitalWrite(SEGG, LOW);
 digitalWrite(SEG, HIGH);
 digitalWrite(SEGC, LOW);
 digitalWrite(SEGD, LOW);
 digitalWrite(SEGE, HIGH);

 }

