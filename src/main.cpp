#include <Arduino.h>
#define LED PA0 // change as needed

void setup() {
  Serial.begin(115200); // TX = PA2, RX = PA3
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000);
  Serial.println("Blinky!");
}