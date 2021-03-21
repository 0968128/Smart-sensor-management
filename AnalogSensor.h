#ifndef ANALOG_SENSOR
#define ANALOG_SENSOR
#include <Adafruit_CircuitPlayground.h>

class AnalogSensor {
  public:
    bool _analogSensorValue;
    virtual int retrieveSensorData();
//    virtual int parseSensorData();
};

#endif
