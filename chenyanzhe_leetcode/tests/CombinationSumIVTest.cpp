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

#include "CombinationSumIV.hpp"

TEST_CASE("Combination Sum IV") {
    CombinationSumIV s;
    SECTION("Sample tests") {
        vector<int> nums{1, 2, 3};
        int target = 4;
        REQUIRE(s.combinationSum4(nums, target) == 7);
    }
}
