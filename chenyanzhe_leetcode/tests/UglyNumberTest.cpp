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

#include "UglyNumber.hpp"

TEST_CASE("Ugly Number") {
    UglyNumber s;
    SECTION("Sample test") {
        REQUIRE(s.isUgly(6));
        REQUIRE(s.isUgly(8));
        REQUIRE_FALSE(s.isUgly(14));
    }
}
