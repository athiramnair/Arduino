/*The program blinks a single LED light for multiple times*/
void setup()
{
 pinMode(12,OUTPUT);// put your setup code here, to run once:
 pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(13,OUTPUT);
 pinMode(6,INPUT);
}

void loop() 
{
  if(digitalRead(6)==HIGH)
  {
   for(int i=10;i<=13;i++)
    {
     digitalWrite(i,HIGH);
     delay(1000);
     digitalWrite(i,LOW);
       delay(2000);// put your main code here, to run repeatedly:
    }
  }
}
