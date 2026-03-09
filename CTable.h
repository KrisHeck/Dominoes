#pragma once

#include <vector>

#include "Domino.h"
#include "CDominoes.h"

class CTable {
private:
    std::vector<Domino> train;
    CDominoes *dealer;
    bool gameOver;

public:
    CTable();
    ~CTable();

    bool isGameOver();
    Domino getLeftTrain();
    Domino getRightTrain();

    bool isBoneyardEmpty();
    Domino deal();

    void placeLeft(Domino d);
    void placeRight(Domino d);

    void setGameOver(bool status);
};
