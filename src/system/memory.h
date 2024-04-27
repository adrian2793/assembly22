// System

class object {
  public:
    const int inaccuracy;
    const int ammunition;
    const int damage;
    const int recoil_amount;
    const int recoil_variance;
    const int recoil_angle_variance;
    int smoothness;
    int get_smoothness(
}

int object::get_smoothness() {
  this->smoothness = (recoil_amount - recoil_amount_variance) / 2;
  return this->smoothness;
}
