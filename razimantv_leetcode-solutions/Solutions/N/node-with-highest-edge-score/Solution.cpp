#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/node-with-highest-edge-score

class Solution {
 public:
  int edgeScore(vector<int>& edges) {
    int n = edges.size();
    vector<long long> score(n);
    for (int i = 0; i < n; ++i) score[edges[i]] += i;
    int best = 0;
    for (int i = 1; i < n; ++i)
      if (score[i] > score[best]) best = i;
    return best;
  }
};
