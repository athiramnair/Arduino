int CA1=10,CB1=11,CA2=9,CB2=12;
const int trigPin=4;
const int echopin = 2;
long duration;
int distance;
void setup() {
  // put your setup code here, to run once:
pinMode(CA1,OUTPUT);
pinMode(CA2,OUTPUT);
pinMode(CB1,OUTPUT);
pinMode(CB2,OUTPUT);
pinMode(trigPin,OUTPUT);
pinMode(echopin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
distance=ult();
if(distance>=5)
{Stop();}
else
{backword();
}
}
int ult()
{digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
duration=pulseIn(echopin,HIGH);
distance=duration*.034/2;
Serial.println(distance);
delay(500);
return distance;
}
void backword()
{
  digitalWrite(CA1,LOW);
digitalWrite(CB1,HIGH);
digitalWrite(CA2,LOW);
digitalWrite(CB2,HIGH);

}
void Stop()
{
  digitalWrite(CA1,LOW);
digitalWrite(CB1,LOW);
digitalWrite(CA2,LOW);
digitalWrite(CB2,LOW);

}
