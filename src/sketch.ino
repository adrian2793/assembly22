#include "variables.h"
#include "bin.h"
#include "predictions.h"
#include <Mouse.h>
#include <Keyboard.h>

void config(String input) {
  switch (input) {
    case "aim_support 1":
      Serial.println("> aim_support 1");
      input = Serial.parseString();
      mouse_trigger = true;
      break;
    case "weapon_ammo":
      Serial.println("> weapon_ammo");
      while (Serial.available() == 0) { 
      }
      input = Serial.parseInt();
      weapon_ammo = input;
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
  input = Serial.parseString();
  config(input);
  while (Serial.parseString() != null) {
    while (Serial.available() == 0) { 
    }   
    Serial.println(">");
    input = Serial.parseString();
    config(input);
  }
}

void loop() {
  x = 0;
  train_model();
  if (mouse_trigger == true) {
    mouse_trigger();
  }
}
