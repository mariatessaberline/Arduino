int LEDPIN1=7;
int LEDPIN2=6;
int LEDPIN3=5;

void setup()
{
  pinMode(LEDPIN1, OUTPUT);
  pinMode(LEDPIN2, OUTPUT);
  pinMode(LEDPIN2, OUTPUT);
}

void loop()
{
  digitalWrite(LEDPIN1, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LEDPIN1, LOW);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(LEDPIN2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LEDPIN2, LOW);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(LEDPIN3, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LEDPIN3, LOW);
  delay(3000); // Wait for 1000 millisecond(s)
}