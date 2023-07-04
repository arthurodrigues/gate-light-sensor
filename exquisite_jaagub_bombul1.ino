// C++ code
//
#include <Servo.h>

Servo servo_8;

void setup()
{
  pinMode(A0, INPUT);
  servo_8.attach(8, 500, 2500);
}

void loop()
{
  if(analogRead(A0) < 500)	{
    servo_8.write(90);
  } else {
    servo_8.write(0);
  }
}