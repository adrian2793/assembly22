int weapon_ammo = 25;
bool aim_lock = true;
bool mouse_trigger_bool = true;
int aim_x = 10;
int aim_y = 0;
int aim_wheel = 0;
int startup_delay = 20;
String string_input = "";
int int_input = 0;
int x = 0;
float x_new = 0;
float y_new = 0;

bool set_int(int id1, int value1) {
  switch (id1) {
    case 0: // int_input
      int_input = value1;
      return true;
    case 1: // weapon_ammo
      weapon_ammo = value1;
      return true;
  }
  return false;
}

bool set_bool(int id2, bool value2) {
  switch (id2) {
    case 0: // mouse_trigger_bool
      mouse_trigger_bool = value2;
      return true;
  }
  return false;
}

bool set_string(int id3, String value3) {
  switch (id3) {
    case 0: // string_input
      string_input = value3;
      return true;
  }
  return false;
}
