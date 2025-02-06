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

#include "ZigZagConversion.hpp"

TEST_CASE("ZigZag Conversion") {
    ZigZagConversion s;
    SECTION("Sample test") {
        REQUIRE(s.convert("PAYPALISHIRING", 3) == "PAHNAPLSIIGYIR");
    }
    SECTION("Single row") {
        REQUIRE(s.convert("PAYPALISHIRING", 1) == "PAYPALISHIRING");
    }
}
