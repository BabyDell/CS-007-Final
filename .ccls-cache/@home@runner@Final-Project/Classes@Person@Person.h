#include <iostream>

class Player {
     public:
        Player();

        int getXP();
        void setXP(int xp);

        int getHealth();
        void setHealth(int health);

        int getYCoordinate();
        void setYCoordinate(int yCoordinate);

        int getXCoordinate();
        void setXCoordinate(int xCoordinate);

        std::string getWeapon();
        void setWeapon(std::string weapon);

        void PrintStats();

    private: 
        int xp;
        int health;
        int yCoordinate;
        int xCoordinate;
        std::string weapon; 



};