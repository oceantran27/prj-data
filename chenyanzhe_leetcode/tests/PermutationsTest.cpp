#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "catch.hpp"

#include "Permutations.hpp"

using namespace std;

TEST_CASE("Permutation") {
    Permutations s;
    SECTION("Sample test") {
        vector<int> nums{1, 2, 3};
        vector<vector<int>> expected{
                {1, 2, 3},
                {1, 3, 2},
                {2, 1, 3},
                {2, 3, 1},
                {3, 1, 2},
                {3, 2, 1}
        };
        vector<vector<int>> result = s.permute(nums);
        REQUIRE(result.size() == 6);

        for (int i = 0; i < 6; i++) {
            REQUIRE_FALSE(find(expected.begin(), expected.end(),
                               result[i]) == expected.end());
        }
    }
}
