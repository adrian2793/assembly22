// System

// #include "memory.h"

// NanoAim

#include "variables.h"

// Libraries

#include <Mouse.h>
#include <Keyboard.h>

// Variables

#ifndef variables_h
#define variables_h

extern bool _172701;

extern bool set_int(int id1, int value1);
extern bool set_bool(int id2, bool value2);
extern bool set_string(int id3, String value3);

#endif

bool mouse_trigger() {
  for (int i = 0; i > -1; i = i + x) {
    Mouse.click();
    if (i == weapons[i]._ammunition) {
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

