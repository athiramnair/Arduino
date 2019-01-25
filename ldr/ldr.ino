/*The LDR is a light detective component.The intensity of light is
 displayed in the serial monitor.*/
int sensorPin = A0;
int sensorValue =0;
void setup() 
{
 Serial.begin(9600);
 pinMode(13,OUTPUT);
}

void loop()
{
  sensorValue=analogRead(sensorPin);
  Serial.print("sensorValue");
  Serial.println(sensorValue);
  delay(500);
  if(sensorValue<=200)
  {
    digitalWrite(13,HIGH);
  }
  else
  digitalWrite(13,LOW);
}
