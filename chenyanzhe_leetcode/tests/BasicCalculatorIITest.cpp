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

#include "BasicCalculatorII.hpp"

TEST_CASE("Basic Calculator II") {
    BasicCalculatorII s;
    SECTION("Sample test") {
        REQUIRE(s.calculate("3+2*2") == 7);
        REQUIRE(s.calculate(" 3/2 ") == 1);
        REQUIRE(s.calculate(" 3+5 / 2 ") == 5);
        REQUIRE(s.calculate("100000000/1/2/3/4/5/6/7/8/9/10") == 27);
    }
}
