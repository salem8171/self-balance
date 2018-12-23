#include <Arduino.h>
#include "motor.h"
#include "Gyroscope.h"
#include "pins.h"

Gyroscope gyro;

Motor leftMotor(right_motor_pin1, right_motor_pin2, right_motor_speed);
Motor rightMotor(left_motor_pin1, left_motor_pin2, left_motor_speed);

void setup() 
{
  gyro.setup();

  rightMotor.setup();
  leftMotor.setup();
}

void loop() 
{
  int speed = gyro.getvalue();

  rightMotor.setSpeed(speed);
  leftMotor.setSpeed(speed);
}