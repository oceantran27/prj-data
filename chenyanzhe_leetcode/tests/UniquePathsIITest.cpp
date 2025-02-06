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

#include "UniquePathsII.hpp"

TEST_CASE("Unique Paths II") {
    UniquePathsII s;
    SECTION("Sample tests") {
        vector<vector<int>> obstacle{
                {0, 0, 0},
                {0, 1, 0},
                {0, 0, 0}
        };
        REQUIRE(s.uniquePathsWithObstacles(obstacle) == 2);
    }
    SECTION("One row") {
        vector<vector<int>> obstacle{{1, 0}};
        REQUIRE(s.uniquePathsWithObstacles(obstacle) == 0);
    }
}
