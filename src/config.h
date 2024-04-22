#include <variables.h>

int set(String id, String value) {
  int config_ = str(int(id));
  switch (config_) {
    case 0:
      weapon_ammo = str(int(value));
  }
}
