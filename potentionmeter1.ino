void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int value=analogRead(A0);
  Serial.println(value);
  
  
  int brightness = map(value,0,1023,0,255);
  analogWrite(11,brightness);
  delay(100);
                         
}