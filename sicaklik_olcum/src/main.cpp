#include <Arduino.h>
#include <WiFi.h>
#include <MQTT.h>
#include <DHT.h>
#define DHTPIN 15
DHT dht(DHTPIN, DHT11);

const char* ssid = "S23 FE";
const char* password = "29101923";

WiFiClient wifi_istemci;
MQTTClient mqtt_istemci;

void baglan(){
  while(!mqtt_istemci.connect("Grup16_Erdem", "c205-grup", "c205SIFRE")){
    Serial.print(".");
    delay(250);
  };
  Serial.println("\nProjeye bağlandı");
}

void setup() {
  Serial.begin(115200);
  delay(500);
  dht.begin();

  Serial.println("MQTT");

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while(WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(200);
  };

  Serial.println("Local IP:" + WiFi.localIP().toString());

  mqtt_istemci.begin("c205-grup.cloud.shiftr.io", wifi_istemci);
}

void loop() {
  mqtt_istemci.loop();
  delay(10);

  if(!mqtt_istemci.connected()){
    baglan();
  };
  delay(2000);
  int sicaklik = dht.readTemperature();
  Serial.println(sicaklik);
  mqtt_istemci.publish("C205/Grup16/sicaklik", String(sicaklik));
};