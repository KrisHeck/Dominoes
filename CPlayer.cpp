#include "CPlayer.h"

#include <vector>
#include <iostream>

#include "CTable.h"
#include "CDominoes.h"
#include "Domino.h"

CPlayer::CPlayer(CTable *table) {
    this->table = table;
}

void CPlayer::drawHand() {
    for (int i = 0; i < 10; i++)
	hand.push_back(table->deal());	
}

void CPlayer::makeMove() {
    std::cerr << "Player making move" << std::endl;

    Domino left = table->getLeftTrain();
    int left_value = left.left();
    Domino right = table->getRightTrain();
    int right_value = right.right();

    bool canPlay = false;
    bool noMoves = false;

    Domino dominoToPlay;
    bool playLeft = true;

    while (!canPlay && !noMoves) {
	for (int i = 0; i < hand.size(); i++) {
	    if (hand[i].left() == left.left()) {
		canPlay = true;
		dominoToPlay = hand[i];
		dominoToPlay.flip();
		hand.erase(hand.begin() + i);
	    }
	    else if (hand[i].right() == left.left()) {
		canPlay = true;
		dominoToPlay = hand[i];
		hand.erase(hand.begin() + i);
	    }
	    else if (hand[i].left() == right.right()) {
		canPlay = true;
		dominoToPlay = hand[i];
		hand.erase(hand.begin() + i);
		playLeft = false;
	    }
	    else if (hand[i].right() == right.right()) {
		canPlay = true;
		dominoToPlay = hand[i];
		dominoToPlay.flip();
		hand.erase(hand.begin() + i);
		playLeft = false;
	    }
	}

	if (!canPlay) {
	    if (!table->isBoneyardEmpty())
		hand.push_back(table->deal());
	    else
		noMoves = true;
	}
    }

    if (canPlay) {
	std::cerr << "Playing piece: " << dominoToPlay.toString() << std::endl;
	if (playLeft)
	    table->placeLeft(dominoToPlay);
	else
	    table->placeRight(dominoToPlay);
    }
    else {
	std::cerr << "Cannot play piece" << std::endl;
    }
}
