#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards

class Solution {
 public:
  int maxScore(vector<int>& cardPoints, int k) {
    int n = cardPoints.size(), nk = n - k - 1, tot = 0, best = 1'000'000'001;
    if (k == n) return accumulate(cardPoints.begin(), cardPoints.end(), 0);
    for (int i = 0, cur = 0; i < n; ++i) {
      cur += cardPoints[i];
      tot += cardPoints[i];
      if (i >= nk) {
        best = min(best, cur);
        cur -= cardPoints[i - nk];
      }
    }
    return tot - best;
  }
};
