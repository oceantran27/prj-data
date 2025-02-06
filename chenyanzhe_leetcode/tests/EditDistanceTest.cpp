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

#include "EditDistance.hpp"

TEST_CASE("Edit Distance") {
    EditDistance s;
    SECTION("Normal tests") {
        REQUIRE(s.minDistance("test", "fast") == 2);
        REQUIRE(s.minDistance("distance", "distance") == 0);
    }
}
