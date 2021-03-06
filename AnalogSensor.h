#ifndef ANALOG_SENSOR
#define ANALOG_SENSOR

class AnalogSensor {
  protected:
    float _parsedValue, _analogSensorValue = 0;
    virtual float parseSensorData(float analogData) = 0;
  public:
    virtual float retrieveSensorData() = 0;
};

#endif
