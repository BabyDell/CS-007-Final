#include "Map.h"
// #include "../../RandomRoom.h"

Map::Map() {
  vector<vector<char>> copyMap(10, vector<char>(10));
  srand((unsigned)time(NULL));

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      copyMap[i][j] = 'O';
    }
  }
  map = copyMap;
}

char Map::GetPosition(std::pair<int, int> coordinate) {
  return map[coordinate.first][coordinate.second];
}

void Map::SetCoordinate(std::pair<int, int> coordinate) {}

void Map::PrintMap() {
  for (auto innerArray : map) {
    for (char output : innerArray) {
      cout << output << " ";
    }
    cout << endl;
  }
}
