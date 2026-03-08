#include "CDominoes.h"

#include <sstream>
#include <utility>

// (Domino implementation is now in Domino.cpp)

void CDominoes::create_dominoes() {
    all.clear();
    boneyard.clear();

    // Double-six set: (0..6) => 28 unique tiles with i<=j
    for (int i = 0; i <= 6; i++) {
        for (int j = i; j <= 6; j++) {
            all.emplace_back(i, j);
        }
    }
}

std::vector<Domino>& CDominoes::pieces() { return all; }

const std::vector<Domino>& CDominoes::pieces() const { return all; }

void CDominoes::setBoneyard(std::vector<Domino> by) { boneyard = std::move(by); }

bool CDominoes::canDraw() const { return !boneyard.empty(); }

Domino CDominoes::draw() {
    Domino d = boneyard.back();
    boneyard.pop_back();
    return d;
}

int CDominoes::boneyardSize() const { return static_cast<int>(boneyard.size()); }

std::string CDominoes::boneyardString() const {
    std::ostringstream os;
    os << "Boneyard(" << boneyardSize() << "): ";
    for (const auto& d : boneyard) os << d.toString() << " ";
    return os.str();
}
