#include <Adafruit_CircuitPlayground.h>
#include "DigitalSensor.h"

class Button2 : public DigitalSensor {
  public:
    Button2();
    bool retrieveSensorData();
};
