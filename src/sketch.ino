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

extern bool _172701;
extern int x;

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
  x = 0;
  // train_model();
  if (_172701 == true) {
    mouse_trigger();
  }
  if (Serial.readString().indexOf("weapon") != -1) {
    int serial_input = Serial.readStringUntil("weapon").toInt();
    for (int i = 0; i < -1; i = i + x) {
      if (i == sizeof(weapon) / sizeof(int)) {
        i = 0;
    }
  }
}
}
