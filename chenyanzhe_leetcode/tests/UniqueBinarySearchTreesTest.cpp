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

#include "UniqueBinarySearchTrees.hpp"

TEST_CASE("Unique Binary Search Trees") {
    UniqueBinarySearchTrees s;
    SECTION("Sample test") {
        REQUIRE(s.numTrees(3) == 5);
    }
}
