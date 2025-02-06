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

#include "KthLargestElementInAnArray.hpp"

TEST_CASE("Kth Largest Element in an Array") {
    KthLargestElementInAnArray s;
    SECTION("Sample test") {
        vector<int> nums{3, 2, 1, 5, 6, 4};
        int k = 2;
        REQUIRE(s.findKthLargest(nums, k) == 5);
    }
}
