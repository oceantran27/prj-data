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

#include "FactorialTrailingZeroes.hpp"

TEST_CASE("Factorial Trailing Zeroes") {
    FactorialTrailingZeroes s;
    SECTION("Sample test") {
        REQUIRE(s.trailingZeroes(5) == 1);
    }
}
