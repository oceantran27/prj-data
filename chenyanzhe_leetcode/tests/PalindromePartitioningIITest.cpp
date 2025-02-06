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

#include "PalindromePartitioningII.hpp"

TEST_CASE("Palindrome Partitioning II") {
    PalindromePartitioningII s;
    SECTION("Sample test") {
        REQUIRE(s.minCut("aab") == 1);
    }
}
