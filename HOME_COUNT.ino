#include <LiquidCrystal.h>
int sensorValue1=0,sensorValue2=0, count=0;
int sensorPin1=8,sensorPin2=9;
LiquidCrystal lcd(2,3,4,5,6,7);
void setup()
{
  pinMode(sensorPin1,INPUT);
  pinMode(sensorPin2,INPUT);
  lcd.begin(16,2);
  lcd.setCursor(5,0);
  lcd.print("PERSON COUNT");
  lcd.setCursor(0,1);
  lcd.print("PROJECT");
  delay(3000);
  lcd.clear();
}
void loop()
{
  sensorValue1=digitalRead(sensorPin1);
  sensorValue2=digitalRead(sensorPin2);
  Serial.println(sensorValue1);
  Serial.println(sensorValue2);
  if(sensorValue1==HIGH)
  {
    count++;
    lcd.setCursor(3,0);
    lcd.print("PERSON COUNT");
    lcd.setCursor(10,1);
    lcd.print(count);
    delay(500);
  }
  else if(sensorValue2==HIGH)
  {
    count--;
    lcd.setCursor(3,0);
    lcd.print("PERSON COUNT");
    lcd.setCursor(10,1);
    lcd.print(count);
    delay(500);
  }
  else
  {
  }
}
