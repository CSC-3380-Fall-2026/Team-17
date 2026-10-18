#include <iostream>
#include <player.h>
#include <fstream>
#include <nlohmann/json.hpp>
using json = nlohmann::json;
using namespace std;

Player::Player(): 
maxHealth(100), 
health(maxHealth),
damage(10),
speed(15.0),
level(1),
coins(0)
{};

// Constructing saves, loading player data if save exists
struct Saves{
    string filename;
    bool exists = false;

    // Check if save exists
    json load(){
        ifstream file(filename);
        if(!file.is_open()){
            return json{};
        }
        
    // Save exists, load data
    exists = true;
    json data = json::parse(file);
    return data;
    }
};

// Save data to file
void Player::saveToFile(const string& filename) const{
}

// Load from existing save thats selected
void Player::loadFromFile(const string& filename){
    json save;

    save["maxHealth"];
    save["health"];
    save["coins"];
    save["level"];
    save["damage"];
    save["speed"];
    }