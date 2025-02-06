#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "catch.hpp"

#include "SubstringWithConcatenationOfAllWords.hpp"

using namespace std;

TEST_CASE("Substring with Concatenation of All Words") {
    SubstringWithConcatenationOfAllWords s;
    SECTION("Sample test") {
        string str = "barfoothefoobarman";
        vector<string> words{"foo", "bar"};
        vector<int> expected{0, 9};
        vector<int> result = s.findSubstring(str, words);
        sort(result.begin(), result.end());
        REQUIRE(result == expected);
    }
}
