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

#include "KthSmallestElementInASortedMatrix.hpp"

TEST_CASE("Kth Smallest Element in a Sorted Matrix") {
    KthSmallestElementInASortedMatrix s;
    SECTION("Sample tests") {
        vector<vector<int>> matrix{{1,  5,  9},
                                   {10, 11, 13},
                                   {12, 13, 15}};
        int k = 8;

        REQUIRE(s.kthSmallest(matrix, k) == 13);
    }
}