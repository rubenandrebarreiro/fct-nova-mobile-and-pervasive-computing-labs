/*
 * Simple Sketch to test some PIEZO sound alarms,
 * with several tones' delays and intensities.
 * 
 * Adapted for the Pratical Labs (Lab #5 - April 11, 2019) of:
 * - Mobile and Pervasive Computing
 *   @ FCT NOVA (Faculty of Sciences and Technology of New University of Lisbon)

 * Adapted by:
 * - Carmen Pires Morgado - cpm@fct.unl.pt
 * - Ruben Andre Barreiro - r.barreiro@campus.fct.unl.pt
 */
 
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
