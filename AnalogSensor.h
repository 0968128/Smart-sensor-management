#ifndef ANALOG_SENSOR
#define ANALOG_SENSOR
#include <Adafruit_CircuitPlayground.h>

class AnalogSensor {
  public:
    float _analogSensorValue;
    float _parsedValue;
    virtual float retrieveSensorData();
    virtual float parseSensorData(float analogData);
};

#endif
