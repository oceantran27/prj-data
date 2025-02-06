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

#include "ValidPerfectSquare.hpp"

TEST_CASE("Valid Perfect Square") {
    ValidPerfectSquare s;
    SECTION("Sample tests") {
        REQUIRE(s.isPerfectSquare(16));
        REQUIRE_FALSE(s.isPerfectSquare(14));
    }
}