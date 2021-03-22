#ifndef DIGITAL_SENSOR
#define DIGITAL_SENSOR
#include <Adafruit_CircuitPlayground.h>

class DigitalSensor {
  protected:
    bool _digitalSensorValue;
  public:
    virtual bool retrieveSensorData();
};

#endif
