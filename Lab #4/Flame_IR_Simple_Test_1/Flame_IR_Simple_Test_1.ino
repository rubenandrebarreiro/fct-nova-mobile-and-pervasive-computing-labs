/**
 * A simple and basic test for the Flame/IR component.
 * 
 * Product: Flame sensor  
 * SKU    : DFR0076 
 *
 * Description:     
 * - When flame sensor detected flame, the data will be read by the serial.
 *
 * Adapted for the Pratical Labs (Lab #3 - March 28, 2019) of:
 * - Mobile and Pervasive Computing
 *   @ FCT NOVA (Faculty of Sciences and Technology of New University of Lisbon)

 * Adapted by:
 * - Carmen Pires Morgado - cpm@fct.unl.pt
 * - Ruben Andre Barreiro - r.barreiro@campus.fct.unl.pt
*/

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
}
