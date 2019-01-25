/*The program is used to blink the LED light for an infinite loop for mutiple LED light*/
void setup() 
{
 pinMode(12,OUTPUT);// put your setup code here, to run once:
 pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(13,OUTPUT);
}

void loop() {
  for(int i=10;i<=13;i++)
  {
 digitalWrite(i,HIGH);
 delay(1000);
 digitalWrite(i,LOW);
 delay(2000);// put your main code here, to run repeatedly:
  }
}
