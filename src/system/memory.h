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
    player(int position_x, int position_y, int position_z, int team = 0, bool visible = false);
}

player::player(int position_x, int position_y, int position_z, int team = 0, bool visible = false) {
}

class map {
  public:
    map(int position_marks_x, int position_marks_y, int position_marks_z);
}

map::map(int position_marks_x, int position_marks_y, int position_marks_z) {
}
