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

#include "BitwiseANDOfNumbersRange.hpp"

TEST_CASE("Bitwise AND of Numbers Range") {
    BitwiseANDOfNumbersRange s;
    SECTION("Sample test") {
        REQUIRE(s.rangeBitwiseAnd(5, 7) == 4);
    }
}
