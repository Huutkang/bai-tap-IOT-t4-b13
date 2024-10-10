#include <Arduino.h>

const int ldrPin = 39;  // ADC pin where LDR is connected

void setup() {
  Serial.begin(115200);  // Initialize UART
  analogReadResolution(12);  // Set ADC resolution (0-4095)
}

void loop() {
  int ldrValue = analogRead(ldrPin);  // Read the LDR value
  Serial.print(">LDR_value: ");
  Serial.println(ldrValue);  // Print the LDR value to UART
  delay(100);  // Delay for 100ms
}
