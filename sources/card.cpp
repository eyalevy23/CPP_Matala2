#include "card.hpp"


using namespace std;

namespace ariel{

    // dict int to suits = {
    //     0 : "clubs",
    //     1 : "diamonds",
    //     2 : "spades"
    //     3 : "hearts" ,  
    // }
    Card::Card(int value, int suits){
        // this->value = value;
        // this->type = suits;
    }

    int Card::highestCard(const Card & card2) const
    {
        if (value < card2.value) return 1;
        if (value > card2.value) return -1;
        return 0;
    }

};