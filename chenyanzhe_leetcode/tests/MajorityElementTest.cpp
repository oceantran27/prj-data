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

#include "MajorityElement.hpp"

TEST_CASE("Majority Element") {
    MajorityElement s;
    SECTION("Sample test") {
        vector<int> nums{1, 0, 1, 0, 0, 0};
        REQUIRE(s.majorityElement(nums) == 0);
    }
}
