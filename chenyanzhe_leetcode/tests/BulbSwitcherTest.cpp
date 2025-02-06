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

#include "BulbSwitcher.hpp"

TEST_CASE("Bulb Switcher") {
    BulbSwitcher s;
    SECTION("Sample test") {
        REQUIRE(s.bulbSwitch(3) == 1);
    }
}