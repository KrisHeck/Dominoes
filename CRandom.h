#pragma once

#include <algorithm>
#include <random>
#include <vector>

class CRandom {
protected:
    std::mt19937 rng;

public:
    CRandom();

    // Shuffle a vector in-place
    template <typename T>
    void shuffleVec(std::vector<T>& v) {
        std::shuffle(v.begin(), v.end(), rng);
    }

    // Random int in [lo, hi]
    int randInt(int lo, int hi);
};
