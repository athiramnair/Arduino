/*Using the LCD is used to display data with a maximum of 2 lines and 16 characters possible or one word at a time 
 with overlapping after clearing the screen.They are used to display the distance from the obstacle*/
#include<Wire.h>
#include<LiquidCrystal_I2C.h>
const int trigPin=11;
const int echopin = 8;
long duration;
int distance;

LiquidCrystal_I2C lcd(0x3F,16,2);
void setup()
{
  pinMode(trigPin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(115200);

  lcd.begin();
  lcd.backlight();
  lcd.clear();// put your setup code here, to run once:

}

void loop()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echopin,HIGH);
  distance=duration*.034/2;
  Serial.println(distance);
  lcd.setCursor(0,0);
  lcd.print(distance);
  delay(2000);
}
