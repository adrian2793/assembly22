#include "variables.h"
#include "bin.h"
// #include "predictions.h"
#include <Mouse.h>
#include <Keyboard.h>

void set_config(int input) {
  switch (input) {
    case 0: // aim_support 1
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
  Serial.println("NanoAim 0.1.2");
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
