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

#include "EliminationGame.hpp"

TEST_CASE("Elimination Game") {
    EliminationGame s;
    SECTION("Sample test") {
        REQUIRE(s.lastRemaining(9) == 6);
    }
}