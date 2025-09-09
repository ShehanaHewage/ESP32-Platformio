#include <Arduino.h>

void setup() {
  pinMode(2, OUTPUT); // onboard LED pin
}

void loop() {
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  delay(500);
}
