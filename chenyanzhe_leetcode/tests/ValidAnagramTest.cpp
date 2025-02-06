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

#include "ValidAnagram.hpp"

TEST_CASE("Valid Anagram") {
    ValidAnagram s;
    SECTION("Sample test") {
        REQUIRE(s.isAnagram("anagram", "nagaram"));
        REQUIRE_FALSE(s.isAnagram("rat", "car"));
    }
}
