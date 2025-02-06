#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/sequential-digits

class Solution {
 public:
  vector<int> sequentialDigits(int low, int high) {
    vector<int> ans;
    for (int i = 1; i < 10; ++i) {
      for (int dig = i, cur = dig; dig < 10 and cur <= high;
           cur = cur * 10 + (++dig)) {
        if (cur >= low) ans.push_back(cur);
      }
    }
    sort(ans.begin(), ans.end());
    return ans;
  }
};
