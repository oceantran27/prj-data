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

#include "ProductOfArrayExceptSelf.hpp"

TEST_CASE("Product of Array Except Self") {
    ProductOfArrayExceptSelf s;
    SECTION("Sample test") {
        vector<int> nums{0, 4, 0};
        vector<int> expected{0, 0, 0};
        REQUIRE(s.productExceptSelf(nums) == expected);
    }
}
