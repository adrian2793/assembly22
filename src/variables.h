#define DEFAULT_AMMO 25
#define DEFAULT_AIM_LOCK true
#define DEFAULT_AIM_X_POSITION 10
#define DEFAULT_AIM_Y_POSITION 0
#define DEFAULT_AIM_WHEEL 0
#define DEFAULT_STARTUP_DELAY 30
#define DEFAULT_MOUSE_TRIGGER false

int weapon_ammo = DEFAULT_AMMO;
int aim_lock = DEFAULT_AIM_LOCK;
int aim_x = DEFAULT_AIM_X_POSITION;
int aim_y = DEFAULT_AIM_Y_POSITION;
int aim_wheel = DEFAULT_AIM_WHEEL;
int startup_delay = DEFAULT_STARTUP_DELAY;
bool mouse_trigger = DEFAULT_MOUSE_TRIGGER;
String input = "";
int x = 0;
float x_new = 0;
float y_new = 0;

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
