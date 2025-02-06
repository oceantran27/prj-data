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

#include "GenerateParentheses.hpp"

TEST_CASE("Generate Parentheses") {
    GenerateParentheses s;
    SECTION("Sample test") {
        vector<string> expected = {
                "((()))", "(()())", "(())()", "()(())", "()()()"
        };
        vector<string> results = s.generateParenthesis(3);
        REQUIRE(results.size() == 5);

        for (auto p : expected)
            REQUIRE_FALSE(find(results.begin(), results.end(), p) == results.end());
    }
}
