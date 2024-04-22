#include <Mouse.h>
#include <Keyboard.h>

void setup() {
  Mouse.begin();
  Keyboard.begin();
}

void loop() {
  mouse_lock();
}
