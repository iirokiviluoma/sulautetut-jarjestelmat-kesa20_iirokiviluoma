// PLA-32311 Sulautetut järjestelmät
// Iiro Kiviluoma 267380
// H1 osa 2

#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class Morse {
public:
    Morse(const int pin, const String word);
    void sos();
    void morseWord();

private:
    void dot();
    void dash();
    void morseChar(const char c);  // Morse codes for every alphabet!
    int pin_;
    String word_;
};

#endif
