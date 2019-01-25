String voice;
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
  while(Serial.available()){
    delay(10);
    char c=Serial.read();
    if(c== '#'){
      break;}
    voice+=c;}
   if(voice.length()>0){
    Serial.println(voice);
     if(voice=="*forward")
  {forward();}
  else if(voice=="*left")
  {left();Serial.println("left");}
  else if(voice=="*right")
  right();
  else if(voice=="*stop")
  Stop();
  else if(voice=="*backward")
  backword();
  voice="";
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
