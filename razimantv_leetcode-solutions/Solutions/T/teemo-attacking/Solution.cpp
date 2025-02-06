#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/teemo-attacking

class Solution {
 public:
  int findPoisonedDuration(vector<int>& t, int d) {
    int ans = 0;
    for (int i = 0; i < t.size(); ++i) {
      ans += min(d, (i + 1) < t.size() ? (t[i + 1] - t[i]) : d);
    }
    return ans;
  }
};
