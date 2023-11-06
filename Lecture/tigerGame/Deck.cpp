//Joel Miller
//12/02/2022
//CPSC 1020
//TIGER GAME



#include "Deck.h"
using namespace std;


//deck constructor
Deck::Deck() {
    for (int i = 1; i <= 10; i++) {

        deck.push_back(Card(i, Card::purple));

        deck.push_back(Card(i, Card::orange));
    }
}

//getter
int Deck::getDeckSize() const {
    return deck.size();
}


//draw card function
Card Deck::drawCard() {
    Card card = deck.back();
    deck.pop_back();
    return card;
}
//shuffle function which shuffles the deck
void Deck::shuffle() {

    srand(std::time(0));

    random_shuffle(deck.begin(), deck.end());
}

