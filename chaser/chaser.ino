void setup() {

  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
int i;
 for(i=9;i<=12;i++){
  digitalWrite(i,HIGH);
  delay(1000);
  digitalWrite(i,LOW);
  delay(1000);
  
  }
  
  // put your main code here, to run repeatedly:

}
