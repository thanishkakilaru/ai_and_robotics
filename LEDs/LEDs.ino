int yellow=3, green=5, red=11, blue=2, white=7;
int arr[5]={yellow, red, white, green, blue};
int i;

void setup() {
  Serial.begin(9600);

  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(white,OUTPUT);
  // put your setup code here, to run once:
  Serial.println("Enter you input here:");

}

void loop() {
  if(Serial.available())
  {
    i = Serial.parseInt();
    Serial.println(i);
    digitalWrite(arr[i],HIGH);
    delay(100);
    digitalWrite(arr[i],LOW);
    delay(100);
  }

    



  
  
  

  // put your main code here, to run repeatedly:

}
