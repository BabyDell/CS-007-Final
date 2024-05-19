#include "Player.h"

Player::Player() {
  xp = 0;
  health = 0;
  coordinates.first = 0;
  coordinates.second = 0;
  weapon = "Fists";
}

int Player::getXP() { return xp; }
void Player::setXP(int xp) { this->xp = xp; }

int Player::getHealth() { return health; }
void Player::setHealth(int health) { this->health = health; }

int Player::getXCoordinate() { return coordinates.first; }
int Player::getYCoordinate() { return coordinates.second; }

void Player::setCoordinate(char key) {
  switch (key) {
  case 'w':
    if (coordinates.second + 1 < 10)
      coordinates.second++;
    break;
  case 'a':
    if (coordinates.first - 1 >= 0)
      coordinates.first--;
    break;
  case 's':
    if (coordinates.second - 1 >= 0)
      coordinates.second--;
    break;
  case 'd':
    if (coordinates.first + 1 < 10)
      coordinates.first++;
    break;
  }
}

std::string Player::getWeapon() { return weapon; }
void Player::setWeapon(std::string weapon) { this->weapon = weapon; }

void Player::PrintStats() {
  std::cout << "XP: " << xp << std::endl;
  std::cout << "Health: " << health << std::endl;
  std::cout << "Weapon: " << weapon << std::endl;
}