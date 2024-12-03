#include <Servo.h>
Servo ser1;
Servo ser2;
void setup() {
 pinMode(4, OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 ser1.attach(2);
 ser2.attach(3);
}

void loop() {
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  ser1.write(10);
  ser2.write(180);
  delay(1000);
  ser1.write(180);
  ser2.write(10);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  delay(1000);
  




  

}
