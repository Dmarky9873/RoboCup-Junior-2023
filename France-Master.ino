#include "Motors.h"
#include "Directions.h"
#include "tests.h"
#include "IRs.h"
#include <Arduino.h>

// Motors
Motor mNE(39, 3, 0);
Motor mSE(38, 2, 0);
Motor mNW(40, 33, 0);
Motor mSW(41, 7, 0);

// IR Sensors
IRSensor northIR(16);

int speed (200);

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(northIR.checkIrSensor()) {
    north(200);
  } else {
    brake();
  }
}
