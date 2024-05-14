#include "./RandomRoom.h"
#include "./Classes/Player/Player.h"
#include "./Classes/Map/Map.h"
#include <iostream>
using namespace std;



int main()
{
    
    vector<vector<char>> map = RandomRoom();

  for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
          cout << map[i][j] << " ";
        }
    cout << endl;
  }

  Player player;

  
    
    
}