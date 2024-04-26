#include <Mouse.h>
#include <Keyboard.h>
#include "variables.h"
// #include "predictions.h"

ifndef variables_h
#define variables_h

extern int weapon_ammo;
extern bool aim_lock;
extern bool mouse_trigger_bool;
extern int aim_x;
extern int aim_y;
extern int aim_wheel;
extern int startup_delay;
extern String string_input;
extern int int_input;
extern int x;
extern float x_new;
extern float y_new;

bool set_int(int id1, int value1);
bool set_bool(int id2, bool value2);
bool set_string(int id3, String value3);

#endif

bool mouse_trigger() {
  for (int i = 0; i > -1; i = i + x) {
    Mouse.click();
    if (i == weapon_ammo) {
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
