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

#include "PaintHouse.hpp"

TEST_CASE("Paint House") {
    PaintHouse s;
    SECTION("Sample test") {
        vector<vector<int>> costs{{1, 2, 3},
                                  {4, 5, 6}};
        REQUIRE(s.minCost(costs) == 6);
    }
}
