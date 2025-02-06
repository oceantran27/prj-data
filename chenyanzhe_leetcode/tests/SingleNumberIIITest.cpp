#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "catch.hpp"

#include "SingleNumberIII.hpp"

using namespace std;

TEST_CASE("Single Number III") {
    SingleNumberIII s;
    SECTION("Sample test") {
        vector<int> nums{1, 2, 1, 3, 2, 5};
        vector<int> expected{3, 5};
        vector<int> result = s.singleNumber(nums);
        REQUIRE(result.size() == expected.size());

        for (int i = 0; i < result.size(); i++) {
            REQUIRE_FALSE(find(expected.begin(), expected.end(),
                               result[i]) == expected.end());
        }
    }
}
