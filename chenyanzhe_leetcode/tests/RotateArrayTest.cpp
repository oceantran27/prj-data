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

#include "RotateArray.hpp"

TEST_CASE("Rotate Array") {
    RotateArray s;
    SECTION("Sample test") {
        vector<int> nums{1, 2, 3, 4, 5, 6, 7};
        vector<int> expected{5, 6, 7, 1, 2, 3, 4};
        s.rotate(nums, 3);
        REQUIRE(nums == expected);
    }
}
