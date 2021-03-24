#ifndef DIGITAL_SENSOR
#define DIGITAL_SENSOR
#include <Adafruit_CircuitPlayground.h>

class DigitalSensor {
  protected:
    bool _digitalSensorValue = 0;
  public:
    virtual bool retrieveSensorData() = 0;
};

#endif
