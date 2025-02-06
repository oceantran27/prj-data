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

#include "InterleavingString.hpp"

TEST_CASE("Interleaving String") {
    InterleavingString s;
    SECTION("Sample tests") {
        REQUIRE(s.isInterleave("aabcc", "dbbca", "aadbbcbcac"));
        REQUIRE_FALSE(s.isInterleave("aabcc", "dbbca", "aadbbbaccc"));
    }
}
