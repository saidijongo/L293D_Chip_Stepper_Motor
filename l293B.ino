#include <Stepper.h>

const int steps_per_rev = 200; 
#define IN1 2
#define IN2 3
#define IN3 8
#define IN4 9

Stepper motor(steps_per_rev, IN1, IN2, IN3, IN4);


void setup()
{
  motor.setSpeed(80);
  Serial.begin(115200);
}

void loop() 
{
  Serial.println("CW");
  motor.step(steps_per_rev);
  delay(500);

  Serial.println("CCW");
  motor.step(-steps_per_rev);
  delay(500);
}
