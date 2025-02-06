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

#include "SimplifyPath.hpp"

TEST_CASE("Simplify Path") {
    SimplifyPath s;
    SECTION("Sample tests") {
        REQUIRE(s.simplifyPath("/home/") == "/home");
        REQUIRE(s.simplifyPath("/a/./b/../../c/") == "/c");
    }
    SECTION("Corner case tests") {
        REQUIRE(s.simplifyPath("/../") == "/");
        REQUIRE(s.simplifyPath("/home//foo/") == "/home/foo");
    }
}
