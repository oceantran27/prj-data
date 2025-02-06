#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/best-sightseeing-pair

class Solution {
 public:
  int maxScoreSightseeingPair(vector<int>& values) {
    int prev = values[0], best = 0;
    for (int i = 1, n = values.size(); i < n; ++i) {
      best = max(best, prev + values[i] - i);
      prev = max(prev, values[i] + i);
    }
    return best;
  }
};
