void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);

}
int i=0;
void loop() {
 
  // put your main code here, to run repeatedly:
  if(i==0)
{
 
digitalWrite(10,LOW);
digitalWrite(12,HIGH);
digitalWrite(13,HIGH);
digitalWrite(11,LOW);
delay(2000);
i++;
}
digitalWrite(10,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
digitalWrite(11,LOW);
}
