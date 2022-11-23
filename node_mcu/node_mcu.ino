#include <ESP8266WiFi.h>
const char *ssid="IoT";
const char *pass="password";
int val;
String strs;
WiFiClient client;

void setup() {
  Serial.begin(115200);
  delay(10);
  Serial.println(ssid);
  WiFi.begin(ssid,pass);
  while(WiFi.status()!=WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }
  Serial.println("IP address:");
  Serial.println(WiFi.localIP());
}

void loop() {
  strs=Serial.readStringUntil('\n');
  val=strs.toInt();
  Serial.print("ultrasonic through node mcu");
  Serial.println(val);
  delay(1000);
}
