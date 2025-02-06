#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "catch.hpp"

#include "GuessNumberHigherOrLower.hpp"

TEST_CASE("Guess Number Higher or Lower") {
    const int n = 10;
    const int pick = 6;
    auto guess = [](int g) {
        if (pick < g) return -1;
        if (pick > g) return 1;
        return 0;
    };
    GuessNumberHigherOrLower s(guess);
    SECTION("Sample test") {
        REQUIRE(s.guessNumber(n) == pick);
    }
}
