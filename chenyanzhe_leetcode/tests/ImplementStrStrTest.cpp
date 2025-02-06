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

#include "ImplementStrStr.hpp"

TEST_CASE("Implement strStr") {
    ImplementStrStr s;
    SECTION("Normal test") {
        string haystack = "Normal test";
        string needle = "al t";
        REQUIRE(s.strStr(haystack, needle) == 4);
    }
    SECTION("Not found") {
        string haystack = "Normal test";
        string needle = "alt";
        REQUIRE(s.strStr(haystack, needle) == -1);
    }
}
