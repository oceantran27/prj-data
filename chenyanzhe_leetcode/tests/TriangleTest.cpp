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

#include "Triangle.hpp"

TEST_CASE("Triangle") {
    Triangle s;
    SECTION("Sample test") {
        vector<vector<int>> triangle{
                {2},
                {3, 4},
                {6, 5, 7},
                {4, 1, 8, 3}
        };
        REQUIRE(s.minimumTotal(triangle) == 11);
    }
}
