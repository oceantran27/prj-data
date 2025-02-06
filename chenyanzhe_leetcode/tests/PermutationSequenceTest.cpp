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

#include "PermutationSequence.hpp"

TEST_CASE("Permutation Sequence") {
    PermutationSequence s;
    SECTION("Sample tests") {
        vector<string> expected{"123", "132", "213", "231", "312", "321"};

        for (int k = 1; k <= 6; k++)
            REQUIRE(s.getPermutation(3, k) == expected[k - 1]);
    }
}
