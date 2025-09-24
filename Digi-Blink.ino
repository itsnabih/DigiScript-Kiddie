void setup() {
  pinMode(0, OUTPUT); // LED is attched to pin 0
}

void loop() {
  digitalWrite(0, HIGH);  // turn the LED on
  delay(1000);           // wait for a second
  digitalWrite(0, LOW); // turn the LED off
  delay(1000);         // wait for a second
}
