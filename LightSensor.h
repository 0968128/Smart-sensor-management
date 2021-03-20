#include <Adafruit_CircuitPlayground.h>

class LightSensor {
  private:
    int _analogSensorValue, _parsedData;
  
  public:
    LightSensor();
    
    int retrieveSensorData();
};
