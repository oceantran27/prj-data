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

#include "ExcelSheetColumnTitle.hpp"

TEST_CASE("Excel Sheet Column Title") {
    ExcelSheetColumnTitle s;
    SECTION("Sample test") {
        REQUIRE(s.convertToTitle(1) == "A");
        REQUIRE(s.convertToTitle(26) == "Z");
        REQUIRE(s.convertToTitle(27) == "AA");
    }
}
