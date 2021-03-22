#ifndef ANALOG_SENSOR
#define ANALOG_SENSOR
#include <Adafruit_CircuitPlayground.h>

class AnalogSensor {
  protected:
    float _parsedValue, _analogSensorValue;
    virtual float parseSensorData(float analogData);
  public:
    virtual float retrieveSensorData();
};

#endif
