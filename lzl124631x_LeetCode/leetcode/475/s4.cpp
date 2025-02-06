#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/heaters
// Author: github.com/lzl124631x
// Time: O(NlogN)
// Space: O(1)
class Solution {
public:
  int findRadius(vector<int>& houses, vector<int>& heaters) {
    sort(heaters.begin(), heaters.end());
    int ans = 0;
    for (int h : houses) {
      auto i = lower_bound(heaters.begin(), heaters.end(), h);
      int d = INT_MAX;
      if (i != heaters.end()) d = min(d, *i - h);
      if (i != heaters.begin()) d = min(d, h - *(i - 1));
      ans = max(ans, d);
    }
    return ans;
  }
};