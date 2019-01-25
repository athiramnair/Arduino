void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(9,INPUT);
}

void loop() {
if(digitalRead(9)==HIGH){
  digitalWrite(13,HIGH);
   }  // put your main code here, to run repeatedly:
else{
  digitalWrite(13,LOW);
  }
}
