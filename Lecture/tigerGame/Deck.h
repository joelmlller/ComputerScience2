//Joel Miller
//12/02/2022
//CPSC 1020
//TIGER GAME





#ifndef DECK_H_
#define DECK_H_

#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

#include "Card.h"

using namespace std;


class Deck {
    vector<Card> deck; //deck vector 

public:
    Deck();//constructor

    void shuffle(); // shuffles the deck
    Card drawCard(); // draws card from deck
    int getDeckSize() const;
};


#endif // DECK_H_