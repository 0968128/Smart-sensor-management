#include <Adafruit_CircuitPlayground.h>

class Button1 {
  bool _sensorValue;
  
  public:
    Button1();
    
    bool retrieveSensorData();
};
