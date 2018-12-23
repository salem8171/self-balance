#include "motor.h"

void Motor::setup(int pin1, int pin2, int speedPin)
{
    this -> pin1 = pin1;
    this -> pin2 = pin2;
    this -> speedPin = speedPin;

    pmo(pin1);
    pmo(pin2);
    pmo(speedPin);

    speedChannel = motorNumber;
    motorNumber++;

    ledcSetup(speedChannel, freq, resolution);
    ledcAttachPin(speedPin, speedChannel);
    ledcWrite(speedChannel, 0);
}

void Motor::setSpeed(int speed)
{
    if (speed >= 0)
    {  
        dwh(pin1);
        dwl(pin2);
        ledcWrite(speedChannel, speed);
    }
    else 
    {
        dwl(pin1);
        dwh(pin2);
        ledcWrite(speedChannel, -speed);
    }
}