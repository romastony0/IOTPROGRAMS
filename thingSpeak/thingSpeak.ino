#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ThingSpeak.h>

const char *ssid="DrTAmudha";
const char *password=" ";

int val;
String strs;
WiFiClient client;

unsigned long myChannelNumber=1898294;
const char *myWriteAPIkey="QCDA91DJFGPL6WO8";

void setup() {
  Serial.begin(9600);
  delay(10);
  WiFi.begin(ssid,password);
  ThingSpeak.begin(client);
}

void loop() {
  strs = Serial.readStringUntil("\n");
  val =strs.toInt();
  Serial.println(val);
  ThingSpeak.writeField(myChannelNumber,1,val,myWriteAPIKey);
  delay(1000);
}

