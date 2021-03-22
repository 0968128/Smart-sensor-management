#include <Adafruit_CircuitPlayground.h>
#include "AnalogSensor.h"

class LightSensor : public AnalogSensor {  
  public:
    LightSensor();
    
    float retrieveSensorData();
    float parseSensorData(float analogData);
};
