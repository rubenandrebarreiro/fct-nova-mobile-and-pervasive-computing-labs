/**
 * A simple test for the LED, controlled by a button.
 * 
 * Adapted for the Pratical Labs (Lab #2 - March 21, 2019) of:
 * - Mobile and Pervasive Computing
 *   @ FCT NOVA (Faculty of Sciences and Technology of New University of Lisbon)

 * Adapted by:
 * - Carmen Pires Morgado - cpm@fct.unl.pt
 * - Ruben Andre Barreiro - r.barreiro@campus.fct.unl.pt
*/

const int buttonPin = 3;
const int ledPin = 4;

void setup() {
  // Put your setup code here, to run once
  
  // NOTE:
  // - pinMode(#, INPUT/OUTPUT)
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(9, OUTPUT);

  Serial.begin(9600);
}
void loop() {
  // Put your main code here, to run repeatedly:

  // NOTES:
  // wait -> delay(x); : x -> ms
  // digitalWrite(#, HIGH/LOW); -> on/off
  
  int buttonState = digitalRead(3);
  Serial.println("Button state: " + buttonState);
  
  if(buttonState == HIGH) {
    toggle();
    delay(500);
  }
}

void toggle() {
  int val = digitalRead(4);
  
  Serial.println(val);
  
  digitalWrite(4, abs(val - 1));
  digitalWrite(9, abs(val - 1));
}
