#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
int obliczMake(const std::vector<Tagliatelle> v) {
    int M = 0;
    for (int i = v.size() - 1; i >= 0; i--) {
        M += v[i].ileMaki(v.size() - i);
    }
    if (M > 100) {
        throw 123;
    }
    else if (M > 50) {
        throw 123.0;
    }
    else {
        return M;
    }
}