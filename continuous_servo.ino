#include <Servo.h>

Servo myServo;  // create servo object to control a servo

void setup() {
  myServo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {

  // Clockwise 90 degree turn
  myServo.writeMicroseconds(1300);  // Set the PWM signal to 1.3 ms (0.0013 seconds)
  delay(363);  // Rotate clockwise for 363 ms (90 degree turn)
  
  // Anticlockwise 90 degree turn
  myServo.writeMicroseconds(1700);  // Set the PWM signal to 1.3 ms (0.0013 seconds)
  delay(372);  // Rotate anti clockwise for 372 ms (90 degree turn)

  // Stop rotation
  myServo.writeMicroseconds(1500);
  delay(2000);
}
