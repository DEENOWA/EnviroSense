#include <DHT.h>

#define DHT11PIN 4
#define DHTTYPE DHT11
DHT myDHT(DHT11PIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  myDHT.begin();
  // put your setup code here, to run once:

}

void loop() {
  float humid = myDHT.readHumidity();
  float tempC = myDHT.readTemperature(false);
  float tempF = myDHT.readTemperature(true);
  float HIC = myDHT.computeHeatIndex(tempC, humid, false);
  float HIF = myDHT.computeHeatIndex(tempF, humid, true);

  Serial.print("Humidity: ");
  Serial.print(humid);
  Serial.println(" %");
  Serial.print("Temprature: ");
  Serial.print(tempC);
  Serial.print(" deg.C  ");
  Serial.print(tempF);
  Serial.println(" deg.F");
  Serial.print("Heat Index: ");
  Serial.print(HIC);
  Serial.print(" deg.C  ");
  Serial.print(HIF);
  Serial.println(" deg.F");

  delay(2000);
  // put your main code here, to run repeatedly:

}
