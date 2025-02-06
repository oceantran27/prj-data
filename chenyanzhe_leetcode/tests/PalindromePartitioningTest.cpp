#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "catch.hpp"

#include "PalindromePartitioning.hpp"

using namespace std;

TEST_CASE("Palindrome Partitioning") {
    PalindromePartitioning s;
    SECTION("Sample test") {
        vector<vector<string>> expected{
                {"aa", "b"},
                {"a",  "a", "b"}
        };
        vector<vector<string>> result = s.partition("aab");
        REQUIRE(result.size() == expected.size());

        for (auto r : result)
            REQUIRE_FALSE(find(expected.begin(), expected.end(), r) == expected.end());
    }
}
