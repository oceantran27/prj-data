#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "catch.hpp"

#include "SpiralMatrixII.hpp"

using namespace std;

TEST_CASE("Spiral Matrix II") {
    SpiralMatrixII s;
    SECTION("Sample test") {
        vector<vector<int>> expected{
                {1, 2, 3},
                {8, 9, 4},
                {7, 6, 5}
        };
        REQUIRE(s.generateMatrix(3) == expected);
    }
}
