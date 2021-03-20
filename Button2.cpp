#include <Adafruit_CircuitPlayground.h>
#include "Button2.h"

Button2::Button2() {}

bool Button2::retrieveSensorData() {
  _digitalSensorValue = CircuitPlayground.rightButton();
  return _digitalSensorValue;
}
