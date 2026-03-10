#pragma once

#include "Domino.h"

#include <string>
#include <vector>

class CDominoes {
private:
    std::vector<Domino> boneyard;  // remaining available pieces after dealing

public:
    void create_dominoes();

    std::vector<Domino>& pieces();
    const std::vector<Domino>& pieces() const;

    void setBoneyard(std::vector<Domino> by);

    bool canDraw() const;

    Domino draw();

    int boneyardSize() const;

    std::string boneyardString() const;
};
