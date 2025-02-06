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

#include "MoveZeroes.hpp"

TEST_CASE("Move Zeroes") {
    MoveZeroes s;
    SECTION("Sample test") {
        vector<int> nums{0, 1, 0, 3, 12};
        vector<int> expected{1, 3, 12, 0, 0};
        s.moveZeroes(nums);
        REQUIRE(nums == expected);
    }
}
