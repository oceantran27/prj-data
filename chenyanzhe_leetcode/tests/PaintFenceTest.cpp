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

#include "PaintFence.hpp"

TEST_CASE("Paint Fence") {
    PaintFence s;
    SECTION("Sample tests") {
        REQUIRE(s.numWays(1, 1) == 1);
        REQUIRE(s.numWays(2, 1) == 1);
        REQUIRE(s.numWays(3, 1) == 0);
        REQUIRE(s.numWays(2, 2) == 4);
        REQUIRE(s.numWays(3, 2) == 6);
        REQUIRE(s.numWays(4, 2) == 10);
    }
}
