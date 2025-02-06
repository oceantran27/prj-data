#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/partition-equal-subset-sum

class Solution {
 public:
  bool canPartition(vector<int>& nums) {
    int tot = 0;
    for (int n : nums) tot += n;
    if (tot & 1) return false;
    vector<char> poss((tot >>= 1) + 1, 0);
    poss[0] = 1;
    for (int n : nums) {
      for (int i = tot; i >= n; --i) poss[i] |= poss[i - n];
      if (poss[tot]) return true;
    }
    return false;
  }
};
