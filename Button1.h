#include <Adafruit_CircuitPlayground.h>

class Button1 {
  private:
    bool _buttonSensorValue;
  
  public:
    Button1();
    
    bool retrieveSensorData();
};
