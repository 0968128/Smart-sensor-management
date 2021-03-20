#include <Adafruit_CircuitPlayground.h>
#include "Button1.h"

bool _digitalSensorValue;

Button1::Button1() {}

bool Button1::retrieveSensorData() {
  _digitalSensorValue = CircuitPlayground.leftButton();
  return _digitalSensorValue;
}
