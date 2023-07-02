#ifndef IRs_H
#define IRs_H

#include "General_Functions.h"

class IRSensor {
  private:
    int pin;
    static int blindState[3];
    int currState[3];
  public:
    IRSensor(int PIN);
    bool checkIrSensor();
};

#endif
