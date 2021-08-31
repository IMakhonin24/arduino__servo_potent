#include <Servo.h>

Servo servo1;
Servo servo2;

void setup() {
  Serial.begin (9600);
  servo1.attach(5);
  servo2.attach(6);
}

void loop() {
  int potent = analogRead(5);
  Serial.print (potent);
  Serial.print ("  -  ");
  potent = map(potent, 0, 1023, 0, 180);
  Serial.println (potent);
  servo1.write(potent);
  servo2.write(potent);  
}
