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

#include "IntegerBreak.hpp"

TEST_CASE("Integer Break") {
    IntegerBreak s;
    SECTION("Sample test") {
        REQUIRE(s.integerBreak(2) == 1);
        REQUIRE(s.integerBreak(10) == 36);
    }
}
