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

#include "BurstBalloons.hpp"

TEST_CASE("Burst Balloons") {
    BurstBalloons s;
    SECTION("Sample test") {
        vector<int> nums{3, 1, 5, 8};
        REQUIRE(s.maxCoins(nums) == 167);
    }
}
