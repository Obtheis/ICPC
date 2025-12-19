// C++ code
//
byte myLed=8;
byte button=7;
byte bientro=6;

void setup()
{
  pinMode(myLed, OUTPUT);
  pinMode(button, INPUT);
  pinMode(bientro, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int statusButton=digitalRead(button);
  int mode=0;
  
  if ( statusButton== 1) {
    mode++;
    if (mode > 2) {
      mode = 0;
    }
  }
  if (mode == 0) {
    digitalWrite(myLed, HIGH); delay(500);
    digitalWrite(myLed, LOW);  delay(500);
  }
  else if (mode == 1) {
    digitalWrite(myLed, HIGH); delay(1000);
    digitalWrite(myLed, LOW);  delay(1000);
  }
  else {
    digitalWrite(myLed, HIGH); delay(1500);
    digitalWrite(myLed, LOW);  delay(1500);
  }
  
  

}