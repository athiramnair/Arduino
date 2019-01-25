/*The ultrasonic sensor is used to find the distance between obstacle and is 
 displayed in serial monitor.*/
const int trigPin=4;
const int echopin = 2;
long duration;
int distance;
void setup() {
  // put your setup code here, to run once:
pinMode(trigPin,OUTPUT);
pinMode(echopin,INPUT);
//pinMode(13,OUTPUT);
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
duration=pulseIn(echopin,HIGH);
distance=duration*.034/2;
Serial.println(distance);
delay(500);
}
/*if(distance>=200)
{
  digitalWrite(13,HIGH);
}
else
digitalWrite(13,LOW);
}
*/
