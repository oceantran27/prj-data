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

#include "SetMatrixZeroes.hpp"

TEST_CASE("Set Matrix Zeroes") {
    SetMatrixZeroes s;
    SECTION("Sample test") {
        vector<vector<int>> matrix{
                {1, 0, 1, 1},
                {1, 1, 0, 1},
                {1, 3, 1, 0},
                {3, 4, 2, 0}
        };
        vector<vector<int>> expected{
                {0, 0, 0, 0},
                {0, 0, 0, 0},
                {0, 0, 0, 0},
                {0, 0, 0, 0}
        };
        s.setZeroes(matrix);
        REQUIRE(matrix == expected);
    }
}
