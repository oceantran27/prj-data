#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/best-team-with-no-conflicts/

class Solution {
 public:
  int bestTeamScore(vector<int>& scores, vector<int>& ages) {
    int n = scores.size();
    vector<int> idx(n);
    iota(idx.begin(), idx.end(), 0);
    sort(idx.begin(), idx.end(), [&](int i, int j) {
      if (ages[i] != ages[j]) return ages[i] < ages[j];
      return scores[i] < scores[j];
    });

    vector<int> dp(n);
    for (int i = 0; i < n; ++i) {
      int x = scores[idx[i]];
      dp[i] = x;
      for (int j = 0; j < i; ++j)
        if (scores[idx[j]] <= x) dp[i] = max(dp[i], dp[j] + x);
    }
    return *max_element(dp.begin(), dp.end());
  }
};
