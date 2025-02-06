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

#include "DistinctSubsequences.hpp"

TEST_CASE("Distinct Subsequences") {
    DistinctSubsequences s;
    SECTION("Sample tests") {
        REQUIRE(s.numDistinct("rabbbit", "rabbit") == 3);
        REQUIRE(s.numDistinct("aabb", "ab") == 4);
    }
}
