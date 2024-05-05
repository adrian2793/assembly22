// Source
// * https://docs.google.com/spreadsheets/d/11tDzUNBq9zIX6_9Rel__fdAUezAQzSnh5AVYzCP060c/
// * https://www.csweapons.com/

// System

#include "memory.h"

// Weapons

weapon desert_eagle(6.2, 7, 42, 48.2, 18, 60);
weapon r8_revolver(2.5, 8, 75, 20, 0, 40);
weapon dual_berettas(9, 30, 17, 27, 4, 20);
weapon five_seven(11.1, 20, 23, 25, 4, 5);
weapon glock_18(7.6, 20, 12, 18, 0, 20);

weapon weapons[5] = {
  desert_eagle,
  r8_revolver,
  dual_berettas,
  five_seven,
  glock_18
};

// Players

player player1(0, 0, 0, 0, false);
player player2(0, 0, 0, 0, false);
player player3(0, 0, 0, 0, false);
player player4(0, 0, 0, 0, false);
player player5(0, 0, 0, 0, false);

player player6(0, 0, 0, 1, false);
player player7(0, 0, 0, 1, false);
player player8(0, 0, 0, 1, false);
player player9(0, 0, 0, 1, false);
player player10(0, 0, 0, 1, false);
  
player players[10] = {
  player1,
  player2,
  player3,
  player4,
  player5,
  player6,
  player7,
  player8,
  player9,
  player10
};

// Maps
