#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-cost-for-tickets

class Solution {
 public:
  int mincostTickets(vector<int>& days, vector<int>& costs) {
    int dd[] = {1, 7, 30}, N = days.size();
    vector<int> best(days.size(), 1000000000);
    for (int i = N - 1; i >= 0; --i) {
      for (int d = 0; d < 3; ++d) {
        int j = lower_bound(days.begin(), days.end(), days[i] + dd[d]) -
                days.begin();
        best[i] = min(best[i], costs[d] + (j == N ? 0 : best[j]));
      }
    }
    return best[0];
  }
};
