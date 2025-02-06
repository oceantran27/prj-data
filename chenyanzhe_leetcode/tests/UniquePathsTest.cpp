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

#include "UniquePaths.hpp"

TEST_CASE("Unique Paths") {
    UniquePaths s;
    SECTION("Normal tests") {
        REQUIRE(s.uniquePaths(1, 1) == 1);
        REQUIRE(s.uniquePaths(2, 2) == 2);
    }
}
