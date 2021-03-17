#include <Adafruit_CircuitPlayground.h>
#include "Light.h"
#include "Button1.h"

bool leftButtonPressed, rightButtonPressed;
int neoPixel = 0;
Light* light = new Light(neoPixel);
Button1* button_1 = new Button1();

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  int lightStrength = CircuitPlayground.lightSensor();
  int colorThroughLightStrength = lightStrength * 0.24926686217;
  Serial.println(colorThroughLightStrength);
  int colorCode[] = {255, colorThroughLightStrength, colorThroughLightStrength};

  leftButtonPressed = CircuitPlayground.leftButton();
  rightButtonPressed = CircuitPlayground.rightButton();

  if(button_1->retrieveSensorData()) {
    light->turnOn(colorCode);
  } else if(rightButtonPressed) {
    light->turnOff();
  }
}
