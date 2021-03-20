#ifndef DIGITAL_SENSOR
#define DIGITAL_SENSOR
#include <Adafruit_CircuitPlayground.h>

class DigitalSensor {
  public:
    bool _digitalSensorValue;
    virtual bool retrieveSensorData();
};

#endif
