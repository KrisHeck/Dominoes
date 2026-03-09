#include "CTable.h"

#include <vector>

#include "CDominoes.h"
#include "domino.h"

CTable::CTable() {
    gameOver = false;
    dealer = new CDominoes(/* params? */);
}

CTable::~CTable() {
    delete dealer;
}

bool CTable::isGameOver() {
    return gameOver;
}

Domino CTable::getLeftTrain() {
    return train.front();
}

Domino CTable::getRightTrain() {
    return train.back();
}

bool CTable::isBoneyardEmpty() {
    return dealer.boneyardSize() != 0;
}

Domino CTable::deal() {
    return dealer.draw();
}

void CTable::placeLeft(Domino d) {
    train.insert(0, d);
}

void CTable::placeRight(Domino d) {
    train.push_back(d);
}

void CTable::setGameOver(bool status) {
    gameOver = status;
}
