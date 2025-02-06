#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 458 Poor Pigs.cpp

class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        return (int)ceil(log(buckets) / log(minutesToTest / minutesToDie + 1));
    }
};