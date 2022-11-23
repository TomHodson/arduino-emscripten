#include <Arduino.h>

void setup() {
  Serial.println("Setting pinMode of pin 13");
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  Serial.println("LED On");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  Serial.println("LED Off");
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}