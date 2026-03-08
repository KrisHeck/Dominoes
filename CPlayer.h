#pragma once

#include <vector>

#include "CDominoes.h"
#include "Domino.h"

class CPlayer {
private:
    CDominoes *dealer;
    CTable *table;
    std::vector<Domino> hand;

public:
    CPlayer(CDominoes *dealer, CTable *table);

    void giveDomino(Domino d);
    void makeMove();
};
