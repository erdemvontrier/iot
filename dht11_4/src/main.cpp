#include <Arduino.h>
#include "DHT.h"
#define DHTPIN 13
DHT dht(DHTPIN, DHT11);
void setup() {
 Serial.begin(115200);
 delay(200);
 Serial.println("DHT11 sicaklik ve nem okuma");
 delay(1000);
 dht.begin();
}

void loop() {
  float nem = dht.readHumidity();
  float sicaklik = dht.readTemperature();
  Serial.print("Sinif nem degeri: ");
  Serial.println(nem);

  Serial.print("Sinif sicaklik degeri: ");
  Serial.println(sicaklik);
  delay(1000);
}
