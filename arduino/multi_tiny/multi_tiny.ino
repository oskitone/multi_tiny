#include "ArduinoISP.h"

void setup() {
  setupArduinoISP();

  // TODO:
  // * 2 for address: AB
  // * 3 for control: ARM, CLEAR, INHIBIT
  // * 6 for target statuses: SUCCESS/ERROR-A/B/C
}

void loop() {
  loopArduinoISP();

  // TODO:
  // * can ArduinoISP loop? might be better for it to be "dumb"
  //   and have logic on host computer?
}
