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

#include "FindTheDifference.hpp"

TEST_CASE("Find the Difference") {
    FindTheDifference sol;
    SECTION("Sample tests") {
        string s = "abcd";
        string t = "abcde";
        REQUIRE(sol.findTheDifference(s, t) == 'e');
    }
}