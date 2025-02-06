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

#include "SearchA2DMatrix.hpp"

TEST_CASE("Search A 2D Matrix") {
    SearchA2DMatrix s;
    SECTION("Sample tests") {
        vector<vector<int>> matrix{
                {1,  3,  5,  7},
                {10, 11, 16, 20},
                {23, 30, 34, 50}
        };
        REQUIRE(s.searchMatrix(matrix, 3));
    }
}
