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

#include "NumberOfIslands.hpp"

TEST_CASE("Number of Islands") {
    NumberOfIslands s;
    SECTION("Sample test") {
        vector<vector<char>> grid1{
                {'1', '1', '1', '1', '0'},
                {'1', '1', '0', '1', '0'},
                {'1', '1', '0', '0', '0'},
                {'0', '0', '0', '0', '0'}
        };
        REQUIRE(s.numIslands(grid1) == 1);
        vector<vector<char>> grid2{
                {'1', '1', '0', '0', '0'},
                {'1', '1', '0', '0', '0'},
                {'0', '0', '1', '0', '0'},
                {'0', '0', '0', '1', '1'}
        };
        REQUIRE(s.numIslands(grid2) == 3);
    }
}
