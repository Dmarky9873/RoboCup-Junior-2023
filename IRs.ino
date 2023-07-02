// Returns true if sensor sees the ball and false if it doesn't

int IRSensor::blindState[3] = {1, 1, 1};

bool IRSensor::checkIrSensor() {
  for(int i = 0; i < 3; i++) {  
    currState[i] = digitalRead(pin);
    delay(50);
  }

  if(compareIntArrays(currState, blindState, 3)) {
    return false;
  } else {
    return true;
  }
}

IRSensor::IRSensor(int PIN) {
  pin = PIN;
  pinMode(pin, INPUT);
}