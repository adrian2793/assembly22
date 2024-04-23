#include "variables.h"
#include "config.h"
#include "bin.h"
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
}
