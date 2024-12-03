int noteDurations[] = {
  4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 2
};
 int melody[] = {
  261, 261, 293, 261, 349, 329,
  261, 261, 293, 261, 392, 349,
  261, 261, 523, 440, 349, 329, 293,
  466, 466, 440, 349, 392, 349
};
void setup() {
  pinMode(2,OUTPUT);

}

void loop() {
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  delay(1000);
 






  // Iterate through the melody
  for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++) {
    int noteDuration = 1000 / noteDurations[i];
    tone(13, melody[i], noteDuration);
    
    // Pause between notes
    delay(noteDuration * 1.30);
    
    // Stop the tone
    noTone(13);
  }
  
  // Repeat the melody
  delay(2000);



}
