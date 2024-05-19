#include <iostream>
#include <utility>
#include <vector>
using namespace std;

class Map {

public:
  Map();

  void newMap(std::pair<int, int> playerCoordinates,
              std::pair<int, int> coordMonster1,
              std::pair<int, int> coordMonster2,
              std::pair<int, int> coordMonster3,
              std::pair<int, int> ladderCoordinates);

  char GetPosition(std::pair<int, int> coordinate);
  void SetCoordinate(std::pair<int, int> coordinate);

  void PrintMap();

private:
  std::pair<int, int> coordMonster1;
  std::pair<int, int> coordMonster2;
  std::pair<int, int> coordMosnter3;

  std::pair<int, int> ladderCoordinates;

  std::pair<int, int> playerCoordinates;

  vector<vector<char>> map;
};