#pragma once
#include <iostream>

class Player{
public:

Player();

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
bool alive(bool isAlive){return isAlive;}

// Json
void saveToFile(const std::string& filename) const;
void loadFromFile(const std::string& filename);

private:

    // Player Statistics
    int health;
    int maxHealth;
    int level;
    int coins;
    int damage;
    float speed;

    // Player State
    bool isAlive = true;
};