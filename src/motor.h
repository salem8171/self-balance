#include <Arduino.h>
#include "util.h"

class Motor
{
    private:
        int pin1;
        int pin2;
        int speedPin;
        
    public:
        void setup(int pin1, int pin2, int speedPin);
        void setSpeed(int speed);
};