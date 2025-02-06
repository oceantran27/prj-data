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

#include "GuessNumberHigherOrLowerII.hpp"

TEST_CASE("Guess Number Higher or Lower II") {
    GuessNumberHigherOrLowerII s;
    SECTION("Sample test") {
        REQUIRE(s.getMoneyAmount(1) == 0);
    }
}
