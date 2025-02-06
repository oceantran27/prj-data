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

#include "IntersectionOfTwoArrays.hpp"

TEST_CASE("Intersection of Two Arrays") {
    IntersectionOfTwoArrays s;
    SECTION("Sample test") {
        vector<int> nums1{1, 2, 2, 1};
        vector<int> nums2{2, 2};
        vector<int> expected{2};
        REQUIRE(s.intersection(nums1, nums2) == expected);
    }
}

