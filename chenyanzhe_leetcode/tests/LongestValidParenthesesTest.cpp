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

#include "LongestValidParentheses.hpp"

TEST_CASE("Longest Valid Parentheses") {
    LongestValidParentheses s;
    SECTION("Sample tests") {
        string str1 = "(()";
        REQUIRE(s.longestValidParentheses(str1) == 2);
        string str2 = ")()())";
        REQUIRE(s.longestValidParentheses(str2) == 4);
    }
    SECTION("Normal tests") {
        string str1 = "(())()";
        REQUIRE(s.longestValidParentheses(str1) == 6);
        string str2 = ")(()())";
        REQUIRE(s.longestValidParentheses(str2) == 6);
        string str3 = "()(()";
        REQUIRE(s.longestValidParentheses(str3) == 2);
        string str4 = "(()(((()";
        REQUIRE(s.longestValidParentheses(str4) == 2);
        string str5 = "()(())";
        REQUIRE(s.longestValidParentheses(str5) == 6);
    }
    SECTION("Empty string") {
        REQUIRE(s.longestValidParentheses("") == 0);
    }
}
