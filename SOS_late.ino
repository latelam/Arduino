const int PIN = 13;

void setup()
{
  pinMode(PIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  piste(); 
  piste(); 
  piste();
  viiva(); 
  viiva(); 
  viiva();
  piste(); 
  piste(); 
  piste();
  
  delay(3000);
}

void piste()
{
  digitalWrite(PIN, HIGH);
  Serial.println(".");
  delay(250);
  digitalWrite(PIN, LOW);
  delay(250);
}

void viiva()
{
  digitalWrite(PIN, HIGH);
  Serial.println("-");
  delay(1000);
  digitalWrite(PIN, LOW);
  delay(250);
}
