#ifndef TrafficLight_h
#define TrafficLight_h

#include "Arduino.h"

class TrafficLight{
  public:
    TrafficLight(int r_pin, int y_pin, int g_pin);

    void LightSequence(int lightTime);
    void OnStart();


  private:
    int _rpin;
    int _ypin;
    int _gpin;
  
};

#endif
