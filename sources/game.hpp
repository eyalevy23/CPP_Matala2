#ifndef GAME_HPP
#define GAME_HPP

#include <string>
#include <iostream>
#include "player.hpp"

namespace ariel{

    class Game{
        // Player p1;
        // Player p2;

    public:
        Game(Player p1, Player p2);
        void playTurn();
        void printWiner();
        void printStats();
        void printLog();
        void playAll();
        void printLastTurn();

    };

}

#endif