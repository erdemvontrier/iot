#include <Arduino.h>


void setup() {
  pinMode(0, INPUT_PULLUP);
  pinMode(2, OUTPUT);

}

void loop() {
  if(digitalRead(0) == LOW)
    digitalWrite(2, HIGH);

  else
    digitalWrite(2, LOW);
}
