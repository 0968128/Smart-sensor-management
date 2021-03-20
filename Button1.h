#include <Adafruit_CircuitPlayground.h>

class Button1 {
  private:
    bool _digitalSensorValue;
  
  public:
    Button1();
    
    bool retrieveSensorData();
};
