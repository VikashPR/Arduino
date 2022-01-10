
  int pinNumber = 13;
  int delayTime = 50;
void setup() {
  pinMode(pinNumber, OUTPUT);
}
void loop() {
  digitalWrite(pinNumber, HIGH);   
  delay(delayTime);                       
  digitalWrite(pinNumber, LOW);    
  delay(delayTime);                      
}
