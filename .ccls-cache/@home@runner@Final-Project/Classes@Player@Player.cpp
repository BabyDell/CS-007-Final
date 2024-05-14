#include "Player.h"


Player::Player() {
  xp = 0;
  health = 0;
  xCoordinate = 0;
  yCoordinate = 0;
  weapon = "Fists";
}

int Player::getXP() {
  return xp;
}
void Player::setXP(int xp) {
  this->xp = xp;
}

int Player::getHealth() {
  return health;
}
void Player::setHealth(int health) {
  this->health = health;
}

int Player::getYCoordinate() {
  return yCoordinate;
}
void Player::setYCoordinate(int yCoordinate) {
  this->yCoordinate = yCoordinate;
}

int Player::getXCoordinate() {
  return xCoordinate;
}
void Player::setXCoordinate(int xCoordinate) {
  this->xCoordinate = xCoordinate;
}

std::string Player::getWeapon() {
  return weapon;
}
void Player::setWeapon(std::string weapon) {
  this->weapon = weapon;
}

void Player::MoveY(int moveBy) {
  if (yCoordinate + moveBy >= 10 || yCoordinate + moveBy < 0) {
    return;
  }
  else {
    yCoordinate += moveBy;
    //when updated change update player position in map
  }
}

void Player::MoveX(int moveBy) {
  if (xCoordinate + moveBy >= 10 || xCoordinate + moveBy < 0) {
    return;
  }
  else {
    xCoordinate += moveBy;
    //when updated change update player position in map
  }
}

void Player::PrintStats() {
  std::cout << "XP: " << xp << std::endl;
  std::cout << "Health: " << health << std::endl;
  std::cout << "Weapon: " << weapon << std:: endl;
}