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

#include "HappyNumber.hpp"

TEST_CASE("Happy Number") {
    HappyNumber s;
    SECTION("Sample test") {
        REQUIRE(s.isHappy(19));
        REQUIRE_FALSE(s.isHappy(3));
    }
}
