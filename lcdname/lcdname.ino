/*Using the LCD the names are displayed one at a time.*/
#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F,16,2);
void setup() 
{
  lcd.begin();
  lcd.backlight();
  lcd.clear(); // put your setup code here, to run once:

}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("athira");
  delay(1000);
  lcd.clear();
  
  lcd.print("bineesha");
  delay(1000);
  lcd.clear();
  lcd.print("divya");
  
  delay(1000); lcd.clear();
  lcd.print("fathima");
  delay(1000);
}
