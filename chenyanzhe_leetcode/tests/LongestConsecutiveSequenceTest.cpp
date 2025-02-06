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

#include "LongestConsecutiveSequence.hpp"

TEST_CASE("Longest Consecutive Sequence") {
    LongestConsecutiveSequence s;
    SECTION("Sample test") {
        vector<int> nums{100, 4, 200, 1, 3, 2};
        REQUIRE(s.longestConsecutive(nums) == 4);
    }
}
