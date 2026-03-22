#include "Arduino.h"
#include "TrafficLight.h"

//Sets the pins
TrafficLight::TrafficLight(int rpin, int ypin, int gpin){
  pinMode(rpin, OUTPUT);
  _rpin= rpin;

  pinMode(ypin, OUTPUT);
  _ypin= ypin;

  pinMode(gpin, OUTPUT);
  _gpin= gpin;

}

void TrafficLight::LightSequence(int lightTime){
  digitalWrite(_rpin, HIGH);
  delay(lightTime);
  digitalWrite(_rpin, LOW);
  delay(lightTime);

  digitalWrite(_ypin, HIGH);
  delay(lightTime);
  digitalWrite(_ypin, LOW);
  delay(lightTime);

  digitalWrite(_gpin, HIGH);
  delay(lightTime);
  digitalWrite(_gpin, LOW);
  delay(lightTime);

}
