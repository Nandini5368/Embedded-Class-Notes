const int switchpin1=4,switchpin2=5;
const int motorpin1=6,motorpin2=7;
int switchstate1=0,switchstate2=0;
void setup()
{
  pinMode(motorpin1,OUTPUT);
  pinMode(motorpin2,OUTPUT);
  pinMode(switchpin1,OUTPUT);
  pinMode(switchpin2,OUTPUT); 
}
void loop()
{
  switchstate1=digitalRead(switchpin1);
  switchstate2=digitalRead(switchpin2);
  if(switchstate1==HIGH)
  {
    digitalWrite(motorpin1,HIGH);
    digitalWrite(motorpin2,LOW);
  }
  else if(switchstate2==HIGH)
  {
    digitalWrite(motorpin1,LOW);
    digitalWrite(motorpin2,HIGH);
  }
  else
  {
    digitalWrite(motorpin1,LOW);
    digitalWrite(motorpin2,LOW);
  }
}
