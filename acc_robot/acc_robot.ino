void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(A0,INPUT);
pinMode(A1,INPUT);

}
int x;
int y;
void loop() {
  // put your main code here, to run repeatedly:
  x=analogRead(A0);
  y=analogRead(A1);
if((x>350&&x<370)&&(y>380&&y<430))
  {
  digitalWrite(11,HIGH);
digitalWrite(12,LOW);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
}
 if((x>280&&x<350)&&(y>350&&y<380))
{
  digitalWrite(11,LOW);
digitalWrite(12,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
}
 if((x>370&&x<410)&&(y>350&&y<380))

{digitalWrite(11,HIGH);
digitalWrite(12,LOW);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
  
}
if((x>350&&x<370)&&(y>300&&y<350))
 { digitalWrite(11,LOW);
digitalWrite(12,HIGH);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);

}
 if((x>350&&x<370)&&(y>350&&y<380))
 { digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
 }
}
