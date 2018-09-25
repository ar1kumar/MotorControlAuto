#include <SoftwareServo.h>
SoftwareServo servo;                      // creates name "servo” as object to control a servo
int pos = 0;                             //servo position
int attchedPin = 9;

void setup()
{
  servo.attach(attachedPin);                // attaches the servo on pin 9 to the servo object
}

void loop()
{
  for(pos = 0; pos <= 180; pos += 1)        // goes from 0 degrees to 180 degrees
  {                                         // in steps of 1 degree
    servo.write(pos);                     // tell servo to go to position in variable 'pos'
    delay(15);                              // waits 15 milliseconds for the servo to reach the position
    SoftwareServo::refresh();               // required by SoftwareServo Library to sweep correctly
  }
  delay (20);                               // required by SoftwareServo Library to sweep correctly
  for(pos = 180; pos>=0; pos-=1)            // goes from 180 degrees to 0 degrees
  {
    servo.write(pos);                     // tell servo to go to position in variable 'pos'
    delay(15);                              // waits 15 milliseconds for the servo to reach the position
    SoftwareServo::refresh();               // required by SoftwareServo Library to sweep correctly
  }
  delay(20);                                // required by SoftwareServo Library to sweep correctly
}
