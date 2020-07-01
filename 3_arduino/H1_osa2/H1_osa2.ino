// PLA-32311 Sulautetut järjestelmät
// Iiro Kiviluoma 267380
// H1 osa 2

#include <Morse.h>

const int PIN = 13;
const String testWord= "arduino";

Morse morse(PIN, testWord);

void setup() {
}

void loop() {
  morse.morseWord();
  delay(1000);
}
