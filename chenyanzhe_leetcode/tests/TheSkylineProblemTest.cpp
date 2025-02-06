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

#include "TheSkylineProblem.hpp"

TEST_CASE("The Skyline Problem") {
    TheSkylineProblem s;
    SECTION("Sample test") {
        vector<vector<int>> buildings{
                {2,  9,  10},
                {3,  7,  15},
                {5,  12, 12},
                {15, 20, 10},
                {19, 24, 8}
        };
        vector<pair<int, int>> expected{
                {2,  10},
                {3,  15},
                {7,  12},
                {12, 0},
                {15, 10},
                {20, 8},
                {24, 0}
        };
        vector<pair<int, int>> result = s.getSkyline(buildings);
        REQUIRE(expected.size() == result.size());

        for (int i = 0; i < result.size(); i++) {
            REQUIRE(result[i].first == expected[i].first);
            REQUIRE(result[i].second == expected[i].second);
        }
    }
    SECTION("Equal height buildings") {
        vector<vector<int>> buildings{
                {0, 2, 3},
                {2, 5, 3}
        };
        vector<pair<int, int>> expected{
                {0, 3},
                {5, 0}
        };
        vector<pair<int, int>> result = s.getSkyline(buildings);
        REQUIRE(expected.size() == result.size());

        for (int i = 0; i < result.size(); i++) {
            REQUIRE(result[i].first == expected[i].first);
            REQUIRE(result[i].second == expected[i].second);
        }
    }
}
