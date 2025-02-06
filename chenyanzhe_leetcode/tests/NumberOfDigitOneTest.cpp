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

#include "NumberOfDigitOne.hpp"

TEST_CASE("Number of Digit One") {
    NumberOfDigitOne s;
    SECTION("Sample test") {
        REQUIRE(s.countDigitOne(13) == 6);
    }
}
