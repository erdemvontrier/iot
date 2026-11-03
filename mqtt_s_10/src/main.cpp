#include <Arduino.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <MQTT.h>

const char *SSID = "S23 FE";
const char *password = "29101923";
int erdemNo = 82;
int maliNo = 01;

WiFiClient wifi_istemci;
MQTTClient mqtt_istemci;

void baglan()
{
  while (mqtt_istemci.connect("Grup16_Erdem", "grupbilgisi", "12345678") == false)
  {
    Serial.print(".");
    delay(250);
 
  }

  Serial.println("Projeye baglandiniz");
  mqtt_istemci.subscribe("Grup16");
}

void msj_geldi(String &konu, String &gelen_veri)
{
  int y = gelen_veri.toInt() + erdemNo + maliNo;

  if(y>10)
  {
    digitalWrite(2, HIGH);
  }
  
  else 
  {
    digitalWrite(2, LOW);
  }

  Serial.println(gelen_veri);
  
}

    void setup()
    {
    pinMode(2, OUTPUT);
    Serial.begin(115200);
    delay(300);
    Serial.println("MQTT Ornegi");
    WiFi.mode(WIFI_STA);        // erişim noktasına bağlanma modu
    WiFi.begin(SSID, password); // wifi'a bağlanma
    while (WiFi.isConnected() == false)
    {
      Serial.print("X");
      delay(50);
    }
    Serial.print("Cep telefonunda alinan IP adresi: ");
    Serial.println(WiFi.localIP());

    mqtt_istemci.begin("grupbilgisi.cloud.shiftr.io", wifi_istemci);
    mqtt_istemci.onMessage(msj_geldi);
  }

  void loop()
  { 
    mqtt_istemci.loop();
    delay(10);

    if (mqtt_istemci.connected() == false)
      baglan();

    delay(2000);
  }

