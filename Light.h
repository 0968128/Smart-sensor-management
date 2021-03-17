#include <Adafruit_CircuitPlayground.h>

class Light {
  int _neoPixel;
  
  public:
    Light(int neoPixel);
    
    void turnOn(int colorCode[]);

    void turnOff();
};
