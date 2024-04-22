#include <Mouse.h>
#include <Keyboard.h>

void setup() {
  Mouse.begin();
  Keyboard.begin();
}

void loop() {
  Serial.print("Advanced Game Contol v$APP_VERSION");
  
}
