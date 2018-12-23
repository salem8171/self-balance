#include <Arduino.h>
#include "util.h"

class Motor
{
    private:
        int pin1;
        int pin2;
        int speedPin;
        
    public:
        Motor(int pin1, int pin2, int speedPin);
        void setup();
        void setSpeed(int speed);
};