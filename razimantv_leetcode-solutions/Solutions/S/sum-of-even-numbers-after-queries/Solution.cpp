#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/sum-of-even-numbers-after-queries/

class Solution {
 public:
  vector<int> sumEvenAfterQueries(vector<int>& nums,
                                  vector<vector<int>>& queries) {
    int total{};
    for (int x : nums)
      if (!(x & 1)) total += x;
    vector<int> result;
    for (auto& q : queries) {
      int val = q[0], &x = nums[q[1]];
      if (!(x & 1)) total -= x;
      x += val;
      if (!(x & 1)) total += x;
      result.push_back(total);
    }
    return result;
  }
};
