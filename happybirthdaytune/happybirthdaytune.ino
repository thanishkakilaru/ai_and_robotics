int melody[] = {
  261, 261, 293, 261, 349, 329,
  261, 261, 293, 261, 392, 349,
  261, 261, 523, 440, 349, 329, 293,
  466, 466, 440, 349, 392, 349
};

int noteDurations[] = {
  4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 2
};

void setup() {
  // No setup is needed for this simple example
}

void loop() {
  // Iterate through the melody
  for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++) {
    int noteDuration = 1000 / noteDurations[i];
    tone(8, melody[i], noteDuration);
    
    // Pause between notes
    delay(noteDuration * 1.30);
    
    // Stop the tone
    noTone(8);
  }
  
  // Repeat the melody
  delay(2000);
}
