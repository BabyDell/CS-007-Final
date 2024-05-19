#include "./Classes/Map/Map.h"
#include "./Classes/Player/Player.h"
#include "./RandomRoom.h"
#include <iostream>
#include <limits>

int main() {

  Map gameMap;
  Player gamePlayer;

  cout << "Hello welcome to Andy's Dungeon. It will contain \n"
          "10 floors of monsters, getting more diffucult as you \n"
          "advance Your movement keys will be W, A, S, D. Your \n"
          "objective isto defeat all monsters on each floor to \n"
          "be able to advance. When you reach the top you will \n"
          "be greeted with the Final Boss. Are you ready? \n"
          "Press any key to start"
       << endl;
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  cout << "\033c";
  cout << "hello" << endl;
}