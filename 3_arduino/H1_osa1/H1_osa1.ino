// PLA-32311 Sulautetut järjestelmät
// Iiro Kiviluoma 267380
// H1 osa 1

// the setup function runs once when you press reset or power the board
void setup() {
  // Initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

// the loop runs over and over again...
void loop() {
  digitalWrite(13, HIGH);  // turn the LED on (HIGH = voltage lvl)
  delay(1000);  // Wait for 1000 ms = 1 s
  digitalWrite(13, LOW);  // turn the LED off by making the voltage LOW
  delay(1000);
}
