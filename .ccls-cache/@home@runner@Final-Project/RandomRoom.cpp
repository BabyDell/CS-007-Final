#include <iostream> 
#include <vector>
#include <cstdlib>
using namespace std;

vector<vector<char>> RandomRoom() {
    vector<vector<char>> returnVector( 10 , vector<char> (10));
    srand((unsigned) time(NULL));

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            returnVector[i][j] = 'O';
        }
    }

    for (int i = 0; i < 3; i++) {
        //TODO: need to make sure the monsters are not one tile from player
        int randomX = rand() % 10;
        int randomY = rand() % 10;
        returnVector[randomX][randomY] = 'X';
    }

    return returnVector;
}