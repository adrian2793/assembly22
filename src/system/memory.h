// System

class weapon {
  public:
    weapon(int inaccuracy, int ammunition, int damage, int recoil_amount, int recoil_variance, int recoil_angle_variance, int smoothness = 0);
}

weapon::weapon(int inaccuracy, int ammunition, int damage, int recoil_amount, int recoil_variance, int recoil_angle_variance, int smoothness = 0) {
  this->damage = this->damage / this->ammunition;
  this->smoothness = recoil_amount / recoil_angle_variance;
}

class player {
  public:
    int position_x; // Default -> 0
    int position_y; // Default -> 0
    int position_z; // Default -> 0
    int team = 0; // 0 -> Counter Terrorists
    bool visible = false;
}
