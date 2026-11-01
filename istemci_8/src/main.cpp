#include <Arduino.h>
#include <WiFi.h>
#include <WiFiClient.h>

const char *SSID = "S23 FE";
const char *password = "29101923";

const char *sunucu = "checkip.dyndns.org";
String uzanti = "/";

void setup()
{
  Serial.begin(115200);
  delay(300);
  Serial.println("Istemci Ornegi....");
  WiFi.mode(WIFI_STA);        // erişim noktasına bağlanma modu
  WiFi.begin(SSID, password); // wifi'a bağlanma
  while (WiFi.isConnected() == false)
  {
    Serial.print("X");
    delay(50);
  }
  Serial.print("Alinan IP adresi: ");
  Serial.println(WiFi.localIP());
}

void loop()
{
  WiFiClient wifi_istemci;

  if (wifi_istemci.connect(sunucu, 80) == false)
  {
    Serial.println("Web sayfasina baglanamadi");
    return;
  }

  Serial.print("Web sayfasina baglandi");

  wifi_istemci.print(String("GET ") + uzanti + " HTTP/1.1\r\n" + "Host: " + sunucu + "\r\n" + "Connection: close\r\n\r\n");

  int sayac= 0;
  while (wifi_istemci.available() == 0)
  {
    sayac++;
    delay(1000);
    if(sayac>5)
     return;
  }

  while (wifi_istemci.available())
  { 
    String okunan = wifi_istemci.readStringUntil('\r');
    Serial.print("Okunan: ");
    Serial.println(okunan);
  }

  delay(15000);
}