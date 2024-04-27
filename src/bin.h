// System

#include "memory.h"

// NanoAim

#include "variables.h"

// Libraries

#include <Mouse.h>
#include <Keyboard.h>

// Variables

#ifndef variables_h
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
    delay(100);
  }
  return true;
}

// bool aim_lock() {
//  Mouse.move(aim_x, aim_y, aim_wheel);
//  set_int("x_new", aim_x);
//  set_int("y_new", predict(x_new);
//  return true;
//  }
