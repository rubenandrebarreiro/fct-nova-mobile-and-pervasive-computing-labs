/*
  SparkFun Inventor's Kit - Example sketch 03
  
  RGB LED: Make an RGB LED display a rainbow of colors!
  
  Hardware connections:
  - An RGB LED is actually three LEDs (red, green, and blue) in
    one package. When you run them at different brightnesses,
    the red, green and blue mix to form new colors.

  Starting at the flattened edge of the flange on the LED,
  the pins are ordered RED, COMMON, GREEN, BLUE.

  Connect RED to a 330 ohm resistor. Connect the other end
  of the resistor to Arduino digital pin 9.

  Connect COMMON pin to GND.

  Connect GREEN to a 330 ohm resistor. Connect the other end
  of the resistor to Arduino digital pin 10.

  Connect BLUE to a 330 ohm resistor. Connect the other end
  of the resistor to Arduino digital pin 11.

  This sketch was written by SparkFun Electronics,
  with lots of help from the Arduino community.
  Visit http://learn.sparkfun.com/products/2 for SIK information.
  Visit http://www.arduino.cc to learn about the Arduino.

  Version 2.0 6/2012 MDG

  Adapted for the Pratical Labs (Lab #2 - March 21, 2019) of:
  - Mobile and Pervasive Computing
    @ FCT NOVA (Faculty of Sciences and Technology of New University of Lisbon)

  Adapted by:
  - Carmen Pires Morgado - cpm@fct.unl.pt
  - Ruben Andre Barreiro - r.barreiro@campus.fct.unl.pt
*/

// First we'll define the pins by name to make the sketch
// easier to follow:
// - Here's a new trick: putting the word "const" in front of a variable
//   indicates that this is a "constant" value that will never change
//   (You don't have to do this, but if you do, the
// - Arduino will give you a friendly warning if you accidentally
//   try to change the value, so it's considered good form)
const int RED_PIN = 9;
const int GREEN_PIN = 10;
const int BLUE_PIN = 11;

// This variable controls how fast we loop through the colors
// (Try changing this to make the fading faster or slower)
int DISPLAY_TIME = 10;  // In milliseconds

void setup() {
  // Here we'll configure the Arduino pins we're using to
  // drive the LED to be outputs:
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  mainColors();
}

// This function displays the eight "main" colors that the RGB LED
// can produce. If you'd like to use one of these colors in your 
// own sketch, you can copy and paste that section into your code
void mainColors() {
  
  // Off (all LEDs off):
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);
  
  delay(1000);
  
  // Red (turn just the red LED on):
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);
  
  delay(1000);
  
  // Green (turn just the green LED on):
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW);
  
  delay(1000);
  
  // Blue (turn just the blue LED on):
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
  
  delay(1000);
  
  // Yellow (turn red and green on):
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW);
  
  delay(1000);
  
  // Cyan (turn green and blue on):
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);
  
  delay(1000);
  
  // Purple (turn red and blue on):
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
  
  delay(1000);
  
  // White (turn all the LEDs on):  
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);
  
  delay(1000);
}
