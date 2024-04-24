#include <Mouse.h>
#include <Keyboard.h>
#include "variables.h"
// #include "predictions.h"

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
  Mouse.move(aim_x, aim_y, aim_wheel);
  x_new = aim_x;
  y_new = predict(x_new);
  return true;
}
