#include "bin.h"
// #include "predictions.h"
#include <Mouse.h>
#include <Keyboard.h>

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

void set_config(int input) {
  switch (input) {
    case 0: // aim_support
      Serial.println("> aim_support");
      while (Serial.available() == 0) {
      }
      set_int("int_input", Serial.parseInt());
      set_bool("mouse_trigger_bool", int_input);
      break;
    case 1: // weapon_ammo
      Serial.println("> weapon_ammo");
      while (Serial.available() == 0) { 
      }
      set_int("int_input", Serial.parseInt());
      set_int("weapon_ammo", int_input);
      Serial.println("> weapon_ammo = " + weapon_ammo);
      break;
  }
}

void setup() {
  Mouse.begin();
  Keyboard.begin();
  Serial.begin(23000);
  Serial.println("NanoAim " + app_version);
  while (Serial.available() == 0) { 
  }
  Serial.println("> startup_delay = 20.000");
  delay(startup_delay);
  set_int("int_input", Serial.parseInt());
  set_config(int_input);
  while (Serial.available() == 0) { 
  }   
  Serial.println(">");
  set_int("int_input", Serial.parseInt());
  set_config(int_input);
}

void loop() {
  // x = 0;
  // train_model();
  if (mouse_trigger_bool == true) {
    mouse_trigger();
  }
}
