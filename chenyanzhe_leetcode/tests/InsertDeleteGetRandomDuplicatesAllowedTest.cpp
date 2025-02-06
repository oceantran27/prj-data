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

#include "InsertDeleteGetRandomDuplicatesAllowed.hpp"

TEST_CASE("Insert Delete GetRandom O(1) - Duplicates allowed") {
    RandomizedCollection collection;
    SECTION("Normal test") {
        REQUIRE(collection.insert(1));
        REQUIRE_FALSE(collection.insert(1));
        REQUIRE(collection.insert(2));
        REQUIRE(collection.remove(1));
        REQUIRE(collection.remove(1));
        REQUIRE(collection.getRandom() == 2);
    }
}
