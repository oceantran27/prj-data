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

#include "GrayCode.hpp"

TEST_CASE("Gray Code") {
    GrayCode s;
    SECTION("Sample test") {
        vector<int> expected{0, 1, 3, 2};
        REQUIRE(s.grayCode(2) == expected);
    }
}
