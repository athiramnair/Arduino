int CA1=10,CB1=11,CA2=9,CB2=12,IR1=5,IR4=6;
void setup() {
  // put your setup code here, to run once:
pinMode(CA1,OUTPUT);
pinMode(CA2,OUTPUT);
pinMode(CB1,OUTPUT);
pinMode(CB2,OUTPUT);
pinMode(IR1,INPUT);
pinMode(IR4,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(IR1)==LOW && digitalRead(IR4)==LOW)
{
  forward();
    Serial.println("forward");
}
if(digitalRead(IR1)==LOW && digitalRead(IR4)==HIGH)
{
  right();
    Serial.println("Right");
}
if(digitalRead(IR1)==HIGH && digitalRead(IR4)==LOW)
{
 left();
    Serial.println("Left");
}
if(digitalRead(IR1)==HIGH && digitalRead(IR4)==HIGH)
{
  Stop();
    Serial.println("Stop");
}
}

void forward()
{digitalWrite(CA1,HIGH);
digitalWrite(CB1,LOW);
digitalWrite(CA2,HIGH);
digitalWrite(CB2,LOW);
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
