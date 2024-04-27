// System

class weapon {
  public:
    weapon(int inaccuracy, int ammunition, int damage, int recoil_amount, int recoil_variance, int recoil_angle_variance, int smoothness = 0);
    bool get_smoothness();
}

weapon::weapon(int inaccuracy, int ammunition, int damage, int recoil_amount, int recoil_variance, int recoil_angle_variance, int smoothness = 0) {
  this->smoothness = recoil_amount / recoil_angle_variance;
}
