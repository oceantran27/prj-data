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

#include "CountPrimes.hpp"

TEST_CASE("Count Primes") {
    CountPrimes s;
    SECTION("Sample test") {
        REQUIRE(s.countPrimes(1) == 0);
        REQUIRE(s.countPrimes(2) == 0);
        REQUIRE(s.countPrimes(3) == 1);
        REQUIRE(s.countPrimes(4) == 2);
        REQUIRE(s.countPrimes(5) == 2);
        REQUIRE(s.countPrimes(6) == 3);
    }
}
