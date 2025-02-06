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

#include "PascalTriangleII.hpp"

TEST_CASE("Pascal's Triangle II") {
    PascalTriangleII s;
    SECTION("Sample test") {
        vector<int> expected{1, 3, 3, 1};
        REQUIRE(s.getRow(3) == expected);
    }
}
