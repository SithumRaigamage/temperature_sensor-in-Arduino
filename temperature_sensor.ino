#include <DHT.h>


#define DHTPIN1 2     // DHT22 signal pin for sensor 1
#define DHTTYPE1 DHT22   // DHT22 sensor type for sensor 1
#define DHTPIN2 3     // DHT22 signal pin for sensor 2
#define DHTTYPE2 DHT22   // DHT22 sensor type for sensor 2

DHT dht1(DHTPIN1, DHTTYPE1);
DHT dht2(DHTPIN2, DHTTYPE2);

void setup() {
  Serial.begin(9600);
  dht1.begin();
  dht2.begin();
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(100);
  
  float temperature1 = dht1.readTemperature();
  float temperature2 = dht2.readTemperature();
  
  Serial.print("Temperature Sensor 1: ");
  Serial.print(temperature1);
  Serial.print(" *C");
  
  Serial.print("  Temperature Sensor 2: ");
  Serial.print(temperature2);
  Serial.println(" *C");
}
