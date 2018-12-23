#include "Gyroscope.h"

void Gyroscope::setup()
{
  gyro.enableAutoRange(true);
  if (!gyro.begin())
  {
    while (1);
  }
}

int Gyroscope::getvalue()
{
  sensors_event_t event; 
  gyro.getEvent(&event);
 
  // Serial.print("X: "); Serial.print(event.gyro.x);
  // Serial.print("   Y: "); Serial.print(event.gyro.y);
  // Serial.print("   Z: "); Serial.println(event.gyro.z);

  // TODO: Correction

  return (int) event.gyro.x;
}
