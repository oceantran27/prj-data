#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/set-mismatch

class Solution {
 public:
  vector<int> findErrorNums(vector<int>& nums) {
    int n = nums.size();
    vector<bool> seen(n + 1, false);
    vector<int> ret;
    for (int x : nums) {
      if (seen[x])
        ret.push_back(x);
      else
        seen[x] = true;
    }

    for (int i = 1; i <= n; ++i)
      if (!seen[i]) ret.push_back(i);
    return ret;
  }
};
