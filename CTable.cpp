#include "CTable.h"

#include <vector>
#include <iostream>

#include "CDominoes.h"
#include "Domino.h"

CTable::CTable() {
    gameOver = false;
    dealer = new CDominoes();
    dealer->create_dominoes();

    std::cerr << dealer->boneyardString() << std::endl;

    // Put starting domino onto train
    train.clear();
    train.push_back(dealer->draw());
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
    return dealer->boneyardSize() != 0;
}

Domino CTable::deal() {
    return dealer->draw();
}

void CTable::placeLeft(Domino d) {
    train.insert(train.begin() + 0, d);
}

void CTable::placeRight(Domino d) {
    train.push_back(d);
}

void CTable::setGameOver(bool status) {
    gameOver = status;
}
