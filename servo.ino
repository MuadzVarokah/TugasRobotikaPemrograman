#include <Servo.h>

Servo servo;
const int pinPwm = 6;

void setup() {
  Serial.begin(9600);
  servo.attach(pinPwm);
}

void loop() {
  servo.write(90);
  delay(500);
  servo.write(0);
  delay(500);
}
