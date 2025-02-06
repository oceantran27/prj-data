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

#include "BullsAndCows.hpp"

TEST_CASE("Bulls and Cows") {
    BullsAndCows s;
    SECTION("Sample test") {
        REQUIRE(s.getHint("1807", "7810") == "1A3B");
        REQUIRE(s.getHint("1123", "0111") == "1A1B");
    }
}
