#include <iostream>

class Player{
public:

// Getters
int getHealth(){return health;}
int getMaxHealth(){return maxHealth;}
int getLevel(){return level;}
int getCoins(){return coins;}
int getDamage(){return damage;}

// Setters
void setHealth(int setHealth){health = setHealth;}
void setCoins(int setCoins){coins = setCoins;}
void levelup(){level++;}

// Other methods
int addCoins(int amount){return coins += amount;}
private:

    // Player Statistics
    int health;
    int maxHealth;
    int level;
    int coins;
    int damage;
    float speed;

    // Player State
    bool isAlive;

};
