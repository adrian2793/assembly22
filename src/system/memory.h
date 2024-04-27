// System

class weapon {
  public:
    weapon(int inaccuracy, int ammunition, int damage, int recoil_amount, int recoil_variance, int recoil_angle_variance, int smoothness = 0);
    bool get_smoothness();
}

weapon::weapon(int inaccuracy, int ammunition, int damage, int recoil_amount, int recoil_variance, int recoil_angle_variance, int smoothness = 0) {
}

bool weapon::get_smoothness() {
  this->smoothness = (recoil_amount - recoil_amount_variance) / 2;
  return this->smoothness;
}

