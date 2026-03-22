#include <TrafficLight.h>

TrafficLight lights1(2,3,4);
TrafficLight lights2(6,7,8);

void setup() {
  // put your setup code here, to run once:


}

void loop() {

  lights1.LightSequence(500);
  
  delay(500);

  lights2.LightSequence(500);

}
