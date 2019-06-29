/**
 * Buzzer test, with the song "Pokémon - Title Screen"
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
    tone(tonePin, 195, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 246, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 293, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 369, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 391, 166.6665);
    delay(185.185);
    delay(185.185);
    
    tone(tonePin, 391, 166.6665);
    delay(185.185);
    delay(370.37);
    
    tone(tonePin, 391, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 391, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 391, 166.6665);
    delay(185.185);
    delay(185.185);
    
    tone(tonePin, 391, 166.6665);
    delay(185.185);
    delay(185.185);
    
    tone(tonePin, 391, 166.6665);
    delay(185.185);
    delay(185.185);
    
    tone(tonePin, 349, 83.33325);
    delay(92.5925);
    delay(30.8641666667);
    
    tone(tonePin, 349, 83.33325);
    delay(92.5925);
    delay(30.8641666667);
    
    tone(tonePin, 349, 83.33325);
    delay(92.5925);
    delay(30.8641666667);
    
    tone(tonePin, 349, 83.33325);
    delay(92.5925);
    delay(30.8641666667);
    
    tone(tonePin, 349, 83.33325);
    delay(92.5925);
    delay(30.8641666667);
    
    tone(tonePin, 369, 83.33325);
    delay(92.5925);
    delay(30.8641666667);
    
    tone(tonePin, 391, 499.9995);
    delay(555.555);
    
    tone(tonePin, 493, 166.6665);
    delay(185.185);
    
    tone(tonePin, 587, 666.666);
    delay(740.74);
    
    tone(tonePin, 220, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 174, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 698, 499.9995);
    delay(555.555);
    
    tone(tonePin, 659, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 622, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 587, 666.666);
    delay(740.74);
    
    tone(tonePin, 220, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 246, 83.33325);
    delay(92.5925);
    delay(740.74);
    
    tone(tonePin, 391, 499.9995);
    delay(555.555);
    
    tone(tonePin, 493, 166.6665);
    delay(185.185);
    
    tone(tonePin, 587, 666.666);
    delay(740.74);
    
    tone(tonePin, 220, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 174, 166.6665);
    delay(185.185);
    
    tone(tonePin, 523, 222.222);
    delay(246.913333333);
    
    tone(tonePin, 493, 222.222);
    delay(246.913333333);
    
    tone(tonePin, 523, 222.222);
    delay(246.913333333);
    
    tone(tonePin, 587, 666.666);
    delay(740.74);
    
    tone(tonePin, 146, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 146, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 184, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 195, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 391, 499.9995);
    delay(555.555);
    
    tone(tonePin, 493, 166.6665);
    delay(185.185);
    
    tone(tonePin, 587, 666.666);
    delay(740.74);
    
    tone(tonePin, 220, 166.6665);
    delay(185.185);
    
    tone(tonePin, 174, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 698, 499.9995);
    delay(555.555);
    
    tone(tonePin, 659, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 622, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 587, 666.666);
    delay(740.74);
    
    tone(tonePin, 261, 166.6665);
    delay(185.185);
    
    tone(tonePin, 220, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 246, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 195, 166.6665);
    delay(185.185);
    
    tone(tonePin, 174, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 391, 499.9995);
    delay(555.555);
    
    tone(tonePin, 493, 166.6665);
    delay(185.185);
    
    tone(tonePin, 587, 666.666);
    delay(740.74);
    
    tone(tonePin, 195, 55.5555);
    delay(61.7283333333);
    
    tone(tonePin, 174, 55.5555);
    delay(61.7283333333);
    
    tone(tonePin, 220, 55.5555);
    delay(61.7283333333);
    
    tone(tonePin, 698, 222.222);
    delay(246.913333333);
    
    tone(tonePin, 659, 222.222);
    delay(246.913333333);
    
    tone(tonePin, 698, 222.222);
    delay(246.913333333);
    
    tone(tonePin, 783, 499.9995);
    delay(555.555);
    
    tone(tonePin, 932, 166.6665);
    delay(185.185);
    
    tone(tonePin, 783, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 880, 666.666);
    delay(740.74);
    
    tone(tonePin, 932, 499.9995);
    delay(555.555);
    
    tone(tonePin, 698, 166.6665);
    delay(185.185);
    
    tone(tonePin, 698, 666.666);
    delay(740.74);
    
    tone(tonePin, 293, 666.666);
    delay(740.74);
    
    tone(tonePin, 932, 333.333);
    delay(370.37);
    
    tone(tonePin, 987, 333.333);
    delay(370.37);
    
    tone(tonePin, 1046, 499.9995);
    delay(555.555);
    
    tone(tonePin, 783, 166.6665);
    delay(185.185);
    
    tone(tonePin, 783, 666.666);
    delay(740.74);
    
    tone(tonePin, 329, 666.666);
    delay(740.74);
    
    tone(tonePin, 1046, 333.333);
    delay(370.37);
    
    tone(tonePin, 1108, 333.333);
    delay(370.37);
    
    tone(tonePin, 1174, 166.6665);
    delay(185.185);
    delay(92.5925);
    
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    delay(277.7775);
    
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    delay(277.7775);
    
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    delay(277.7775);
    
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    delay(277.7775);
    
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    delay(277.7775);
    
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 1046, 222.222);
    delay(246.913333333);
    
    tone(tonePin, 1046, 222.222);
    delay(246.913333333);
    
    tone(tonePin, 1108, 222.222);
    delay(246.913333333);
    
    tone(tonePin, 1174, 166.6665);
    delay(185.185);
    delay(92.5925);
    
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    delay(277.7775);
    
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    delay(277.7775);
    
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    delay(277.7775);
    
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    delay(185.185);
    
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    delay(277.7775);
    
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 1046, 222.222);
    delay(246.913333333);
    
    tone(tonePin, 1046, 222.222);
    delay(246.913333333);
    
    tone(tonePin, 987, 222.222);
    delay(246.913333333);
    
    tone(tonePin, 391, 499.9995);
    delay(555.555);
    
    tone(tonePin, 493, 166.6665);
    delay(185.185);
    
    tone(tonePin, 587, 666.666);
    delay(740.74);
    
    tone(tonePin, 220, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 174, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 698, 499.9995);
    delay(555.555);
    
    tone(tonePin, 659, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 622, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 587, 666.666);
    delay(740.74);
    
    tone(tonePin, 220, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 246, 83.33325);
    delay(92.5925);
    delay(740.74);
    
    tone(tonePin, 391, 499.9995);
    delay(555.555);
    
    tone(tonePin, 493, 166.6665);
    delay(185.185);
    
    tone(tonePin, 587, 666.666);
    delay(740.74);
    
    tone(tonePin, 220, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 174, 166.6665);
    delay(185.185);
    
    tone(tonePin, 523, 222.222);
    delay(246.913333333);
    
    tone(tonePin, 493, 222.222);
    delay(246.913333333);
    
    tone(tonePin, 523, 222.222);
    delay(246.913333333);
    
    tone(tonePin, 587, 666.666);
    delay(740.74);
    
    tone(tonePin, 146, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 146, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 184, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 195, 83.33325);
    delay(92.5925);
 
    tone(tonePin, 391, 499.9995);
    delay(555.555);
  
    tone(tonePin, 493, 166.6665);
    delay(185.185);
  
    tone(tonePin, 587, 666.666);
    delay(740.74);
 
    tone(tonePin, 220, 166.6665);
    delay(185.185);
 
    tone(tonePin, 174, 83.33325);
    delay(92.5925);
 
    tone(tonePin, 698, 499.9995);
    delay(555.555);
 
    tone(tonePin, 659, 83.33325);
    delay(92.5925);
 
    tone(tonePin, 622, 83.33325);
    delay(92.5925);
 
    tone(tonePin, 587, 666.666);
    delay(740.74);

    tone(tonePin, 261, 166.6665);
    delay(185.185);
 
    tone(tonePin, 220, 83.33325);
    delay(92.5925);
 
    tone(tonePin, 246, 83.33325);
    delay(92.5925);
 
    tone(tonePin, 195, 166.6665);
    delay(185.185);
 
    tone(tonePin, 174, 83.33325);
    delay(92.5925);
  
    tone(tonePin, 391, 499.9995);
    delay(555.555);
 
    tone(tonePin, 493, 166.6665);
    delay(185.185);
 
    tone(tonePin, 587, 666.666);
    delay(740.74);
 
    tone(tonePin, 195, 55.5555);
    delay(61.7283333333);
  
    tone(tonePin, 174, 55.5555);
    delay(61.7283333333);
  
    tone(tonePin, 220, 55.5555);
    delay(61.7283333333);

    tone(tonePin, 698, 222.222);
    delay(246.913333333);
  
    tone(tonePin, 659, 222.222);
    delay(246.913333333);

    tone(tonePin, 698, 222.222);
    delay(246.913333333);

    tone(tonePin, 783, 499.9995);
    delay(555.555);

    tone(tonePin, 932, 166.6665);
    delay(185.185);

    tone(tonePin, 783, 83.33325);
    delay(92.5925);

    tone(tonePin, 880, 666.666);
    delay(740.74);
  
    tone(tonePin, 932, 499.9995);
    delay(555.555);
 
    tone(tonePin, 698, 166.6665);
    delay(185.185);
 
    tone(tonePin, 698, 666.666);
    delay(740.74);

    tone(tonePin, 293, 666.666);
    delay(740.74);
 
    tone(tonePin, 932, 333.333);
    delay(370.37);
  
    tone(tonePin, 987, 333.333);
    delay(370.37);
  
    tone(tonePin, 1046, 499.9995);
    delay(555.555);
 
    tone(tonePin, 783, 166.6665);
    delay(185.185);
  
    tone(tonePin, 783, 666.666);
    delay(740.74);
  
    tone(tonePin, 329, 666.666);
    delay(740.74);
 
    tone(tonePin, 1046, 333.333);
    delay(370.37);
 
    tone(tonePin, 1108, 333.333);
    delay(370.37);
 
    tone(tonePin, 1174, 166.6665);
    delay(185.185);
    delay(92.5925);
  
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    delay(277.7775);
  
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    delay(277.7775);
  
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    delay(277.7775);
  
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    delay(277.7775);
 
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    delay(277.7775);
  
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 1046, 222.222);
    delay(246.913333333);
   
    tone(tonePin, 1046, 222.222);
    delay(246.913333333);
   
    tone(tonePin, 1108, 222.222);
    delay(246.913333333);
    
    tone(tonePin, 1174, 166.6665);
    delay(185.185);
    delay(92.5925);
   
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    delay(277.7775);
    
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    delay(277.7775);
    
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    delay(277.7775);
    
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    delay(185.185);
    
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    delay(277.7775);
    
    tone(tonePin, 587, 83.33325);
    delay(92.5925);
    
    tone(tonePin, 1046, 222.222);
    delay(246.913333333);
    
    tone(tonePin, 1046, 222.222);
    delay(246.913333333);
    
    tone(tonePin, 987, 222.222);
    delay(246.913333333);
}

void loop() {
    // Play midi
    midi();
}
