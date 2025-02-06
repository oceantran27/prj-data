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

#include "PaintHouseII.hpp"

TEST_CASE("Paint House II") {
    PaintHouseII s;
    SECTION("Sample test") {
        vector<vector<int>> costs{{1, 2, 3},
                                  {4, 5, 6}};
        REQUIRE(s.minCostII(costs) == 6);
    }
}
