int buttonState = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(2);

  if (buttonState == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
}