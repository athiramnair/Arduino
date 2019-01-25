char data;
int CA1=10,CB1=11,CA2=9,CB2=12;
void setup() {
  // put your setup code here, to run once:
pinMode(CA1,OUTPUT);
pinMode(CA2,OUTPUT);
pinMode(CB1,OUTPUT);
pinMode(CB2,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{
  data=Serial.read();
  Serial.println(data);
  if(data=='f')
  forward();
  else if(data=='l')
  left();
  else if(data=='r')
  right();
  else if(data=='s')
  Stop();
  else if(data=='b')
  backword();
}
}
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
void backword()
{digitalWrite(CA1,LOW);
digitalWrite(CB1,HIGH);
digitalWrite(CA2,LOW);
digitalWrite(CB2,HIGH);
}
