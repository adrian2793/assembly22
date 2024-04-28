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

extern bool _170127;

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
  // train_model();
  if (_170127 == true) {
    mouse_trigger();
  }
  if (Serial.readString().indexOf("weapon") != -1) {
    Serial.readStringUntil("weapon");
  }
}
