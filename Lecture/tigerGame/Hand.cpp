//Joel Miller
//12/02/2022
//CPSC 1020
//TIGER GAME




#include "Hand.h"

// constructor
Hand::Hand(Deck& deck, int number) {
    for (int i = 0; i < number; ++i) {
        hand.push_back(deck.drawCard());
    }
}

// returns hand size
int Hand::getHandSize() const {
    return hand.size();
}

// erases the beginning of hand and returns card
Card Hand::dealCard(int num) {

    Card card = hand[num];

    hand.erase(hand.begin() + num);

    return card;
}

// prints the cards in hand
std::string Hand::printHand() const {

    std::stringstream ss;

    for (int i = 0; i < static_cast<int>(hand.size()); ++i) {

        ss << "[" << i + 1 << "] " << hand[i].printCard() << " ";
    }
    return ss.str();
}