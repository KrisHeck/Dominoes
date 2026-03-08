#include "Domino.h"

#include <sstream>

Domino::Domino() : left_(0), right_(0) {}

Domino::Domino(int l, int r) : left_(l), right_(r) {}

int Domino::left() const { return left_; }

int Domino::right() const { return right_; }

std::string Domino::toString() const {
    std::ostringstream os;
    os << "[" << left_ << "|" << right_ << "]";
    return os.str();
}
