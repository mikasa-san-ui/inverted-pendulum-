#include <Wire.h>

#define STEP_PIN 3
#define DIR_PIN 4
#define EN_PIN 8

void setup() {
  pinMode(STEP_PIN, OUTPUT);
  pinMode(DIR_PIN, OUTPUT);
  pinMode(EN_PIN, OUTPUT);
  digitalWrite(EN_PIN, LOW);

  Wire.begin();

  Serial.begin(115200);
  Serial.println("Wiring diagram reference sketch loaded.");
}

void loop() {
}
