#include <Adafruit_CircuitPlayground.h>
#include "TemperatureSensor.h"

TemperatureSensor::TemperatureSensor() {};

float TemperatureSensor::retrieveSensorData() {
  _analogSensorValue = CircuitPlayground.temperature();
  _parsedValue = TemperatureSensor::parseSensorData(_analogSensorValue);
  return _parsedValue;
}

float TemperatureSensor::parseSensorData(float analogData) {
  float parsedData = analogData * 8;
  return parsedData;
}
