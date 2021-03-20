#include <Adafruit_CircuitPlayground.h>
#include "Button1.h"

bool _buttonSensorValue;

Button1::Button1() {}

bool Button1::retrieveSensorData() {
  _buttonSensorValue = CircuitPlayground.leftButton();
  return _buttonSensorValue;
}
