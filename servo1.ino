#include <Servo.h>
int pos = 0;
int sensorPin = A0;

Servo servo_9;

void setup()
{
  servo_9.attach(9);
  pinMode(sensorPin, INPUT);
}

void loop()
{
  int value = analogRead(sensorPin);
  value = map(value, 0, 1023, 0, 180);
  servo_9.write(value);
  delay(100);
}