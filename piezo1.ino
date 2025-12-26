int sensorPin = A1;
int buzzerPin = 7;

void setup()
{
  pinMode(sensorPin, INPUT);
  pinMode(buzzerPin, HIGH); 
  Serial.begin(9600);
}

void loop()
{
  int value = analogRead(sensorPin);
  Serial.println(value);
  
  if (value < 200) {
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }
  
  delay(100);
}