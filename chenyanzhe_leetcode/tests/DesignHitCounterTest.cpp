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

#include "DesignHitCounter.hpp"

TEST_CASE("Design Hit Counter") {
    HitCounter s;
    SECTION("Sample test") {
        s.hit(1);
        s.hit(2);
        s.hit(3);
        REQUIRE(s.getHits(4) == 3);
        s.hit(300);
        REQUIRE(s.getHits(300) == 4);
        REQUIRE(s.getHits(301) == 3);
    }
}
