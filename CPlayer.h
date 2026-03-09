#pragma once

#include <vector>

#include "CDominoes.h"
#include "Domino.h"

class CPlayer {
private:
    CTable *table;
    std::vector<Domino> hand;

public:
    CPlayer(CTable *table);

    void makeMove();
};
