int pinRed = 13;
int pintYellow = 12;
int pinGreen = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinRed, OUTPUT);
  pinMode(pintYellow, OUTPUT);
  pinMode(pinGreen, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinRed, 0);
  digitalWrite(pintYellow, 0);
  digitalWrite(pinGreen, 1);
  delay(2000);
  digitalWrite(pinRed, 0);
  digitalWrite(pintYellow, 1);
  digitalWrite(pinGreen, 0);
  delay(2000);
  digitalWrite(pinRed, 1);
  digitalWrite(pintYellow, 0);
  digitalWrite(pinGreen, 0);
  delay(2000);

  
}
