#include <Adafruit_CircuitPlayground.h>
#include "LightSensor.h"

int _analogSensorValue, _parsedData;

LightSensor::LightSensor() {};

int LightSensor::retrieveSensorData() {
  _analogSensorValue = CircuitPlayground.lightSensor();
  _parsedData = _analogSensorValue * 0.24926686217;
  return _parsedData;
}

//int LightSensor::parseSensorData() {
//  return 0;
//}
