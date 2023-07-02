#ifndef Motors_H
#define Motors_H

class Motor {
  private:
    int dir;
    int pwm;
    int inv;

  public:
    Motor(int DIR, int PWM, int inversion);
    void setSpeed(int spd);
    void brake();
};

#endif 
