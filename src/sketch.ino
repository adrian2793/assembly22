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
  Serial.print("Advanced Game Control");
}

void loop() {
  if (delay_startup == true) {
    while (Serial.available() == 0) { 
    }
    switch (input) {
      case "aim_support 1":
        Serial.println("> aim_support 1");
        mouse_trigger();
    }
  }
  x = 0;
  train_model();
}
