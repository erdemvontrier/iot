#include <Arduino.h>

int deger = 0;
int ogr1 = 01;
int ogr2 = 82;
int toplam = 0;

void setup() {
Serial.begin(115200);
delay(200);
Serial.println("UART Haberlesme");

}

void loop() {
  deger++;
  toplam = ogr1 + ogr2;
  Serial.print("Ogrenci numaralarin toplami: ");
  Serial.println(toplam);
 /* Serial.print("Sayac degeri: ");
  Serial.println(deger); */
  delay(1000);  
}