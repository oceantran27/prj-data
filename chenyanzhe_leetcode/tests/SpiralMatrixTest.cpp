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

#include "SpiralMatrix.hpp"

TEST_CASE("Spiral Matrix") {
    SpiralMatrix s;
    SECTION("Sample test") {
        vector<vector<int>> matrix{
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}
        };
        vector<int> expected{1, 2, 3, 6, 9, 8, 7, 4, 5};
        REQUIRE(s.spiralOrder(matrix) == expected);
    }
}
