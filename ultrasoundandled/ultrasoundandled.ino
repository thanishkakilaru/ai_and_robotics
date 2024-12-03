int yellow=3, green=5, red=11, blue=2, white=7;
int arr[5]={yellow, red, white, green, blue};
int trig=8;
int echo=9;


void setup() {
  Serial.begin(9600);
pinMode(trig,OUTPUT);
pinMode(echo, INPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(white,OUTPUT);
  // put your setup code here, to run once:  

}

void loop() {

digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);
float time=pulseIn(echo,HIGH);
float distance = (time * 0.0343) / 2;
Serial.println(distance);
if(distance>0 && distance<=10)
{
  digitalWrite(arr[0],HIGH);
  delay(100);
  digitalWrite(arr[0],LOW);
}
else if(distance>10 && distance<=20)
{
  digitalWrite(arr[1],HIGH);
  delay(100);
  digitalWrite(arr[1],LOW);
}
else if(distance>20 && distance<=30)
{
  digitalWrite(arr[2],HIGH);
  delay(100);
  digitalWrite(arr[2],LOW);
}

else if(distance>30 && distance<=40)
{
  digitalWrite(arr[3],HIGH);
  delay(100);
  digitalWrite(arr[3],LOW);
}
else if(distance>40 )
{
  digitalWrite(arr[4],HIGH);
  delay(100);
  digitalWrite(arr[4],LOW);

}  
}
