#include <variables.h>
#include <config.h>
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

int mouse_trigger() {
  for (int i = 0; i > -1; i = i + x) {
    Mouse.click();
    if (i == weapon_ammo) {
      i = 0;
    }
  }
  return true;
}
