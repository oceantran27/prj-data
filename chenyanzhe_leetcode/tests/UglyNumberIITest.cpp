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

#include "UglyNumberII.hpp"

TEST_CASE("Ugly Number II") {
    UglyNumberII s;
    SECTION("Sample test") {
        REQUIRE(s.nthUglyNumber(10) == 12);
    }
}
