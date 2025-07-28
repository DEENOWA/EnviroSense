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
  // put your setup code here, to run once:

}

void loop() {
  delay(2000);

  float humid = dht.readHumidity();
  float temp = dht.readTemperature();

  Serial.print("Humidity: ");
  Serial.println(humid);
  Serial.print("Temprature: ");
  Serial.println(temp);


  lcd.setCursor(0,0);
  lcd.print("Humidity: ");
  lcd.println(humid);
  lcd.setCursor(0,1);
  lcd.print("Temprature: ");
  lcd.println(temp);


  // put your main code here, to run repeatedly:

}
