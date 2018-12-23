#include "motor.h"

void Motor::setup(int pin1, int pin2, int speedPin)
{
    this -> pin1 = pin1;
    this -> pin2 = pin2;
    this -> speedPin = speedPin;

    pmo(pin1);
    pmo(pin2);
    pmo(speedPin);

    aw(speedPin, 0);
}

void Motor::setSpeed(int speed)
{
    if (speed >= 0)
    {  
        dwh(pin1);
        dwl(pin2);
    aw(speedPin, speed);
    }
    else 
    {
        dwl(pin1);
        dwh(pin2);
        aw(speedPin, -speed);
    }
}