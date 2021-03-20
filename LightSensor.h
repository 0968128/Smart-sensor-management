#include <Adafruit_CircuitPlayground.h>

class LightSensor {
  private:
    int _lightSensorValue, _parsedData;
  
  public:
    LightSensor();
    
    int retrieveSensorData();
};
