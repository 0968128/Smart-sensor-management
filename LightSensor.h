#include <Adafruit_CircuitPlayground.h>
#include "AnalogSensor.h"

class LightSensor : public AnalogSensor {
  protected:
    float parseSensorData(float analogData);
  public:
    LightSensor();
    float retrieveSensorData();
};
