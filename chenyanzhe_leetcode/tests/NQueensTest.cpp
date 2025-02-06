#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "catch.hpp"

#include "NQueens.hpp"

using namespace std;

TEST_CASE("N Queens") {
    NQueens s;
    SECTION("Sample test") {
        vector<vector<string>> expected{
                {
                        ".Q..",
                        "...Q",
                        "Q...",
                        "..Q."
                },
                {
                        "..Q.",
                        "Q...",
                        "...Q",
                        ".Q.."
                }
        };
        vector<vector<string>> result = s.solveNQueens(4);
        REQUIRE(result.size() == 2);

        for (int i = 0; i < 2; i++)
            REQUIRE_FALSE(find(result.begin(), result.end(), expected[i]) == result.end());
    }
}
