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

#include "FindTheDuplicateNumber.hpp"

TEST_CASE("Find the Duplicate Number") {
    FindTheDuplicateNumber s;
    SECTION("Sample test") {
        vector<int> nums{3, 1, 2, 3};
        REQUIRE(s.findDuplicate(nums) == 3);
    }
}
