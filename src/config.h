#include "variables.h"

int set(int id, String value) {
  int config_ = id;
  switch (config_) {
    case 0:
      weapon_ammo = value.toInt();
    case 1:
      aim_x = value.toInt();
    case 2:
      aim_y = value.toInt();
    case 3:
      aim_wheel = value.toInt();
  }
}
