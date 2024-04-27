String app_version = "0.1.9";

bool _172701 = true;

// Functions

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
