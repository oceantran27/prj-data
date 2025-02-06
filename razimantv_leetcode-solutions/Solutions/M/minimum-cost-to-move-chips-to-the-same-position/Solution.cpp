#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position

class Solution {
 public:
  int minCostToMoveChips(vector<int>& position) {
    int cnt[2] = {0, 0};
    for (int v : position) cnt[v & 1]++;
    return min(cnt[0], cnt[1]);
  }
};
