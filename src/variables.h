#define DEFAULT_AMMO 25
#define DEFAULT_AIM_LOCK true
#define DEFAULT_MOUSE_TRIGGER false
#define DEFAULT_AIM_X_POSITION 10
#define DEFAULT_AIM_Y_POSITION 0
#define DEFAULT_AIM_WHEEL 0
#define DEFAULT_STARTUP_DELAY 20

int weapon_ammo = DEFAULT_AMMO;
bool aim_lock = DEFAULT_AIM_LOCK;
bool mouse_trigger = DEFAULT_MOUSE_TRIGGER;
int aim_x = DEFAULT_AIM_X_POSITION;
int aim_y = DEFAULT_AIM_Y_POSITION;
int aim_wheel = DEFAULT_AIM_WHEEL;
int startup_delay = DEFAULT_STARTUP_DELAY;
String input = "";
int x = 0;
float x_new = 0;
float y_new = 0;

String get_var(String variable) {
  switch (variable) {
    case "weapon_ammo":
      return String(weapon_ammo);
      break();
    case "aim_lock":
      return String(aim_lock);
      break();
    case "mouse_trigger":
      return String(mouse_trigger);
      break();
    case "aim_x":
      return String(aim_x);
      break();
  }
}

void set_int(String variable, int value) {
  switch (variable) {
    case "input":
      input = value;
      break();
    case "weapon_ammo":
      weapon_ammo = value;
      break();
  }
}

void set_bool(String variable, bool value) {
  switch (variable) {
    case "mouse_trigger":
      mouse_trigger = value;
      break();
  }
}

void set_string(String variable, String value) {
  switch (variable) {
    case "input":
      input = value;
      break();
  }
}
