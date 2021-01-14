#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>

// tutaj funkcja sortujTagliatelle
template<typename T>
void sortujTagliatelle(T begin, T end) {
    return std::sort(begin, end, [](const Tagliatelle& left, const Tagliatelle& right) {
        return left.ileMaki(1) > right.ileMaki(1);
    });
}