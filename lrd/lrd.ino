int sensorPin = A0 ;

int sensorValue = 0;

void setup() {
Serial.begin(9600);  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

sensorValue = analogRead(sensorPin);
Serial.print("sensorValue");

Serial.println(sensorValue);
delay(2000);

}
