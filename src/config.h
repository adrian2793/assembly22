#include "variables.h"

int set(String id, String value) {
  int config_ = str(int(id));
  switch (config_) {
    case 0:
      weapon_ammo = str(int(value));
    case 1:
      aim_x = str(int(value));
    case 2:
      aim_y = str(int(value));
    case 3:
      aim_wheel = str(int(value));
  }
}
