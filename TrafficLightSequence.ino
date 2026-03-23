#include <TrafficLight.h>

TrafficLight lights1(2,3,4);
TrafficLight lights2(6,7,8);

void setup() {
  // put your setup code here, to run once:
  digitalWrite(6, LOW);
  lights1.OnStart();
  lights2.OnStart();

}

void loop() {

  lights1.LightSequence(1500);
  
  delay(2000);

  lights2.LightSequence(1500);

}
