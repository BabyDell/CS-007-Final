#include "Map.h"
#include "../../RandomRoom.h"


void SetMap();

void newMap(std::pair<int, int> playerCoordinates, 
    std::pair<int, int> coordMonster1,
    std::pair<int, int> coordMonster2,
    std::pair<int, int> coordMonster3, 
    std::pair<int, int> ladderCoordinates);

void updatePlayer(std::pair<int, int> playerCoordinates);
void updateMon1(std::pair<int, int> coordMonster1);
void updateMon2(std::pair<int, int> coordMonster2);
void updateMon3(std::pair<int, int> coordMonster3);
void updateLadder(std::pair<int, int> ladderCoordinates);

void PrintMap();