#pragma once

#include <string>

class Domino {
private:
    int left_;
    int right_;

public:
    Domino();
    Domino(int l, int r);

    int left() const;
    int right() const;

    std::string toString() const;
};
