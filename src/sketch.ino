#include "variables.h"
// #include "config.h"
// #include "bin.h"
#include "predictions.h"
#include <Mouse.h>
#include <Keyboard.h>

void setup() {
  Mouse.begin();
  Keyboard.begin();
  Serial.begin(23000);
  Serial.print("NanoAim 0.0.9");
}

void loop() {
  while (delay_startup == true) {
    while (Serial.available() == 0) { 
    }
    delay(15000);
    String input = Serial.parseString();
  }
  switch (input) {
      case "aim_support 1":
        Serial.println("> aim_support 1");
        mouse_trigger();
    }
  x = 0;
  train_model();
}
