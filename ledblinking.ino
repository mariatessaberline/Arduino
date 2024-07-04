int LEDPIN=7;

void setup()
{
  pinMode(LEDPIN, OUTPUT);
}

void loop()
{
  digitalWrite(LEDPIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LEDPIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}