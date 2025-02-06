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

#include "FindMinimumInRotatedSortedArrayII.hpp"

TEST_CASE("Find Minimum in Rotated Sorted Array II") {
    FindMinimumInRotatedSortedArrayII s;
    SECTION("Sample test") {
        vector<int> nums{4, 6, 6, 7, 0, 1, 2};
        REQUIRE(s.findMin(nums) == 0);
    }
}
