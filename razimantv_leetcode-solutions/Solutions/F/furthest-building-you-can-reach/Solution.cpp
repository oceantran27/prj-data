#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/furthest-building-you-can-reach

class Solution {
 public:
  int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
    multiset<int> big;
    int best = 0;
    for (int i = 1, n = heights.size(), used = 0; i < n; ++i) {
      big.insert(max(heights[i] - heights[i - 1], 0));
      if (big.size() > ladders) {
        if ((used += *big.begin()) > bricks) break;
        big.erase(big.begin());
      }
      ++best;
    }
    return best;
  }
};
