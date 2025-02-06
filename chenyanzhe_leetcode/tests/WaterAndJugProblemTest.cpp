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

#include "WaterAndJugProblem.hpp"

TEST_CASE("Water and Jug Problem") {
    WaterAndJugProblem s;
    SECTION("Sample tests") {
        REQUIRE(s.canMeasureWater(3, 5, 4));
        REQUIRE_FALSE(s.canMeasureWater(2, 6, 5));
    }
}
