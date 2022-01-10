int redLight = 9;
int blueLight = 10;
int greenLight = 11;
void setup() {
  pinMode(redLight, OUTPUT);
  pinMode(blueLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
}
void loop() {
    digitalWrite(greenLight, HIGH);
}
