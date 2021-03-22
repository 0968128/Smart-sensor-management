#include <Adafruit_CircuitPlayground.h>
#include "Light.h"
#include "Button1.h"
#include "Button2.h"
#include "LightSensor.h"
#include "TemperatureSensor.h"

bool rightButtonPressed;
int neoPixel = 0;
Light* light = new Light(neoPixel);
DigitalSensor* button_1 = new Button1();
DigitalSensor* button_2 = new Button2();
AnalogSensor* sensor = new LightSensor();

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  // put your main code here, to run repeatedly:  
  int colorCode[] = {255, sensor->retrieveSensorData(), sensor->retrieveSensorData()};

  if(button_1->retrieveSensorData()) {
    light->turnOn(colorCode);
  } else if(button_2->retrieveSensorData()) {
    light->turnOff();
  }
}
