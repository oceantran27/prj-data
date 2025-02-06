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

#include "BasicCalculator.hpp"

TEST_CASE("Basic Calculator") {
    BasicCalculator s;
    SECTION("Sample test") {
        REQUIRE(s.calculate("  1 - 3 + 4 - (3 -1 + 3)") == -3);
    }
}
