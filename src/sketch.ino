#include <variables.h>
#include <config.h>
#include <advanced_game_control.h>
#include <Mouse.h>
#include <Keyboard.h>

void setup() {
  Mouse.begin();
  Keyboard.begin();
}

void loop() {
  x = 0;
  Serial.print("Advanced Game Control");
}
