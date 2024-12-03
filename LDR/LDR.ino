int white=0, yellow=1, green=2, blue=3, red=4;
int arr[5]={white, yellow, green, blue, red};

void setup() {
  Serial.begin(9600);
  pinMode(white, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);  
   // put your setup code here, to run once:

}

void loop() {
  int x=analogRead(A0);
  //Serial.print("Resistance levels: ");
  Serial.println(x);
  if(x<=100)
  {
    digitalWrite(white,HIGH);
    digitalWrite(yellow,LOW);
    delay(100);
    digitalWrite(white,LOW); 
  }
  else if(x>100 && x<=300)
  {
    digitalWrite(white,HIGH);
    digitalWrite(yellow,HIGH);
    delay(100);
    digitalWrite(white,LOW);   
    digitalWrite(yellow,LOW); 
    
  }
  else if (x>300 && x<=500)
  {
    digitalWrite(white,HIGH);
    digitalWrite(yellow,HIGH);
    digitalWrite(green,HIGH);
    delay(100);
    digitalWrite(white,LOW);   
    digitalWrite(yellow,LOW); 
    digitalWrite(green,LOW); 
  }
   else if (x>500 && x<=700)
  {
    digitalWrite(white,HIGH);
    digitalWrite(yellow,HIGH);
    digitalWrite(green,HIGH);
    digitalWrite(blue,HIGH);
    delay(100);
    digitalWrite(white,LOW);   
    digitalWrite(yellow,LOW); 
    digitalWrite(green,LOW); 
    digitalWrite(blue,LOW);
  }
  else
  {
     digitalWrite(white,HIGH);
    digitalWrite(yellow,HIGH);
    digitalWrite(green,HIGH);
    digitalWrite(blue,HIGH);
    digitalWrite(red,HIGH);
    delay(100);
    digitalWrite(white,LOW);   
    digitalWrite(yellow,LOW); 
    digitalWrite(green,LOW); 
    digitalWrite(blue,LOW);
    digitalWrite(red,LOW);
  }

}
