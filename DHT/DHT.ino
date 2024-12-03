#include <DHT11.h>
DHT11 dht11(8);

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  int hum=dht11.readHumidity();  
  int temp=dht11.readTemperature();
  int x=analogRead(A0);
  Serial.print(hum);
  Serial.print(",");
  Serial.print(temp);
  Serial.print(",");
  Serial.print(x);
  Serial.println();
  delay(60000);
  


}
