#include <Adafruit_CircuitPlayground.h>
#include "DigitalSensor.h"

class Button1 : public DigitalSensor {
  private:
    bool _digitalSensorValue;
  
  public:
    Button1();
    
    bool retrieveSensorData();
};
