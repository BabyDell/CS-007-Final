#include <iostream>
#include <utility>

class Player {
public:
  Player();

  int getXP();
  void setXP(int xp);

  int getHealth();
  void setHealth(int health);

  int getXCoordinate();
  int getYCoordinate();
  void setCoordinate(char key);

  std::string getWeapon();
  void setWeapon(std::string weapon);

  void PrintStats();

private:
  int xp;
  int health;
  std::pair<int, int> coordinates;
  std::string weapon;
};