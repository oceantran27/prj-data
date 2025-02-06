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

#include "PowerOfTwo.hpp"

TEST_CASE("Power of Two") {
    PowerOfTwo s;
    SECTION("Sample tests") {
        REQUIRE_FALSE(s.isPowerOfTwo(-1));
        REQUIRE_FALSE(s.isPowerOfTwo(0));
        REQUIRE(s.isPowerOfTwo(1));
        REQUIRE(s.isPowerOfTwo(2));
        REQUIRE_FALSE(s.isPowerOfTwo(3));
        REQUIRE(s.isPowerOfTwo(4));
        REQUIRE_FALSE(s.isPowerOfTwo(5));
    }
}
