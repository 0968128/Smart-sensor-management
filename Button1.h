#include <Adafruit_CircuitPlayground.h>
#include "DigitalSensor.h"

class Button1 : public DigitalSensor {
  public:
    Button1();
    
    bool retrieveSensorData();
};
