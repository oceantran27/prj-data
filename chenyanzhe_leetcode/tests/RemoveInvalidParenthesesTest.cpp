#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "catch.hpp"

#include "RemoveInvalidParentheses.hpp"

using namespace std;

TEST_CASE("Remove Invalid Parentheses") {
    RemoveInvalidParentheses s;
    SECTION("Sample test") {
        vector<string> expected = {"()()()", "(())()"};
        vector<string> result = s.removeInvalidParentheses("()())()");
        REQUIRE(expected.size() == result.size());

        for (auto r : result)
            REQUIRE_FALSE(find(expected.begin(), expected.end(), r) == expected.end());
    }
}
