#ifndef ENEMY_H
#define ENEMY_H

class Enemy{
public:

// Getters
int getHealth(){return health;}
int getMaxHealth(){return maxHealth;}
int getDamage(){return damage;}

// If enemy is dead/alive, set parameter to false/true
void setAlive(bool alive){isAlive = alive;}

// Setters
int setHealth(){health = maxHealth;}

// Other
bool alive(){return isAlive;}


private:

// Attributes
int health;
int maxHealth;
int damage;
int speed;
bool isAlive = true;

};
#endif