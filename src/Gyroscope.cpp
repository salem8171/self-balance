#include "Gyroscope.h"

void Gyroscope::setup()
{
  Wire.begin(22, 21);
  Wire.beginTransmission(MPU);
  Wire.write(0x6B); 
  Wire.write(0);    
  Wire.endTransmission(true);
}

int Gyroscope::getvalue()
{
  Wire.beginTransmission(MPU);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(MPU, 14, true);

  AcX = Wire.read() << 8 | Wire.read();
  AcY = Wire.read() << 8 | Wire.read();
  AcZ = Wire.read() << 8 | Wire.read();

  Tmp = Wire.read() << 8 | Wire.read();

  GyX = Wire.read() << 8 | Wire.read();
  GyY = Wire.read() << 8 | Wire.read();
  GyZ = Wire.read() << 8 | Wire.read();
  
  // Serial.print("Accelerometer: ");
  // Serial.print("X = "); Serial.print(AcX);
  // Serial.print(" | Y = "); Serial.print(AcY);
  // Serial.print(" | Z = "); Serial.println(AcZ); 

  // Serial.print(" | Tmp = "); Serial.print(Tmp/340.00+36.53);  //equation for temperature in degrees C from datasheet
  
  // Serial.print("Gyroscope: ");
  // Serial.print("X = "); Serial.print(GyX);
  // Serial.print(" | Y = "); Serial.print(GyY);
  // Serial.print(" | Z = "); Serial.println(GyZ);
  // Serial.println(" ");

  //TODO: correction de valeur de retour (valeur entre -255 et 255)
  
  return AcX;
}
