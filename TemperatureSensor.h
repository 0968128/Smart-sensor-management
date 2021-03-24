#include "AnalogSensor.h"

class TemperatureSensor : public AnalogSensor {
  protected:
    float parseSensorData(float analogData);
  public:
    TemperatureSensor();
    float retrieveSensorData();
};
