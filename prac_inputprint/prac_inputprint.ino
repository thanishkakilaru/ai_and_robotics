int xInt;
float yFloat;


void setup() {
  Serial.begin(9600);
  Serial.println("Enter your input here:");
  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available()>0)
  {
     xInt=Serial.parseInt();
     Serial.print("You entered: ");
     Serial.println(xInt);
     while(1){}
  }
  // put your main code here, to run repeatedly:

}
