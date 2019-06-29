// A sketch to demonstrate the tone() function

// Specify digital pin on the Arduino that the positive lead of piezo buzzer is attached.
int piezoPin = 6;

void setup() {
  // Empty setup method
}

void loop() {
  // Tone needs 2 arguments, but can take three:
  // - 1) Pin#
  // - 2) Frequency - this is in hertz (cycles per second) which determines the pitch of the noise made
  // - 3) Duration - how long teh tone plays
  
  tone(piezoPin, 100, 10000);
  delay(2000);

  tone(piezoPin, 500, 10000);
  delay(2000);

  tone(piezoPin, 10000, 10000);
  delay(2000);

  tone(piezoPin, 100000, 10000);
  delay(2000);

  tone(piezoPin, 650000, 10000);
  delay(2000);
}
