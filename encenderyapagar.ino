int dot = 100;
int dash = 300;
int LedPin = 7;
int finalDelay=1500;

void setup()
{
  pinMode(LedPin, OUTPUT);
}

void loop()
{
  digitalWrite(LedPin, LOW);
  delay(dot); 
  digitalWrite(LedPin, HIGH);
  delay(dot);
   digitalWrite(LedPin, LOW);
  delay(dot); 
  digitalWrite(LedPin, HIGH);
  delay(dot);
   digitalWrite(LedPin, LOW);
  delay(dot); 
  digitalWrite(LedPin, HIGH);
  delay(dot);

  
 digitalWrite(LedPin, LOW);
  delay(dash); 
  digitalWrite(LedPin, HIGH);
  delay(dash);

 digitalWrite(LedPin, LOW);
  delay(dash);
  digitalWrite(LedPin, HIGH);
   delay(dash);
 digitalWrite(LedPin, LOW);
  delay(dash);
  digitalWrite(LedPin, HIGH);
   delay(dash);
  digitalWrite(LedPin, LOW);
  delay(dot); 
  digitalWrite(LedPin, HIGH);
  delay(dot);
   digitalWrite(8, LOW);
  delay(dot); 
  digitalWrite(LedPin, HIGH);
  delay(dot);
   digitalWrite(LedPin, LOW);
  delay(dot); 
  digitalWrite(LedPin, HIGH);
  delay(dot);

delay(finalDelay);
}