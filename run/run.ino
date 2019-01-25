int CA1=10,CB1=11,CA2=9,CB2=12;

void setup() {
  // put your setup code here, to run once:
pinMode(CA1,OUTPUT);
pinMode(CA2,OUTPUT);
pinMode(CB1,OUTPUT);
pinMode(CB2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(CA1,HIGH);
digitalWrite(CB1,LOW);
digitalWrite(CA2,HIGH);
digitalWrite(CB2,LOW);
}
