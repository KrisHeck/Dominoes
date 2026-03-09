#pragma once

#include <vector>

class CTable {
private:
    std::vector<domino> train;
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
