int trigPin = 11;
int echoPin = 8;


void setup( ) {
  // put your setup code here, to run once:
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(12,OUTPUT);
Serial.begin (115200);
}

void loop() {
  // put your main code here, to run repeatedly:
int duration;
int distance;
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);

duration = pulseIn(echoPin,HIGH);
distance = (duration *.034)/2;

if(distance<=50) {
  tone(12,HIGH);
  }

 
Serial.println(distance);
Serial.println("cm");
}
