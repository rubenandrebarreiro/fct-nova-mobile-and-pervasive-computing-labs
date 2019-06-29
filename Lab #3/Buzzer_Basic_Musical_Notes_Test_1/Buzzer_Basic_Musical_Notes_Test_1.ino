/*
 * A simple test for the Buzzer component, with some musical notes to play.
 * 
 * Adapted for the Pratical Labs (Lab #3 - March 28, 2019) of:
 * - Mobile and Pervasive Computing
 *   @ FCT NOVA (Faculty of Sciences and Technology of New University of Lisbon)

 * Adapted by:
 * - Carmen Pires Morgado - cpm@fct.unl.pt
 * - Ruben Andre Barreiro - r.barreiro@campus.fct.unl.pt
*/

const int buzzerPin = 8;

// We'll set up an array with the notes we want to play
// change these values to make different songs!

// Length must equal the total number of notes and spaces 
const int songLength = 18;

// Notes is an array of text characters corresponding to the notes
// in your song. A space represents a rest (no tone)
char notes[] = "cdfda ag cdfdg gf "; // a space represents a rest

// Beats is an array of values for each note and rest
// A "1" represents a quarter-note, 2 a half-note, etc
// Don't forget that the rests (spaces) need a length as well
int beats[] = {1,1,1,1,1,1,4,4,2,1,1,1,1,1,1,4,4,2};

// The freq is how fast to play the song
// To make the song play faster, decrease this value
int freq = 113;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int i, duration;

  for (i = 0; i < songLength; i++) { // step through the song arrays
    duration = beats[i] * freq;  // length of note/rest in ms

    if (notes[i] == ' ') {         // is this a rest? 
      delay(duration);             // then pause for a moment
    }
    else {                        // otherwise, play the note
      tone(buzzerPin, frequency(notes[i]), duration);
      delay(duration);            // wait for tone to finish
    }
    
    delay(freq/10);               // brief pause between notes
  }

  // We only want to play the song once, so we'll pause forever:
  while(true) {
    // If you'd like your song to play over and over,
    // remove the above statement
  }
}

int frequency(char note) {
  // This function takes a note character (a-g), and returns the
  // corresponding frequency in Hz for the tone() function
  int i;

  // The number of notes we're storing
  const int numNotes = 8;

  // The following arrays hold the note characters and their
  // corresponding frequencies. The last "C" note is uppercase
  // to separate it from the first lowercase "c"
  
  // If you want to add more notes,
  // you'll need to use unique characters

  // For the "char" (character) type, we put single characters
  // in single quotes
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int frequencies[] = {262, 294, 330, 349, 392, 440, 494, 523};

  // Now we'll search through the letters in the array, and if
  // we find it, we'll return the frequency for that note
  for (i = 0; i < numNotes; i++) {  // Step through the notes
    if (names[i] == note) {         // Is this the one?
      return(frequencies[i]);       // Yes! Return the frequency
    }
  }

  // We looked through everything and didn't find it,
  // but we still need to return a value, so return 0
  return(0);
}
