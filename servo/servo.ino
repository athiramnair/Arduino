/*They are continuous rotatory motor programmed with the help of an object.
 They cause the rotation of the paddle in both clockwise and anti-clockwise direction.*/
#include<Servo.h>
Servo myservo;
int pos=0;
void setup() {
 myservo.attach(9);
}

void loop() {
 /* for(pos=0;pos<=180;pos++)
  {
    myservo.write(pos);
    delay(15);
  }
  for(pos=180;pos>=0;pos--)
  {
    myservo.write(pos);
    delay(15);
  }*/
  myservo.write(0);
  delay(1350);
  myservo.write(90);
  delay(1350);
}
