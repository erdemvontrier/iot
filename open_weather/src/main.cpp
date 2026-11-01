#include <Arduino.h>
#include <WiFi.h>
#include <HTTPClient.h>


const char* ssid = "S23 FE";
const char* password = "29101923";

#define x 82


#define D0 2 

String url = "http://api.openweathermap.org/data/2.5/weather?q=istanbul&units=metric&appid=3d97fed8045e567b0738dbf8cacc4369";

void setup() {
  Serial.begin(115200);
  pinMode(D0, OUTPUT);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
  
  Serial.println("Bağlantı sağlandı...");
  Serial.print("Alınan IP adresi: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    http.begin(url);
    
    Serial.println("WEB sunucusuna baglandi");
    int httpCode = http.GET();

    if (httpCode > 0) {
      String payload = http.getString();
      

      int minIndex = payload.indexOf("\"temp_min\":") + 11;
      int minEnd = payload.indexOf(",", minIndex);
      if (minEnd == -1) minEnd = payload.indexOf("}", minIndex); 
      String temp_min_str = payload.substring(minIndex, minEnd);
      float min_sicaklik = temp_min_str.toFloat();

  
      int maxIndex = payload.indexOf("\"temp_max\":") + 11;
      int maxEnd = payload.indexOf(",", maxIndex);
      if (maxEnd == -1) maxEnd = payload.indexOf("}", maxIndex);
      String temp_max_str = payload.substring(maxIndex, maxEnd);
      float max_sicaklik = temp_max_str.toFloat();
      

      if (temp_min_str.length() > 0 && temp_max_str.length() > 0) {
        Serial.print("Istanbul ili min sicaklik degeri: ");
        Serial.println(min_sicaklik);
        Serial.print("Istanbul ili max sicaklik degeri: ");
        Serial.println(max_sicaklik);
        Serial.print("Ogrenci nosunun son uc hanesi:");
        Serial.println(x);
        

        float y = (max_sicaklik - min_sicaklik) * x;
        Serial.print("y degeri:");
        Serial.println(y);
        

        if (y > 10.0) {
          digitalWrite(D0, HIGH);
          Serial.println("Hesaplanan deger buyuk");
        } else {
          digitalWrite(D0, LOW);
          Serial.println("Hesaplanan deger kucuk");
        }
      }
    } else {
      Serial.println("Hata: HTTP istegi basarisiz.");
    }
    http.end();
  } else {
    Serial.println("WiFi baglantisi koptu.");
  }
  
  Serial.println("-------------------------");
  delay(10000);
}