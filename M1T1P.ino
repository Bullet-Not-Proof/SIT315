bool ledOn;

void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  ledOn = digitalRead(2);
  digitalWrite(13, ledOn);
}
