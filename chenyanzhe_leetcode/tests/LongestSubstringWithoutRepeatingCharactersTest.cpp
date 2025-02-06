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

#include "LongestSubstringWithoutRepeatingCharacters.hpp"

TEST_CASE("Longest Substring Without Repeating Characters") {
    LongestSubstringWithoutRepeatingCharacters s;
    SECTION("Sample test") {
        REQUIRE(s.lengthOfLongestSubstring("abcabcbb") == 3);
        REQUIRE(s.lengthOfLongestSubstring("bbbbb") == 1);
    }
    SECTION("Empty string should return zero") {
        REQUIRE(s.lengthOfLongestSubstring("") == 0);
    }
    SECTION("All characters are distinct") {
        REQUIRE(s.lengthOfLongestSubstring("defabcghiljk") == 12);
    }
}
