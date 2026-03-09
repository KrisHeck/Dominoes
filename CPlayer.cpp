#include "CPlayer.h"

#include <vector>

#include "CTable.h"
#include "CDominoes.h"
#include "Domino.h"

CPlayer::CPlayer(CTable *table) {
    this->table = table;
}

void CPlayer::makeMove() {
    Domino left = table.getLeftTrain();
    int left_value = left.left();
    Domino right = table.getRightTrain();
    int right_value = right.right();

    bool canPlay = false;
    bool noMoves = false;

    Domino dominoToPlay;
    bool playLeft = true;

    while (canPlay == false && noMoves == false) {
	for (int i = 0; i < hand.size(); i++) {
	    if (hand[i].left() == left.left()) {
		canPlay = true;
		dominoToPlay = hand[i];
		dominoToPlay.flip();
		hand.erase(i);
	    }
	    else if (hand[i].right() == left.left()) {
		canPlay = true;
		dominoToPlay = hand[i];
		hand.erase(i);
	    }
	    else if (hand[i].left() == right.right()) {
		canPlay = true;
		dominoToPlay = hand[i];
		hand.erase(i);
		playLeft = false;
	    }
	    else if (hand[i].right() == right.right()) {
		canPlay = true;
		dominoToPlay = hand[i];
		dominoToPlay.flip();
		hand.erase(i);
		playLeft = false;
	    }
	}

	if (!canPlay) {
	    // draw from boneyard
	    // if boneyard empty, set noMoves to true
	}
    }

    if (canPlay) {
	if (dominoToPlayLeft)
	    table.placeLeft(dominoToPlay)
	else
	    table.placeRight(dominoToPlay)
    }
}
