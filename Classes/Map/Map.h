#include <iostream>
#include <utility>
#include <vector>
using namespace std;

class Map {

public:
  Map();

  char GetPosition(std::pair<int, int> coordinate);
  void SetCoordinate(std::pair<int, int> coordinate);

  void PrintMap();

private:
  vector<vector<char>> map;
};