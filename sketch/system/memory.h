// System

// Weapon

class weapon {
  public:
    weapon(float inaccuracy, float ammunition, float damage, float recoil_amount, float recoil_variance, float recoil_angle_variance);
    float _inaccuracy;
    float _ammunition;
    float _damage;
    float _recoil_amount;
    float _recoil_variance;
    float _recoil_angle_variance;
};

weapon::weapon(float inaccuracy, float ammunition, float damage, float recoil_amount, float recoil_variance, float recoil_angle_variance) {
  _inaccuracy = inaccuracy;
  _ammunition = ammunition;
  _damage = damage;
  _recoil_amount = recoil_amount;
  _recoil_variance = recoil_variance;
  _recoil_angle_variance = recoil_angle_variance;
}

// Player

class player {
  public:
    player(float position_x, float position_y, float position_z, int team, bool visible);
    float _position_x;
    float _position_y;
    float _position_z;
    int _team;
    bool _visible;
};

player::player(float position_x, float position_y, float position_z, int team, bool visible) {
  _position_x = position_x;
  _position_y = position_y;
  _position_z = position_z;
  _team = team;
  _visible = visible;
}

// Map

class map {
  public:
    map(float position_marks_x, float position_marks_y, float position_marks_z);
    float _position_marks_x;
    float _position_marks_y;
    float _position_marks_z;
};

map::map(float position_marks_x, float position_marks_y, float position_marks_z) {
  _position_marks_x = position_marks_x;
  _position_marks_y = position_marks_y;
  _position_marks_z = position_marks_z;
}
