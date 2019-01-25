/*Detect the presence of an obstacle with the passage of light.These are
done with the help of an IR board.
On obtaining light signals after being reflected back by the LED(principle
of IR)the corresponding the result is saved in digital pin and the value will be
visualised in the serial monitor.*/
int IN1=13;
void setup()
{
Serial.begin(9600);
pinMode(IN1,INPUT);
pinMode(11,OUTPUT);
}
void loop()
{
  Serial.println(digitalRead(13));
  if(digitalRead(13)==0)
  {
    tone(11,500);
  }
  else
  tone(11,0);
 }
