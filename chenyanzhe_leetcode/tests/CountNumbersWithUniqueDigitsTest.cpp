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

#include "CountNumbersWithUniqueDigits.hpp"

TEST_CASE("Count Numbers with Unique Digits") {
    CountNumbersWithUniqueDigits s;
    SECTION("Sample tests") {
        REQUIRE(s.countNumbersWithUniqueDigits(0) == 1);
        REQUIRE(s.countNumbersWithUniqueDigits(1) == 10);
        REQUIRE(s.countNumbersWithUniqueDigits(2) == 91);
        REQUIRE(s.countNumbersWithUniqueDigits(3) == 739);
        REQUIRE(s.countNumbersWithUniqueDigits(4) == 5275);
    }
}
