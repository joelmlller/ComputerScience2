//Joel Miller
//12/02/2022
//CPSC 1020
//TIGER GAME


#ifndef HAND_H_
#define HAND_H_

#include <vector>
#include <string>
#include <sstream>

#include "Card.h"
#include "Deck.h"

class Hand {
    std::vector<Card> hand; //creates a vector hand

public:
    //constructors
    Hand() = default;
    Hand(Deck& deck, int N);

    std::string printHand() const;
    Card dealCard(int num);
    int getHandSize() const;
};

#endif // HAND_H_