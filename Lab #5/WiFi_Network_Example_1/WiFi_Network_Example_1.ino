/*
 * Simple Sketch to test WiFi component connection.
 * 
 * Adapted for the Pratical Labs (Lab #5 - April 11, 2019) of:
 * - Mobile and Pervasive Computing
 *   @ FCT NOVA (Faculty of Sciences and Technology of New University of Lisbon)

 * Adapted by:
 * - Carmen Pires Morgado - cpm@fct.unl.pt
 * - Ruben Andre Barreiro - r.barreiro@campus.fct.unl.pt
 */

#include <ESP8266WiFi.h>

void setup() {
  Serial.begin(115200);
  Serial.println();

  WiFi.begin("OpenFCT", "");

  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println();

  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
 // Empty loop method  
}
