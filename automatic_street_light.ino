void setup()
{
pinMode(13,OUTPUT);
pinMode(A0,INPUT);
Serial.begin(9600);
}
void loop()
{
  int sw;
  sw=analogRead(A0);
  Serial.println(sw);
  if(sw>500)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
}
