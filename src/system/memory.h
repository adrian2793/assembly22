// System

class weapon {
  public:
    weapon(String name; int inaccuracy, int ammunition, int damage, int recoil_amount, int recoil_variance, int recoil_angle_variance, int smoothness = 0);
}

weapon::weapon(String name; int inaccuracy, int ammunition, int damage, int recoil_amount, int recoil_variance, int recoil_angle_variance, int smoothness = 0) {
  this->damage = this->damage / this->ammunition;
  this->smoothness = recoil_amount / recoil_angle_variance;
}
