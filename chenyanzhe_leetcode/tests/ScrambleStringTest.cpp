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

#include "ScrambleString.hpp"

TEST_CASE("Scramble String") {
    ScrambleString s;
    SECTION("Sample tests") {
        REQUIRE(s.isScramble("great", "rgeat") == true);
        REQUIRE(s.isScramble("great", "rgtae") == true);
    }
    SECTION("Three characters tests") {
        REQUIRE(s.isScramble("eat", "eat") == true);
        REQUIRE(s.isScramble("eat", "eta") == true);
        REQUIRE(s.isScramble("eat", "tae") == true);
    }
}
