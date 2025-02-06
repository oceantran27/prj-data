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

#include "RemoveDuplicateLetters.hpp"

TEST_CASE("Remove Duplicate Letters") {
    RemoveDuplicateLetters s;
    SECTION("Sample test") {
        REQUIRE(s.removeDuplicateLetters("bcabc") == "abc");
        REQUIRE(s.removeDuplicateLetters("cbacdcbc") == "acdb");
    }
}