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

#include "ShortestPalindrome.hpp"

TEST_CASE("Shortest Palindrome") {
    ShortestPalindrome s;
    SECTION("Sample test") {
        REQUIRE(s.shortestPalindrome("aacecaaa") == "aaacecaaa");
        REQUIRE(s.shortestPalindrome("abcd") == "dcbabcd");
    }
}
