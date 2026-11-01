#include <Arduino.h>
#define motor_pin 13
int deger = 0;

void setup() {
  pinMode(motor_pin, OUTPUT);

}

void loop() {
  deger = deger + 10;
  if(deger>250)
  {
  deger = 0;
  delay(2000);
  }

 analogWrite(motor_pin, deger);
 delay(200);
 analogWrite(motor_pin, 0);
 delay(50);
}
