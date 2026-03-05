#include "CRandom.h"

#include <chrono>

CRandom::CRandom() {
    auto seed = static_cast<unsigned>(std::chrono::high_resolution_clock::now().time_since_epoch().count());
    rng.seed(seed);
}

int CRandom::randInt(int lo, int hi) {
    std::uniform_int_distribution<int> dist(lo, hi);
    return dist(rng);
}
