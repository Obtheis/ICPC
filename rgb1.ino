int redPin = 11;
int bluePin = 10;
int greenPin = 9;

void changeColor(int _red, int _green, int _blue) {
  analogWrite(redPin, _red);
  analogWrite(bluePin, _blue);
  analogWrite(greenPin, _green);
}

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  changeColor(47, 79, 79);
  delay(2000);

  changeColor(72, 61, 139);
  delay(2000);

  changeColor(240, 230, 140);
  delay(2000);
}