bool ledOn = false;

void setup()
{
  pinMode(2, INPUT);
  attachInterrupt(digitalPinToInterrupt(2), blink, CHANGE);
  Serial.begin(9600);
}

void loop()
{
  Serial.println("loop");
  delay(1000);
}

void blink() {
  ledOn = !ledOn;
  digitalWrite(13, ledOn);
  Serial.println("interupt");
}