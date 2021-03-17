#include <Adafruit_CircuitPlayground.h>
#include "Button1.h"

bool _sensorValue;

Button1::Button1() {
  
}

bool Button1::retrieveSensorData() {
  _sensorValue = CircuitPlayground.leftButton();
  return _sensorValue;
}
