#include <Arduino.h>
#include "util.h"

class Motor
{
    private:
        int pin1;
        int pin2;
        int speedPin;

        static int motorNumber;
        static const int freq = 5000;
        static const int resolution = 8;
        int speedChannel;
    public:
        void setup(int pin1, int pin2, int speedPin);
        void setSpeed(int speed);
};