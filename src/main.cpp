#include <Arduino.h>
#include "motor.h"
#include "Gyroscope.h"
#include "pins.h"

Gyroscope gyro;

Motor leftMotor;
Motor rightMotor;

void setup() 
{
  gyro.setup();

  rightMotor.setup(right_motor_pin1, right_motor_pin2, right_motor_speed);
  leftMotor.setup(left_motor_pin1, left_motor_pin2, left_motor_speed);
}

void loop() 
{
  int speed = gyro.getvalue();

  rightMotor.setSpeed(speed);
  leftMotor.setSpeed(speed);
}