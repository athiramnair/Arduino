
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int trigPin = 11;
int echoPin = 8;

void setup()
{
  // initialize the LCD
  lcd.begin();

  // Turn on the blacklight and print a message.
  lcd.backlight();
  lcd.clear();
  
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
 pinMode(12,OUTPUT);
 lcd.setCursor(5,0);
 lcd.print("cm");
 Serial.begin (115200);
}

void loop()
{
  // Do nothing here...
 int i;
int duration;
int distance;
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);

duration = pulseIn(echoPin,HIGH);
distance = (duration *.034)/2;

 
 lcd.setCursor(0,0);
 lcd.print(distance);
 
// lcd.setCursor(5,0);
// lcd.print("cm");
 delay(200);
 


  lcd.setCursor(0,1);
  lcd.print("clear");

  lcd.clear();


  lcd.setCursor(0,1);
  lcd.print("new");

   lcd.clear();
  
 

}
