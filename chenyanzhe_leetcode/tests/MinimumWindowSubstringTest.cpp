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

#include "MinimumWindowSubstring.hpp"

TEST_CASE("Minimum Window Substring") {
    MinimumWindowSubstring s;
    SECTION("Sample test") {
        REQUIRE(s.minWindow("ADOBECODEBANC", "ABC") == "BANC");
    }
    SECTION("Corner cases") {
        REQUIRE(s.minWindow("ADOBECODEBANC", "") == "");
        REQUIRE(s.minWindow("ADOBECODEBANC", "ADOBECODEBANC") == "ADOBECODEBANC");
    }
    SECTION("Not found cases") {
        REQUIRE(s.minWindow("ADOBECODEBANC", "ADEG") == "");
        REQUIRE(s.minWindow("ADOBECODEBANC", "ADCCC") == "");
    }
}
