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

#include "DungeonGame.hpp"

TEST_CASE("Dungeon Game") {
    DungeonGame s;
    SECTION("Sample test") {
        vector<vector<int>> dungeon{
                {-2, -3,  3},
                {-5, -10, 1},
                {10, 30,  -5}
        };
        REQUIRE(s.calculateMinimumHP(dungeon) == 7);
    }
}
