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

#include "NimGame.hpp"

TEST_CASE("Nim Game") {
    NimGame s;
    SECTION("Sample test") {
        REQUIRE_FALSE(s.canWinNim(4));
    }
}
