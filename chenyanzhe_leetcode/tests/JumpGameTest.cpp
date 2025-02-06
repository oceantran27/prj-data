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

#include "JumpGame.hpp"

TEST_CASE("Jump Game") {
    JumpGame s;
    SECTION("Sample tests") {
        vector<int> nums_1{2, 3, 1, 1, 4};
        REQUIRE(s.canJump(nums_1));
        vector<int> nums_2{3, 2, 1, 0, 4};
        REQUIRE_FALSE(s.canJump(nums_2));
    }
}
