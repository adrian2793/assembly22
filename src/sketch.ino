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
  x = 0;
  train_model();
}
