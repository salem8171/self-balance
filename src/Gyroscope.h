#include <Arduino.h>
#include "util.h"
#include <Wire.h>

class Gyroscope
{
  private:
    const int MPU = 0x68; 
    int16_t AcX,AcY,AcZ,Tmp,GyX,GyY,GyZ;

  public:
    void setup();
    int getvalue();
};