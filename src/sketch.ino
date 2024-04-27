// System

#include "source.h"

// NanoAim

#include "bin.h"

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

void setup() {
  Mouse.begin();
  Keyboard.begin();
  SerialUSB.begin(23000);
  SerialUSB.println("NanoAim " + app_version);
}

void loop() {
  // x = 0;
  // train_model();
  if (mouse_trigger_bool == true) {
    mouse_trigger();
  }
}
