int buttonpin=2;
int ledpin=13;
int buttonstate=0;
 
void setup()
{
  pinMode(buttonpin, INPUT);
  pinMode(ledpin, OUTPUT);
}
void loop()
{
 buttonstate=digitalRead(buttonpin);
  if (buttonstate==HIGH)
  {
    digitalWrite(ledpin,HIGH);
  }
  else
  {
    digitalWrite(ledpin,LOW);
  }
}