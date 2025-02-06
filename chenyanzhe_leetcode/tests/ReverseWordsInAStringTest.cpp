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

#include "ReverseWordsInAString.hpp"

TEST_CASE("Reverse Words in a String") {
    ReverseWordsInAString s;
    SECTION("Sample test") {
        string str1 = "the sky is blue";
        s.reverseWords(str1);
        REQUIRE(str1 == "blue is sky the");

        string str2 = "   the   sky  is    blue   ";
        s.reverseWords(str2);
        REQUIRE(str2 == "blue is sky the");
    }
}
