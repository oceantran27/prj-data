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

#include "ImplementQueueUsingStacks.hpp"

TEST_CASE("Implement Queue Using Stacks") {
    ImplementQueueUsingStacks s;
    SECTION("Sample test") {
        REQUIRE(s.empty());
        s.push(1);
        REQUIRE(s.peek() == 1);
        s.push(2);
        REQUIRE(s.peek() == 1);
        s.pop();
        REQUIRE(s.peek() == 2);
        REQUIRE_FALSE(s.empty());
    }
}
