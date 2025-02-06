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

#include "PerfectSquares.hpp"

TEST_CASE("Perfect Squares") {
    PerfectSquares s;
    SECTION("Sample test") {
        REQUIRE(s.numSquares(12) == 3);
        REQUIRE(s.numSquares(13) == 2);
    }
}
