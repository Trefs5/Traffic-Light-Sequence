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
  digitalWrite(_ypin, HIGH);
  delay(lightTime);
  digitalWrite(_rpin, LOW);
  digitalWrite(_ypin, LOW);

  digitalWrite(_gpin, HIGH);
  delay(lightTime * 4);
  digitalWrite(_gpin, LOW);


  digitalWrite(_ypin, HIGH);
  delay(lightTime  * 3);
  
  digitalWrite(_ypin, LOW);
  digitalWrite(_rpin, HIGH);
}

void TrafficLight::OnStart(){
  //switches the red light on for all traffic lights to prevent traffic lights with no lights on during the first cycle.
  digitalWrite(_rpin, HIGH);

}
