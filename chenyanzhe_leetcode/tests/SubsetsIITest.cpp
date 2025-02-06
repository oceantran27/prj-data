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

#include "SubsetsII.hpp"

TEST_CASE("Subsets II") {
    SubsetsII s;
    SECTION("Sample tests") {
        vector<int> nums{1, 2, 2};
        vector<vector<int>> expected{{2},
                                     {1},
                                     {1, 2, 2},
                                     {2, 2},
                                     {1, 2},
                                     {}};
        vector<vector<int>> result = s.subsetsWithDup(nums);
        REQUIRE(result.size() == expected.size());

        for (int i = 0; i < result.size(); i++) {
            REQUIRE_FALSE(find(expected.begin(), expected.end(),
                               result[i]) == expected.end());
        }
    }
}
