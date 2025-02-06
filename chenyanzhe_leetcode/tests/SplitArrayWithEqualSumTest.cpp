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

#include "SplitArrayWithEqualSum.hpp"

TEST_CASE("Split Array With Equal Sum") {
    SplitArrayWithEqualSum s;
    SECTION("Sample tests") {
        vector<int> nums1{1, 2, 1, 2, 1, 2, 1};
        REQUIRE(s.splitArray(nums1));

        vector<int> nums2{1, 2, -1, 1, 2, 5, 2, 5, 2};
        REQUIRE(s.splitArray(nums2));
    }
}
