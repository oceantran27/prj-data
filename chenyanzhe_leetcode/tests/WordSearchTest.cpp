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

#include "WordSearch.hpp"

TEST_CASE("Word Search") {
    WordSearch s;
    SECTION("Sample tests") {
        vector<vector<char>> board{
                {'A', 'B', 'C', 'E'},
                {'S', 'F', 'C', 'S'},
                {'A', 'D', 'E', 'E'}
        };
        REQUIRE(s.exist(board, "ABCCED"));
        REQUIRE(s.exist(board, "SEE"));
        REQUIRE_FALSE(s.exist(board, "ABCB"));
    }
}
