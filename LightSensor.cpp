#include <Adafruit_CircuitPlayground.h>
#include "LightSensor.h"

int _lightSensorValue, _parsedData;

LightSensor::LightSensor() {};

int LightSensor::retrieveSensorData() {
  _lightSensorValue = CircuitPlayground.lightSensor();
  _parsedData = _lightSensorValue * 0.24926686217;
  return _parsedData;
}
