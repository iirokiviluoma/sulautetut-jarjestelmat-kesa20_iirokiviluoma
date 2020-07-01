// PLA-32311 Sulautetut järjestelmät
// Iiro Kiviluoma 267380
// H1 osa 2

#include "Morse.h"
#include "Arduino.h"

const int TIME_UNIT = 250;  // ms

Morse::Morse(const int pin, const String word) {
    pin_ = pin;
    word_ = word;
    pinMode(pin_, HIGH);
}

void Morse::sos() {
    dot(); dot(); dot();
    dash(); dash(); dash();
    dot(); dot(); dot();
    delay(12*TIME_UNIT);
}

void Morse::morseWord() {
    for (const auto c : word_) {
        //char from_string[] = w;
        morseChar(c);
    }
    delay(12*TIME_UNIT);
}

void Morse::dot() {
    digitalWrite(pin_, HIGH);
    delay(TIME_UNIT);
    digitalWrite(pin_, LOW);
    delay(TIME_UNIT);
}

void Morse::dash() {
    digitalWrite(pin_, HIGH);
    delay(4*TIME_UNIT);
    digitalWrite(pin_, LOW);
    delay(TIME_UNIT);
}

void Morse::morseChar(const char c) {
    switch (c) {
        case 'a':
            dot(); dash();
            delay(TIME_UNIT);
            break;
        case 'b':
            dash(); dot(); dot(); dot();
            delay(TIME_UNIT);
            break;
        case 'c':
            dash(); dot(); dash(); dot();
            delay(TIME_UNIT);
            break;
        case 'd':
            dash(); dot(); dot();
            delay(TIME_UNIT);
            break;
        case 'e':
            dot();
            delay(TIME_UNIT);
            break;
        case 'f':
            dot(); dot(); dash(); dot();
            delay(TIME_UNIT);
            break;
        case 'g':
            dash(); dash(); dot();
            delay(TIME_UNIT);
            break;
        case 'h':
            dot(); dot(); dot(); dot();
            delay(TIME_UNIT);
            break;
        case 'i':
            dot(); dot();
            delay(TIME_UNIT);
            break;
        case 'j':
            dot(); dash(); dash(); dash();
            delay(TIME_UNIT);
            break;
        case 'k':
            dash(); dot(); dash();
            delay(TIME_UNIT);
            break;
        case 'l':
            dot(); dash(); dot(); dot();
            delay(TIME_UNIT);
            break;
        case 'm':
            dash(); dash();
            delay(TIME_UNIT);
            break;
        case 'n':
            dash(); dot();
            delay(TIME_UNIT);
            break;
        case 'o':
            dash(); dash(); dash();
            delay(TIME_UNIT);
            break;
        case 'p':
            dot(); dash(); dash(); dot();
            delay(TIME_UNIT);
            break;
        case 'q':
            dash(); dash(); dot(); dash();
            delay(TIME_UNIT);
            break;
        case 'r':
            dot(); dash(); dot();
            delay(TIME_UNIT);
            break;
        case 's':
            dot(); dot(); dot();
            delay(TIME_UNIT);
            break;
        case 't':
            dash();
            delay(TIME_UNIT);
            break;
        case 'u':
            dot(); dot(); dash(); dash();
            delay(TIME_UNIT);
            break;
        case 'v':
            dot(); dot(); dot(); dash();
            delay(TIME_UNIT);
            break;
        case 'w':
            dot(); dash(); dash();
            delay(TIME_UNIT);
            break;
        case 'x':
            dash(); dot(); dot(); dash();
            delay(TIME_UNIT);
            break;
        case 'y':
            dash(); dot(); dash(); dash();
            delay(TIME_UNIT);
            break;
        case 'z':
            dash(); dash(); dot(); dot();
            delay(TIME_UNIT);
            break;
        default:
            break;
    }
}
