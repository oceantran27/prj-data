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

#include "FindMedianFromDataStream.hpp"

TEST_CASE("Find Median from Data Stream") {
    MedianFinder s;
    SECTION("Sample test") {
        s.addNum(6);
        REQUIRE(s.findMedian() == 6.0);
        s.addNum(10);
        REQUIRE(s.findMedian() == 8.0);
        s.addNum(2);
        REQUIRE(s.findMedian() == 6.0);
        s.addNum(6);
        REQUIRE(s.findMedian() == 6.0);
        s.addNum(5);
        REQUIRE(s.findMedian() == 6.0);
    }
}
