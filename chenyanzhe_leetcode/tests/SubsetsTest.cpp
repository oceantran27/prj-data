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

#include "Subsets.hpp"

TEST_CASE("Subsets") {
    Subsets s;
    SECTION("Sample test") {
        vector<int> nums{1, 2, 3};
        vector<vector<int>> expected{
                {3},
                {1},
                {2},
                {1, 2, 3},
                {1, 3},
                {2, 3},
                {1, 2},
                {}
        };
        vector<vector<int>> results = s.subsets(nums);
        REQUIRE(results.size() == expected.size());

        for (auto sub : expected)
            REQUIRE_FALSE(find(results.begin(), results.end(), sub) == results.end());
    }
}
