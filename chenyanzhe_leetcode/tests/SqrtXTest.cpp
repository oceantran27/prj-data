#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "catch.hpp"

#include "SqrtX.hpp"

#include <climits>

using namespace std;

TEST_CASE("Sqrt X") {
    SqrtX s;
    SECTION("Sample tests") {
        for (int i = 0; i <= 10; i++)
            REQUIRE(s.mySqrt(i) == (int) sqrt(i));
    }
    SECTION("Boundary test") {
        REQUIRE(s.mySqrt(INT_MAX) == (int) sqrt(INT_MAX));
    }
}
