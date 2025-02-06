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

#include "IntegerToEnglishWords.hpp"

TEST_CASE("Integer to English Words") {
    IntegerToEnglishWords s;
    SECTION("Sample test") {
        REQUIRE(s.numberToWords(1) == "One");
    }
}
