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

#include "LongestCommonPrefix.hpp"

TEST_CASE("Longest Common Prefix") {
    LongestCommonPrefix s;
    SECTION("Normal tests") {
        vector<string> strs{"aeda", "aedasdf", "aedgcgs"};
        REQUIRE(s.longestCommonPrefix(strs) == "aed");
    }
    SECTION("Empty strings") {
        vector<string> strs1{"", "", ""};
        REQUIRE(s.longestCommonPrefix(strs1) == "");
        vector<string> strs2{"aeda", "aedasdf", "", "aedgcgs"};
        REQUIRE(s.longestCommonPrefix(strs2) == "");
    }
    SECTION("Single string") {
        vector<string> strs{"abc"};
        REQUIRE(s.longestCommonPrefix(strs) == "abc");
    }
    SECTION("Identical strings") {
        vector<string> strs{"abcd", "abcd", "abcd", "abcd"};
        REQUIRE(s.longestCommonPrefix(strs) == "abcd");
    }
}
