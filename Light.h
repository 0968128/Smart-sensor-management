#include <Adafruit_CircuitPlayground.h>

class Light {
  private:
    int _neoPixel;
  public:
    Light(int neoPixel);
    void turnOn(int colorCode[]);
    void turnOff();
};
