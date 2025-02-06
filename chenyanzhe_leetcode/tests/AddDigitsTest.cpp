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

#include "AddDigits.hpp"

TEST_CASE("Add Digits") {
    AddDigits s;
    SECTION("Sample test") {
        REQUIRE(s.addDigits(10) == 1);
        REQUIRE(s.addDigits(39) == 3);
    }
}
