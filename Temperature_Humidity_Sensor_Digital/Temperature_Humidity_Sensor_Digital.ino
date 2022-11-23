#include <DHT.h>
#include <DHT_U.h>

// #include <Adafruit_Sensor.h>
// #include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11 

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  dht.begin();
  Serial.begin(9600);
}


void loop(){
  delay(2000);

  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);

  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  float hif = dht.computeHeatIndex(f, h);
  float hic = dht.computeHeatIndex(t, h, false);

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.println(" %\t");

  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" *C ");

  Serial.print(f);
  Serial.println(" *F\t");

  Serial.print("Heat index: ");
  Serial.print(hic);
  Serial.println(" *C "); 

  Serial.print(hif);
  Serial.println(" *F");
}
