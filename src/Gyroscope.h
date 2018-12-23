#include <Arduino.h>
#include "util.h"
#include <Wire.h>
#include <Adafruit_L3GD20_U.h>

class Gyroscope
{
  private:
    Adafruit_L3GD20_Unified gyro;

  public:
    void setup();
    int getvalue();
};