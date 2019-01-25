#include<SoftwareSerial.h>
const int trigPin=7;
const int echopin = 2;
int sensorPin = A0;
int sensorValue =0;
long duration;
int count=0;
int distance;
char data;
int CA1=10,CB1=11,CA2=9,CB2=12,IR1=5,IR4=6;//obstacle detection
int IR2=3,IR3=4;//line follower
void setup() {
pinMode(CA1,OUTPUT);
pinMode(CA2,OUTPUT);
pinMode(CB1,OUTPUT);
pinMode(CB2,OUTPUT);
pinMode(IR1,INPUT);
pinMode(IR2,INPUT);
pinMode(IR3,INPUT);
pinMode(IR4,INPUT);
pinMode(trigPin,OUTPUT);
pinMode(echopin,INPUT);
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  od();
  remote();
  lgf();
  back();
  
}

void od(){
if(digitalRead(IR1)==HIGH && digitalRead(IR4)==HIGH)//ir1-right
{
  if (count>0)
   return;
  else
  {
    count++;
  lf();
    Serial.println("forward");}
}
if(digitalRead(IR1)==LOW && digitalRead(IR4)==HIGH)
{
  right();
  delay(500);
  left();
  forward();
    Serial.println("Right");
    od();
}
if(digitalRead(IR1)==HIGH && digitalRead(IR4)==LOW)
{
 left();
 delay(500);right();forward();
    Serial.println("Left");
    od();
}
if(digitalRead(IR1)==LOW && digitalRead(IR4)==LOW)
{
  backward();
  delay(500);
  left();
  forward();
  od();
}//obstacle detection
}    
void lf(){
  if(digitalRead(IR2)==LOW && digitalRead(IR3)==LOW)//ir2-right,ir3-left
{
  forward();
    Serial.println("forward");
    lf();
}
if(digitalRead(IR2)==LOW && digitalRead(IR3)==HIGH)
{
  right();
    Serial.println("Right");
    lf();
}
if(digitalRead(IR2)==HIGH && digitalRead(IR3)==LOW)
{
 left();
    Serial.println("Left");
    lf();
}
if(digitalRead(IR2)==HIGH && digitalRead(IR3)==HIGH)
{
  Stop();
    Serial.println("Stop");
    return;
}//line follower
}
void remote(){
if (Serial.available()>0)
{
  data=Serial.read();
  Serial.println(data);

  if(data=='f'){
  forward();
  remote();
  }
  else if(data=='l'){
  left();
  remote();
  }
  else if(data=='r'){
  right();
  remote();}
  else if(data=='b'){
  backward();
  remote();
  }
  else if(data=='s')
  {
    if(analogRead(A0)>700)
    {
      Stop();
      return;
    }
    else{
       Stop();remote();
}
}

}}

void forward()
{digitalWrite(CA1,HIGH);
digitalWrite(CB1,LOW);
digitalWrite(CA2,HIGH);
digitalWrite(CB2,LOW);
Serial.println("forward");
}
void right()
{digitalWrite(CA1,LOW);
digitalWrite(CB1,HIGH);
digitalWrite(CA2,HIGH);
digitalWrite(CB2,LOW);
}
void left()
{digitalWrite(CA1,HIGH);
digitalWrite(CB1,LOW);
digitalWrite(CA2,LOW);
digitalWrite(CB2,HIGH);
}
void Stop()
{digitalWrite(CA1,LOW);
digitalWrite(CB1,LOW);
digitalWrite(CA2,LOW);
digitalWrite(CB2,LOW);
}
void backward()
{digitalWrite(CA1,LOW);
digitalWrite(CB1,HIGH);
digitalWrite(CA2,LOW);
digitalWrite(CB2,HIGH);
}
  void back()
{
 distance=ult();
 if(distance>5){
 Stop();
 return;}
 else{
 backward();
 back();
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
void lgf() {
  // put your main code here, to run repeatedly:
if(analogRead(A0)>700)
{forward();
lgf();}
else
{
  Stop();
  return;
}
} 
