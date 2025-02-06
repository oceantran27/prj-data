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
// Ref: https://discuss.leetcode.com/topic/71450/simple-java-solution-with-2-pointers
class Solution {
public:
  int findRadius(vector<int>& houses, vector<int>& heaters) {
    sort(houses.begin(), houses.end());
    sort(heaters.begin(), heaters.end());
    int i = 0, ans = 0;
    for (int h : houses) {
      while (i < heaters.size() - 1 && heaters[i] + heaters[i + 1] <= h * 2) ++i;
      ans = max(ans, abs(heaters[i] - h));
    }
    return ans;
  }
};