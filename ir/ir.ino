int IN1 =13;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(IN1,INPUT);
pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(IN1)==1)
{

  tone(8,15000);
  }
}
