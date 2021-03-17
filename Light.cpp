#include <Adafruit_CircuitPlayground.h>
#include "Light.h"

int _neoPixel;

Light::Light(int neoPixel) {
  _neoPixel = neoPixel;
}
    
void Light::turnOn(int colorCode[]) {
  CircuitPlayground.setPixelColor(_neoPixel, colorCode[0],  colorCode[1], colorCode[2]);
}

void Light::turnOff() {
  CircuitPlayground.clearPixels();
}
