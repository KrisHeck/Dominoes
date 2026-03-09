#include "CPlayer.h"

#include <vector>

#include "CDominoes.h"
#include "Domino.h"

CPlayer::CPlayer(CTable *table) {
    this->table = table;
}

void CPlayer::makeMove() {
    // if (domino in hand can be played)
    //	    place on table and remove domino from hand
    //	    return
    // 
    // while (boneyard not empty)
    //     grab domino from boneyard
    //     if (domino can be played)
    //         play it and remove from hand
    //         return
    // 
    // if reached here, no domino can be played, turn over
}
