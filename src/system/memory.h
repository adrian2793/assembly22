// System

class object {
  public:
    int inaccuracy;
    int ammunition;
    int damage;
    int recoil_amount;
    int recoil_variance;
    int recoil_angle_variance;
    int smoothness = 0;
    int get_smoothness();
}

int object::get_smoothness() {
  this->smoothness = (recoil_amount - recoil_amount_variance) / 2;
  return this->smoothness;
}
