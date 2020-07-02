// PLA-32311 Sulautetut järjestelmät
// Iiro Kiviluoma 267380
// H1 osa 2 (LCD)

// Arduino näyttää LCD-näytöllä testWord-muuttujaan sijoitettavaa sanaa.

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const String testWord= "PLA-32311";  // 1st row text
const String testWord2= "H1 osa 2 LCD";  // 2nd row text

void setup() {
  // Set up the LCD's whole screen (16x2)
  lcd.begin(16,2);
  // Printing the first row
  lcd.print(testWord);
  // Set the cursor to col 0, line 1 (2nd)
  lcd.setCursor(0, 1);
  // Printing the second row
  lcd.print(testWord2);
}

void loop() {
}
