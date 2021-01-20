#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
#include <ArduinoJson.h>
#include <ESP8266HTTPClient.h>

#include <WiFiClientSecureBearSSL.h>
// Fingerprint for demo URL, expires on June 2, 2021, needs to be updated well before this date
const uint8_t fingerprint[20] = {0x40, 0xaf, 0x00, 0x6b, 0xec, 0x90, 0x22, 0x41, 0x8e, 0xa3, 0xad, 0xfa, 0x1a, 0xe8, 0x25, 0x41, 0x1d, 0x1a, 0x54, 0xb3};

// IMPORTANT CONSTS
const char* secretkey = "YOUR SECRETKEY FROM JSONBIN";
const char* ssid = "YOUR WIFI NETWORK NAME";
const char* password = "YOUR PASSWORD";
const char* jsonurl = "URL OF YOUR BIN";

ESP8266WiFiMulti WiFiMulti;

void setup() {

  Serial.begin(115200);

  WiFi.mode(WIFI_STA);
  WiFiMulti.addAP(ssid, password);
}

void loop() {
  // wait for WiFi connection
  if ((WiFiMulti.run() == WL_CONNECTED)) {

    std::unique_ptr<BearSSL::WiFiClientSecure>client(new BearSSL::WiFiClientSecure);

    client->setFingerprint(fingerprint);

    HTTPClient https;

    Serial.print("[HTTPS] begin...\n");
    if (https.begin(*client, jsonurl)) {  // HTTPS
      https.addHeader("Content-Type", "application/x-www-form-urlencoded");
      https.addHeader("X-Master-Key", secretkey);
      Serial.print("[HTTPS] GET...\n");
      // start connection and send HTTP header
      int httpCode = https.GET();

      // httpCode will be negative on error
      if (httpCode > 0) {
        const size_t bufferSize = JSON_OBJECT_SIZE(2) + JSON_OBJECT_SIZE(3) + JSON_OBJECT_SIZE(5) + JSON_OBJECT_SIZE(8) + 370;
        DynamicJsonBuffer jsonBuffer(bufferSize);
        JsonObject& root = jsonBuffer.parseObject(http.getString());
   
        int last = root["last"]; 
        mostrar(last)
      }

//      https.end();
    } else {
      Serial.printf("[HTTPS] Unable to connect\n");
    }
  }

  Serial.println("Wait 10s before next round...");
  delay(10000);
}

void mostrar(char parameter)
{
  if(parameter == '0') {
    digitalWrite(A, 0);
  digitalWrite(B, 0);
  digitalWrite(C, 0);
  digitalWrite(D, 0);
  }
  if(parameter == '1') {
    digitalWrite(A, 1);
  digitalWrite(B, 0);
  digitalWrite(C, 0);
  digitalWrite(D, 0);
  }
  if(parameter == '2') {
    digitalWrite(A, 0);
  digitalWrite(B, 1);
  digitalWrite(C, 0);
  digitalWrite(D, 0);
  }
  if(parameter == '3') {
    digitalWrite(A, 1);
  digitalWrite(B, 1);
  digitalWrite(C, 0);
  digitalWrite(D, 0);
  }
  if(parameter == '4') {
    digitalWrite(A, 0);
  digitalWrite(B, 0);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  }
  if(parameter == '5') {
    digitalWrite(A, 1);
  digitalWrite(B, 0);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  }
  if(parameter == '6') {
    digitalWrite(A, 0);
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  }
  if(parameter == '7') {
    digitalWrite(A, 1);
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  }
  if(parameter == '8') {
    digitalWrite(A, 0);
  digitalWrite(B, 0);
  digitalWrite(C, 0);
  digitalWrite(D, 1);
  }
  if(parameter == '9') {
    digitalWrite(A, 1);
  digitalWrite(B, 0);
  digitalWrite(C, 0);
  digitalWrite(D, 1);
  }
}
