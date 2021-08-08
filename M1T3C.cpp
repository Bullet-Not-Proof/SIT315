
bool redOn = false;
bool greenOn = false;
bool blueOn = false;

void setup()
{
  noInterrupts();
  attachInterrupt(digitalPinToInterrupt(2), red, RISING);
  attachInterrupt(digitalPinToInterrupt(3), green, RISING);
  Serial.begin(9600);
  interrupts();
}

void loop()
{
    
}

void red() {
  redOn = !redOn;
  digitalWrite(13, redOn);
  Serial.println("red");
}
void green() {
  greenOn = !greenOn;
  digitalWrite(11, greenOn);
  Serial.println("green");
}