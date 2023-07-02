void north(int speed) {
  mSW.setSpeed(speed);
  mNW.setSpeed(speed);
  mNE.setSpeed(speed);
  mSE.setSpeed(speed);
}

void south(int speed) {
  mSW.setSpeed(-speed);
  mNW.setSpeed(-speed);
  mNE.setSpeed(-speed);
  mSE.setSpeed(-speed);
}

void west(int speed) {
  mSW.setSpeed(speed);
  mNW.setSpeed(-speed);
  mNE.setSpeed(speed);
  mSE.setSpeed(-speed);
}

void east(int speed) {
  mSW.setSpeed(-speed);
  mNW.setSpeed(speed);
  mNE.setSpeed(-speed);
  mSE.setSpeed(speed);
}

void brake() {
  mSW.brake();
  mNW.brake();
  mNE.brake();
  mSE.brake();
}