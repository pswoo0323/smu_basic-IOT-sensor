
#include <EduIntro.h>
#define DHTPIN 2

DHT11 dht(DHTPIN);

void setup() 
{
  Serial.begin(9600); 
}

void loop() 
{
  dht.update();
  delay(2000);
  int h = dht.readHumidity();
  int t = dht.readCelsius();
  Serial.print("Humidity: "); 
  Serial.print(h);
  Serial.print(" %\t");         
  Serial.print("Temperature: ");
  Serial.print(t);                 
  Serial.println(" C");
}


