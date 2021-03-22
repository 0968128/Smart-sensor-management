#include <Adafruit_CircuitPlayground.h>
#include "AnalogSensor.h"

class TemperatureSensor : public AnalogSensor {  
  public:
    TemperatureSensor();
    
    float retrieveSensorData();
    float parseSensorData(float analogData);
};
