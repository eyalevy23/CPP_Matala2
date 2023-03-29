#ifndef CARD_HPP
#define CARD_HPP

#include <string>
#include <iostream>

namespace ariel{

    class Card{
        int value;
        int suits;

    public:
        Card(int val, int suits); // Constructor defined
        int highestCard(const Card & card2) const;
    }; // Semicolon added after the class definition

}


#endif