Motor::Motor(int DIR, int PWM, int inversion) {
  dir = DIR;
  pwm = PWM;
  inv = inversion;
  pinMode(dir, OUTPUT);
  pinMode(pwm, OUTPUT);
}

void Motor::setSpeed(int spd) {
  int speed = spd;
  // Adjust motor direction based on speed
  if (speed > 0) {
    if (inv == 0) {
      digitalWrite(dir, HIGH);
    }
    else {
      digitalWrite(dir, LOW);
    }
  } else if (speed < 0) {
    if(inv == 0) {
      digitalWrite(dir, LOW);
    }
    else {
      digitalWrite(dir, HIGH);
    }
  } else {
    brake();
  }
  // Set the PWM speed
  analogWrite(pwm, abs(speed));
}

void Motor::brake() {
  analogWrite(pwm, 0);
}
