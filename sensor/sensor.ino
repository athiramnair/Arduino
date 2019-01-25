void setup()
{
  Serial.begin(9600);
}
void loop()
{
  int s1=digitalRead(A0);
  int s2=digitalRead(A1);
  int s3=digitalRead(A2);
  int s4=digitalRead(A3);
  int s5=digitalRead(A4);
  Serial.print(s1);
  Serial.print(s2);
  Serial.print(s3);
  Serial.print(s4);
  Serial.print(s5);
  delay(100);
}
