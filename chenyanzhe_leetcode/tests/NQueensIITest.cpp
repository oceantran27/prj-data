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

#include "NQueensII.hpp"

TEST_CASE("N-Queens II") {
    NQueensII s;
    SECTION("Sample test") {
        REQUIRE(s.totalNQueens(4) == 2);
    }
}
