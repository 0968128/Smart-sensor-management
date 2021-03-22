#include <Adafruit_CircuitPlayground.h>
#include "LightSensor.h"

LightSensor::LightSensor() {};

float LightSensor::retrieveSensorData() {
  _analogSensorValue = CircuitPlayground.lightSensor();
  _parsedValue = LightSensor::parseSensorData(_analogSensorValue);
  return _parsedValue;
}

float LightSensor::parseSensorData(float analogData) {
  float parsedData = analogData * 0.24926686217;
  Serial.println(parsedData);
  return parsedData;
}
