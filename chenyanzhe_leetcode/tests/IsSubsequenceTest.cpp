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

#include "IsSubsequence.hpp"

TEST_CASE("Is Subsequence") {
    IsSubsequence s;
    SECTION("Sample tests") {
        REQUIRE(s.isSubsequence("abc", "ahbgdc"));
        REQUIRE_FALSE(s.isSubsequence("axc", "ahbgdc"));
    }
}
