#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include <vector>
#include <iostream>
#include "card.hpp"
using namespace std;

namespace ariel{

    class Player{
        string name;    
        vector<Card> cards;

    public:
        Player(string name, vector<Card> cards);
        int stacksize();
        int cardesTaken();
    };

}


#endif