#include <Arduino.h>
#include "M5Stack.h"

void setup(){

  // Initialize the M5Stack object
  M5.begin();

  // LCD display
  M5.Lcd.print("Hello world!");
}

// the loop routine runs over and over again forever
void loop() {
    M5.update();
}