//Joel Miller
//12/02/2022
//CPSC 1020
//TIGER GAME



#ifndef PLAYER_H_
#define PLAYER_H_

#include <vector>
#include "Card.h"
#include "Deck.h"
#include "Hand.h"
using namespace std;



class Player
{
public:
	Hand inhand;
	int score;

	//connstructors

	Player() = default;
	Player(Deck& deck, int numbers)
	{
		Hand handObject(deck, numbers);
		inhand = handObject;

		score = 0;
	}
};

#endif // PLAYER_H_