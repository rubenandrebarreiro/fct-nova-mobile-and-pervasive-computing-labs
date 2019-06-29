/**
 * A simple test for the Buzzer component.
 * 
 * Adapted for the Pratical Labs (Lab #2 - March 21, 2019) of:
 * - Mobile and Pervasive Computing
 *   @ FCT NOVA (Faculty of Sciences and Technology of New University of Lisbon)

 * Adapted by:
 * - Carmen Pires Morgado - cpm@fct.unl.pt
 * - Ruben Andre Barreiro - r.barreiro@campus.fct.unl.pt
*/

void setup() {
  // Put your setup code here, to run once
  pinMode(9, OUTPUT);
}

void loop() {
  // Put your main code here, to run repeatedly
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
}
