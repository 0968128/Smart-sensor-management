#include <Adafruit_CircuitPlayground.h>
#include "AnalogSensor.h"

class LightSensor : public AnalogSensor {
  private:
    int _analogSensorValue, _parsedData;
  
  public:
    LightSensor();
    
    int retrieveSensorData();
//    int parseSensorData();
};
