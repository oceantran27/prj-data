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

#include "TwoSumII.hpp"

TEST_CASE("Two Sum II") {
    TwoSumII s;
    SECTION("Sample test") {
        vector<int> numbers{2, 7, 11, 15};
        int target = 9;
        vector<int> ans{1, 2};
        REQUIRE(s.twoSum(numbers, target) == ans);
    }
}