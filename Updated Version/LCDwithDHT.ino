#include <LiquidCrystal.h>
#include <DHT.h>

#define DHT11PIN 7
#define DHTTYPE DHT11
DHT dht(DHT11PIN, DHTTYPE);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  dht.begin();
  lcd.clear();
  Serial.println("EnviroSense: System ready");
}

void loop() {

  float humid = dht.readHumidity();
  float tempC = dht.readTemperature(false);
  float tempF = dht.readTemperature(true);
  float hic = dht.computeHeatIndex(tempC, humid, false);
  float hif = dht.computeHeatIndex(tempF, humid, true);


  if (isnan(humid) || isnan(tempC) || isnan(tempF)) {
    Serial.println("Failed to read from DHT11 sensor!");
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Sensor Error");
    delay(2000);
    return;
  }


  Serial.print("Humidity: ");
  Serial.print(humid);
  Serial.println(" %");
  Serial.print("Temperature: ");
  Serial.print(tempC);
  Serial.print(" deg.C  ");
  Serial.print(tempF);
  Serial.println(" deg.F");
  Serial.print("Heat Index: ");
  Serial.print(hic);
  Serial.print(" deg.C  ");
  Serial.print(hif);
  Serial.println(" deg.F");

 
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Hum: ");
  lcd.print(humid);
  lcd.print("%");
  lcd.setCursor(0, 1);
  lcd.print("Temp: ");
  lcd.print(tempC);
  lcd.print("C");
  delay(4000);

  
  lcd.clear();
  lcd.setCursor(0, 0);
  String tempFText = "Temp: " + String(tempF, 1) + " deg.F";
  lcd.print(tempFText);
  for (int i = 0; i <= tempFText.length() - 16; i++) {
    lcd.scrollDisplayLeft();
    delay(300);
  }
  delay(2000); 

 
  lcd.clear();
  lcd.setCursor(0, 0);
  String hiText = "HI: " + String(hic, 1) + "C " + String(hif, 1) + "F";
  lcd.print(hiText);
  for (int i = 0; i <= hiText.length() - 16; i++) {
    lcd.scrollDisplayLeft();
    delay(300);
  }
  delay(2000);

  delay(1000); 
}
