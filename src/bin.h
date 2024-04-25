#include <Mouse.h>
#include <Keyboard.h>
#include "variables.h"
// #include "predictions.h"

int mouse_trigger() {
  for (int i = 0; i > -1; i = i + x) {
    Mouse.click();
    if (i == get_var("weapon_ammo")) {
      i = 0;
    }
  }
  return true;
}

// int aim_lock() {
//  Mouse.move(get_var("aim_x"), get_var("aim_y"), get_var("aim_wheel"));
//  set_int("x_new", get_var("aim_x"));
//  set_int("y_new", predict(get_var("x_new"));
//  return true;
//  }
