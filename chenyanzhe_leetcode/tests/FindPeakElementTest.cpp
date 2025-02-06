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

#include "FindPeakElement.hpp"

TEST_CASE("Find Peak Element") {
    FindPeakElement s;
    SECTION("Sample test") {
        vector<int> nums{1, 2, 3, 1};
        REQUIRE(s.findPeakElement(nums) == 2);
    }
}
