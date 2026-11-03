#include <Arduino.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <MQTT.h>

const char *SSID = "S23 FE";
const char *password = "29101923";

WiFiClient wifi_istemci;
MQTTClient mqtt_istemci;

void baglan()
{
  while (mqtt_istemci.connect("erdem_esp", "iot-2027", "12345678") == false)
  {
    Serial.print(".");
    delay(250);
  }
}

  void setup()
  {
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

    mqtt_istemci.begin("iot-2027.cloud.shiftr.io", wifi_istemci);
  }

  void loop()
  { 
    mqtt_istemci.loop();
    delay(10);

    if (mqtt_istemci.connected() == false)
      baglan();

    delay(2000);
    mqtt_istemci.publish("ogrenci_no", "202413171082");
  }

