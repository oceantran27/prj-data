#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "catch.hpp"

#include "RepeatedDNASequences.hpp"

using namespace std;

TEST_CASE("Repeated DNA Sequences") {
    RepeatedDNASequences s;
    SECTION("Sample test") {
        vector<string> expected{"AAAAACCCCC", "CCCCCAAAAA"};
        vector<string> result =
                s.findRepeatedDnaSequences("AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT");
        REQUIRE(expected.size() == result.size());

        for (auto r : result)
            REQUIRE_FALSE(find(expected.begin(), expected.end(), r) == expected.end());
    }
}
