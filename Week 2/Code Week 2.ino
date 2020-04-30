int ledPin = 7;
int ldrPin = A0;

void setup()
{
  pinMode(ledPin,OUTPUT);
  pinMode(ldrPin,INPUT);
}
void loop()
{
int ldrStatus = analogRead(ldrPin);
if(ldrStatus <= 200)
{
  digitalWrite(ledPin,LOW);
}
else
{
  digitalWrite(ledPin,HIGH);
}
}

