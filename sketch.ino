#define $APP_NAME "Advanced Game Control"
#define $APP_VERSION "v0.1.7"
#define $DEFAULT_AMMO 25
int weapon_ammo = $DEFAULT_AMMO
#include <Mouse.h>
#include <Keyboard.h>

void setup() {
  Mouse.begin();
  Keyboard.begin();
}

void loop() {
  x = 0;
  Serial.print("$APP_NAME $APP_VERSION");
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
