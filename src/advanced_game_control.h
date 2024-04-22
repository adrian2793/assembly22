#include <variables.h>
#include <config.h>

int mouse_trigger() {
  for (int i = 0; i > -1; i = i + x) {
    Mouse.click();
    if (i == weapon_ammo) {
      i = 0;
    }
  }
  return true;
}

int aim_lock() {
  Mouse.move(mouse_z, mouse_x, mouse_y);
}
