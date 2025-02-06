#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/put-marbles-in-bags/

class Solution {
 public:
  long long putMarbles(vector<int>& weights, int k) {
    vector<int> pair;
    for (int i = 1, n = weights.size(); i < n; ++i)
      pair.push_back(weights[i - 1] + weights[i]);
    sort(pair.begin(), pair.end());
    --k;
    return accumulate(pair.end() - k, pair.end(), 0ll) -
           accumulate(pair.begin(), pair.begin() + k, 0ll);
  }
};
