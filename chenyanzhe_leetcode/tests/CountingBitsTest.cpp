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

#include "CountingBits.hpp"

TEST_CASE("Counting Bits") {
    CountingBits s;
    SECTION("Sample test") {
        vector<int> expected{0, 1, 1, 2, 1, 2};
        vector<int> result = s.countBits(5);
        REQUIRE(result == expected);
    }
}
