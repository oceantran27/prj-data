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

#include "Numberof1Bits.hpp"

TEST_CASE("Number of 1 Bits") {
    Numberof1Bits s;
    SECTION("Sample test") {
        REQUIRE(s.hammingWeight(11) == 3);
    }
}
