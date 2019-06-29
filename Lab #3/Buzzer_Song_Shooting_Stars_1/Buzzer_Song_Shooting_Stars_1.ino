/**
 * Buzzer test, with the song "Shooting Stars"
 * 
 * Credit:
 * Midi to Arduino Converter
 * - Andy Tran (extramaster), 2015
 * https://www.extramaster.net/tools/midiToArduino/
 * 
 * Process:
 * Midi -> Midi tracks -> Note mappings -> Frequency
 * 
 * CC0
 * 
 * Adapted for the Pratical Labs (Lab #3 - March 28, 2019) of:
 * - Mobile and Pervasive Computing
 *   @ FCT NOVA (Faculty of Sciences and Technology of New University of Lisbon)

 * Adapted by:
 * - Carmen Pires Morgado - cpm@fct.unl.pt
 * - Ruben Andre Barreiro - r.barreiro@campus.fct.unl.pt
 */

// Set this to be the pin that your buzzer resides in
// (Note that you can only have one buzzer actively using the PWM signal at a time)
int tonePin = 6;

void setup() {
  // Empty setup method
}

void midi() {
    tone(tonePin, 311, 360.0);
    delay(400.0);
    delay(200.0);
    
    tone(tonePin, 311, 180.0);
    delay(200.0);
    
    tone(tonePin, 329, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 207, 90.0);
    delay(100.0);
    
    tone(tonePin, 311, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 311, 180.0);
    delay(200.0);
    
    tone(tonePin, 329, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 207, 90.0);
    delay(100.0);
    
    tone(tonePin, 311, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 311, 180.0);
    delay(200.0);
    
    tone(tonePin, 329, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 207, 90.0);
    delay(100.0);
    
    tone(tonePin, 311, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 311, 180.0);
    delay(200.0);
    
    tone(tonePin, 329, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 207, 90.0);
    delay(100.0);
    
    tone(tonePin, 311, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 311, 180.0);
    delay(200.0);
    
    tone(tonePin, 329, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 207, 90.0);
    delay(100.0);
    
    tone(tonePin, 311, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 311, 180.0);
    delay(200.0);
    
    tone(tonePin, 329, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 207, 90.0);
    delay(100.0);
    
    tone(tonePin, 311, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 311, 180.0);
    delay(200.0);
    
    tone(tonePin, 329, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 207, 90.0);
    delay(100.0);
    
    tone(tonePin, 311, 360.0);
    delay(400.0);
    delay(200.0);
    
    tone(tonePin, 311, 180.0);
    delay(200.0);
    
    tone(tonePin, 329, 180.0);
    delay(200.0);
    
    tone(tonePin, 311, 180.0);
    delay(200.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 207, 90.0);
    delay(100.0);
    
    tone(tonePin, 311, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 311, 180.0);
    delay(200.0);
    
    tone(tonePin, 329, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 207, 90.0);
    delay(100.0);
    
    tone(tonePin, 311, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 311, 180.0);
    delay(200.0);
    
    tone(tonePin, 329, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 207, 90.0);
    delay(100.0);
    
    tone(tonePin, 311, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 311, 180.0);
    delay(200.0);
    
    tone(tonePin, 329, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 207, 90.0);
    delay(100.0);
    
    tone(tonePin, 311, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 311, 180.0);
    delay(200.0);
    
    tone(tonePin, 329, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 207, 90.0);
    delay(100.0);
    
    tone(tonePin, 311, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 311, 180.0);
    delay(200.0);
    
    tone(tonePin, 329, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 207, 90.0);
    delay(100.0);
    
    tone(tonePin, 311, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 311, 180.0);
    delay(200.0);
    
    tone(tonePin, 329, 180.0);
    delay(200.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 207, 90.0);
    delay(100.0);
    
    tone(tonePin, 311, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 311, 180.0);
    delay(200.0);
    
    tone(tonePin, 329, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 207, 90.0);
    delay(100.0);
    
    tone(tonePin, 311, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 311, 180.0);
    delay(200.0);
    
    tone(tonePin, 329, 180.0);
    delay(200.0);
    
    tone(tonePin, 311, 180.0);
    delay(200.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 207, 90.0);
    delay(100.0);
    
    tone(tonePin, 369, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 369, 180.0);
    delay(200.0);
    
    tone(tonePin, 415, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 311, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    
    tone(tonePin, 369, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 369, 180.0);
    delay(200.0);
    
    tone(tonePin, 415, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 311, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    
    tone(tonePin, 369, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 369, 180.0);
    delay(200.0);
    
    tone(tonePin, 415, 180.0);
    delay(200.0);
    delay(200.0);
   
    tone(tonePin, 311, 90.0);
    delay(100.0);
    delay(100.0);
  
    tone(tonePin, 246, 90.0);
    delay(100.0);

    tone(tonePin, 369, 360.0);
    delay(400.0);
    delay(300.0);

    tone(tonePin, 369, 180.0);
    delay(200.0);
  
    tone(tonePin, 415, 180.0);
    delay(200.0);
  
    tone(tonePin, 369, 180.0);
    delay(200.0);
 
    tone(tonePin, 311, 90.0);
    delay(100.0);
    delay(100.0);
 
    tone(tonePin, 246, 90.0);
    delay(100.0);
  
    tone(tonePin, 369, 360.0);
    delay(400.0);
    delay(300.0);
   
    tone(tonePin, 369, 180.0);
    delay(200.0);
 
    tone(tonePin, 415, 180.0);
    delay(200.0);
    delay(200.0);
  
    tone(tonePin, 311, 90.0);
    delay(100.0);
    delay(100.0);
  
    tone(tonePin, 246, 90.0);
    delay(100.0);
  
    tone(tonePin, 369, 360.0);
    delay(400.0);
    delay(300.0);
  
    tone(tonePin, 369, 180.0);
    delay(200.0);
   
    tone(tonePin, 415, 180.0);
    delay(200.0);
    delay(200.0);
   
    tone(tonePin, 311, 90.0);
    delay(100.0);
    delay(100.0);
   
    tone(tonePin, 246, 90.0);
    delay(100.0);

    tone(tonePin, 369, 360.0);
    delay(400.0);
    delay(300.0);
  
    tone(tonePin, 369, 180.0);
    delay(200.0);
  
    tone(tonePin, 415, 180.0);
    delay(200.0);
    delay(200.0);
  
    tone(tonePin, 311, 90.0);
    delay(100.0);
    delay(100.0);
  
    tone(tonePin, 246, 90.0);
    delay(100.0);
 
    tone(tonePin, 369, 360.0);
    delay(400.0);
    delay(300.0);
   
    tone(tonePin, 369, 180.0);
    delay(200.0);
  
    tone(tonePin, 415, 180.0);
    delay(200.0);
 
    tone(tonePin, 369, 180.0);
    delay(200.0);

    tone(tonePin, 311, 90.0);
    delay(100.0);
    delay(100.0);
  
    tone(tonePin, 246, 90.0);
    delay(100.0);
  
    tone(tonePin, 369, 360.0);
    delay(400.0);
    delay(300.0);
 
    tone(tonePin, 369, 180.0);
    delay(200.0);
 
    tone(tonePin, 415, 180.0);
    delay(200.0);
    delay(200.0);
   
    tone(tonePin, 311, 90.0);
    delay(100.0);
    delay(100.0);
  
    tone(tonePin, 246, 90.0);
    delay(100.0);
   
    tone(tonePin, 369, 360.0);
    delay(400.0);
    delay(300.0);
  
    tone(tonePin, 369, 180.0);
    delay(200.0);
 
    tone(tonePin, 415, 180.0);
    delay(200.0);
    delay(200.0);
 
    tone(tonePin, 311, 90.0);
    delay(100.0);
    delay(100.0);
   
    tone(tonePin, 246, 90.0);
    delay(100.0);
  
    tone(tonePin, 466, 360.0);
    delay(400.0);
    delay(300.0);
   
    tone(tonePin, 466, 180.0);
    delay(200.0);
   
    tone(tonePin, 493, 180.0);
    delay(200.0);
    delay(200.0);
   
    tone(tonePin, 369, 90.0);
    delay(100.0);
    delay(100.0);
  
    tone(tonePin, 311, 90.0);
    delay(100.0);
 
    tone(tonePin, 466, 360.0);
    delay(400.0);
    delay(300.0);
   
    tone(tonePin, 466, 180.0);
    delay(200.0);
  
    tone(tonePin, 493, 180.0);
    delay(200.0);
    delay(200.0);
 
    tone(tonePin, 369, 90.0);
    delay(100.0);
    delay(100.0);
 
    tone(tonePin, 311, 90.0);
    delay(100.0);
 
    tone(tonePin, 466, 360.0);
    delay(400.0);
    delay(300.0);
  
    tone(tonePin, 466, 180.0);
    delay(200.0);
  
    tone(tonePin, 493, 180.0);
    delay(200.0);
    delay(200.0);
  
    tone(tonePin, 369, 90.0);
    delay(100.0);
    delay(100.0);
  
    tone(tonePin, 311, 90.0);
    delay(100.0);
  
    tone(tonePin, 466, 360.0);
    delay(400.0);
    delay(300.0);
 
    tone(tonePin, 466, 180.0);
    delay(200.0);
    
    tone(tonePin, 493, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 369, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 311, 90.0);
    delay(100.0);
    
    tone(tonePin, 466, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 466, 180.0);
    delay(200.0);
    
    tone(tonePin, 493, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 369, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 311, 90.0);
    delay(100.0);
    
    tone(tonePin, 466, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 466, 180.0);
    delay(200.0);
    
    tone(tonePin, 493, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 369, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 311, 90.0);
    delay(100.0);
    
    tone(tonePin, 622, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 622, 180.0);
    delay(200.0);
    
    tone(tonePin, 659, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 493, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 415, 90.0);
    delay(100.0);
    
    tone(tonePin, 622, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 622, 180.0);
    delay(200.0);
    
    tone(tonePin, 659, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 493, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 415, 90.0);
    delay(100.0);
    
    tone(tonePin, 622, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 622, 180.0);
    delay(200.0);
    
    tone(tonePin, 659, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 493, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 415, 90.0);
    delay(100.0);
    
    tone(tonePin, 622, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 622, 180.0);
    delay(200.0);
    
    tone(tonePin, 659, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 493, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 415, 90.0);
    delay(100.0);
    
    tone(tonePin, 622, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 622, 180.0);
    delay(200.0);
    
    tone(tonePin, 659, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 493, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 415, 90.0);
    delay(100.0);
    
    tone(tonePin, 622, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 622, 180.0);
    delay(200.0);
    
    tone(tonePin, 659, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 493, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 415, 90.0);
    delay(100.0);
    
    tone(tonePin, 622, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 622, 180.0);
    delay(200.0);
    
    tone(tonePin, 659, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 493, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 415, 90.0);
    delay(100.0);
    
    tone(tonePin, 622, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 493, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 466, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 493, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 493, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 415, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 739, 360.0);
    delay(400.0);
    delay(200.0);
    
    tone(tonePin, 739, 180.0);
    delay(200.0);
    
    tone(tonePin, 830, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 622, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 493, 90.0);
    delay(100.0);
    
    tone(tonePin, 739, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 739, 180.0);
    delay(200.0);
    
    tone(tonePin, 830, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 622, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 493, 90.0);
    delay(100.0);
    
    tone(tonePin, 739, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 739, 180.0);
    delay(200.0);
    
    tone(tonePin, 830, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 622, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 493, 90.0);
    delay(100.0);
    
    tone(tonePin, 739, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 493, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 466, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 493, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 466, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 493, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 739, 360.0);
    delay(400.0);
    delay(200.0);
    
    tone(tonePin, 739, 180.0);
    delay(200.0);
    
    tone(tonePin, 830, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 622, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 493, 90.0);
    delay(100.0);
    
    tone(tonePin, 739, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 739, 180.0);
    delay(200.0);
    
    tone(tonePin, 830, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 622, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 493, 90.0);
    delay(100.0);
    
    tone(tonePin, 739, 360.0);
    delay(400.0);
    
    tone(tonePin, 311, 3.75);
    delay(4.16666666667);
    
    tone(tonePin, 311, 3.75);
    delay(4.16666666667);
    
    tone(tonePin, 329, 3.75);
    delay(4.16666666667);
    
    tone(tonePin, 246, 3.75);
    delay(4.16666666667);
    
    tone(tonePin, 207, 3.75);
    delay(4.16666666667);
    
    tone(tonePin, 311, 3.75);
    delay(4.16666666667);
    
    tone(tonePin, 311, 3.75);
    delay(4.16666666667);
    
    tone(tonePin, 329, 3.75);
    delay(4.16666666667);
    
    tone(tonePin, 246, 3.75);
    delay(4.16666666667);
    
    tone(tonePin, 207, 3.75);
    delay(4.16666666667);
    
    tone(tonePin, 311, 3.75);
    delay(4.16666666667);
    
    tone(tonePin, 311, 3.75);
    delay(4.16666666667);
    
    tone(tonePin, 329, 3.75);
    delay(4.16666666667);
    
    tone(tonePin, 246, 3.75);
    delay(4.16666666667);
    
    tone(tonePin, 207, 3.75);
    delay(4.16666666667);
    
    tone(tonePin, 311, 270.0);
    delay(300.0);
    delay(300.0);
    
    tone(tonePin, 311, 180.0);
    delay(200.0);
    
    tone(tonePin, 329, 180.0);
    delay(200.0);
    
    tone(tonePin, 311, 180.0);
    delay(200.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 207, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 369, 360.0);
    delay(400.0);
    delay(200.0);
    
    tone(tonePin, 369, 180.0);
    delay(200.0);
    
    tone(tonePin, 415, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 311, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    
    tone(tonePin, 369, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 369, 180.0);
    delay(200.0);
    
    tone(tonePin, 415, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 311, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    
    tone(tonePin, 369, 360.0);
    delay(400.0);
    delay(300.0);
    
    tone(tonePin, 369, 180.0);
    delay(200.0);
    
    tone(tonePin, 415, 180.0);
    delay(200.0);
    delay(200.0);
    
    tone(tonePin, 311, 90.0);
    delay(100.0);
    delay(100.0);
    
    tone(tonePin, 246, 90.0);
    delay(100.0);
    
    tone(tonePin, 369, 3.75);
    delay(4.16666666667);
}

void loop() {
    // Play midi
    midi();
}
