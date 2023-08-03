// Including appropriate libraries
#include <Arduino.h>
#include <Wire.h>
#include <HMC5883L_Simple.h>

// Compass
HMC5883L_Simple Compass;

void setup() {
  Serial.begin(9600);

  Wire.begin();

  Compass.SetDeclination(-10, 15, 'W');
  Compass.SetSamplingMode(COMPASS_SINGLE);
  Compass.SetScale(COMPASS_SCALE_130);
  Compass.SetOrientation(COMPASS_HORIZONTAL_X_NORTH);
}

void loop() {
  Serial.println(Compass.GetHeadingDegrees());
}
